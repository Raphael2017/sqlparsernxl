#include "resolve.h"
#include "node.h"
#include "expr.h"
#include "SelectStmt.h"
#include "LogicPlan.h"
#include "ResultPlan.h"
#include <assert.h>
#include <list>
#include "LocalTableMgr.h"
#include "TableRef.h"
#include "expr.h"
#include "LogicPlan.h"

namespace resolve
{
    int resolve(ResultPlan* plan, Node* node)
    {
        assert(node != nullptr);
        assert(plan != nullptr);

        switch (node->nodeType_)
        {
            case E_STMT_LIST:
            {
                resolve_multi_statements(plan, node);
            }
                break;
            case E_SELECT:
            {
                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, node, query_id);
            }
                break;
            case E_UPDATE:
            {
                uint64_t query_id = OB_INVALID_ID;
                resolve_update_statement(plan, node, query_id);
            }
                break;
            default:
                assert(false);  /*unreachable*/
                break;
        }
        return 0;
    }

    int resolve_multi_statements(ResultPlan* plan, Node* node)
    {
        assert(node->nodeType_ == E_STMT_LIST);
        std::list<Node*> stmts;
        Node::ToList(plan->tree_root_, stmts);

        for (auto stmt : stmts)
        {
            plan->startNewStmt_(plan);
            plan->reset();
            resolve::resolve(plan, stmt);
        }
        return 0;
    }

    int resolve_update_statement(
            ResultPlan* plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent/* = nullptr*/,
            ScopeType scope/* = E_SCOPE_WHATEVER*/)
    {
        assert(node->nodeType_ == E_UPDATE);
        return 0;
    }

    int resolve_select_statement(
            ResultPlan *plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent/* = nullptr*/,
            ScopeType scope/* = E_SCOPE_WHATEVER*/)
    {
        if (node->nodeType_ == E_SELECT_WITH_PARENS)
            node = Node::remove_parens(node);
        assert(node->nodeType_ == E_SELECT);
        query_id = plan->logicPlan_->generate_query_id();
        SelectStmt* select_stmt = dynamic_cast<SelectStmt*>(plan->logicPlan_->add_query(E_STMT_TYPE_SELECT));
        select_stmt->set_query_id(query_id);
        select_stmt->set_parent(parent);

        Node* set_op = node->getChild(E_SELECT_SET_OPERATION);
        if (set_op != nullptr)
        {
            /*select with set operation*/
            Node* former = node->getChild(E_SELECT_FORMER_SELECT_STMT);
            uint64_t left_query_id = OB_INVALID_ID;
            resolve_select_statement(plan, former, left_query_id, select_stmt);
            select_stmt->set_set_op_left_query_id(left_query_id);
            Node* latter = node->getChild(E_SELECT_LATER_SELECT_STMT);
            uint64_t  right_query_id = OB_INVALID_ID;
            resolve_select_statement(plan, latter, right_query_id, select_stmt);
            select_stmt->set_set_op_right_query_id(right_query_id);
        }
        else
        {
            /*simple select*/
            resolve_cte_clause(plan, node->getChild(E_SELECT_OPT_WITH), select_stmt);
            resolve_from_clause(plan, node->getChild(E_SELECT_FROM_LIST), select_stmt);

            resolve_where_clause(plan, node->getChild(E_SELECT_OPT_WHERE), select_stmt);
            resolve_select_items(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt, scope);
        }
        return 0;
    }

    int resolve_cte_clause(
            ResultPlan* plan,
            Node* node,
            Stmt* parent)
    {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_OPT_WITH_CLAUSE);
        Node* ctes = node->getChild(E_OPT_WITH_CLAUSE_CTE_LIST);
        std::list<Node*> ls;
        Node::ToList(ctes, ls);
        for (auto cte : ls)
        {
            uint64_t table_id = OB_INVALID_ID;
            resolve_cte(plan, cte, parent, table_id);
        }
        return 0;
    }

    int resolve_cte(
            ResultPlan* plan,
            Node* node,
            Stmt* parent,
            uint64_t& out_table_id)
    {
        assert(node && node->nodeType_ == E_COMMON_TABLE_EXPR);
        Node* subquery = node->getChild(E_COMMON_TABLE_EXPR_SUBQUERY);
        assert(subquery && subquery->nodeType_ == E_SELECT_WITH_PARENS);
        subquery = Node::remove_parens(subquery);
        assert(subquery->nodeType_ == E_SELECT);
        uint64_t query_id = OB_INVALID_ID;

        Node* tb = node->getChild(E_COMMON_TABLE_EXPR_TABLE);
        assert(tb && tb->nodeType_ == E_IDENTIFIER);
        std::string table_name = tb->terminalToken_.str;
        std::string alias_name;
        /*
         * Since recursive common table expression is supported,
         * so call add_cte_item before resolve the cte definition
         *
         * */
        CteDef* ctedef = parent->add_cte_def(plan, query_id, table_name);
        resolve_select_statement(plan, subquery, query_id, parent);
        /*
         * Since recursive common table expression is supported,
         * so this cte's definition query_id need to be set up
         * */
        ctedef->ref_query_id_ = query_id;
        Node* alias_list = node->getChild(E_COMMON_TABLE_EXPR_COLUMNS);
        std::vector<std::string> aliass{};
        if (alias_list)
        {
            alias_list = Node::remove_parens(alias_list);
            std::list<Node*> ls;
            Node::ToList(alias_list, ls);
            for (Node* it : ls)
                aliass.push_back(it->terminalToken_.str);
        }
        ctedef->set_column_alias(plan, aliass);
        return 0;
    }

    int resolve_from_clause(
            ResultPlan* plan,
            Node* node,
            Stmt* parent)
    {
        if (!node)
            return 0;

        assert(node->nodeType_ == E_FROM_CLAUSE);
        node = node->getChild(E_FROM_CLAUSE_FROM_LIST);
        std::list<Node*> ls{};
        Node::ToList(node, ls);
        for (auto child_node : ls)
        {
            uint64_t table_id = OB_INVALID_ID;
            resolve_table(plan, child_node, parent, table_id);
        }
        return 0;
    }

    int resolve_where_clause(
            ResultPlan* plan,
            Node* node,
            Stmt* parent)
    {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_WHERE_CLAUSE);
        Node* expr = node->getChild(E_WHERE_CLAUSE_EXPR);
        //resolve_expr(plan, expr, parent);
        return 0;
    }

    int resolve_select_items(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            ScopeType scope)
    {
        assert(node != nullptr);
        std::list<Node*> ls;
        Node::ToList(node, ls);

        for (auto child : ls)
        {
            assert(child->nodeType_ == E_PROJECT_STRING);
            Node* nd = child->getChild(E_PROJECT_STRING_EXPR_OR_ALIAS);
            std::string alias_name = "";
            uint64_t sql_raw_expr_id = OB_INVALID_ID;
            switch (nd->nodeType_)
            {
                case E_ALIAS:
                {
                    uint64_t sql_raw_expr_id = OB_INVALID_ID;
                    Node* t = nd->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
                    resolve_independ_expr(plan, t, sql_raw_expr_id, parent);
                    assert(sql_raw_expr_id != OB_INVALID_ID);
                    Node* alias_node = nd->getChild(E_ALIAS_RELATION_NAME);
                    assert(alias_node != nullptr);
                    parent->add_select_item(sql_raw_expr_id, alias_node->terminalToken_.str, true);
                }
                    break;
                case E_STAR:
                {
                    parent->add_select_item_expand_star(plan, "", "");
                }
                    break;
                default:
                {
                    // expr
                    if (nd->nodeType_ == E_OP_NAME_FIELD)
                    {
                        Node* field = nd->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
                        Node* tb = nd->getChild(E_OP_NAME_FIELD_RELATION_NAME);
                        Node* schema = nd->getChild(E_OP_NAME_FIELD_SCHEMA_NAME);

                        if (field->nodeType_ == E_STAR)
                        {
                            assert(tb != nullptr);
                            std::string table_name = tb->terminalToken_.str;
                            std::string schema_name = schema ? schema->terminalToken_.str : "";
                            parent->add_select_item_expand_star(plan, schema_name, table_name);
                        }
                        else
                        {
                            uint64_t sql_raw_expr_id = OB_INVALID_ID;
                            resolve_independ_expr(plan, nd, sql_raw_expr_id, parent);
                            std::string column_name = field->terminalToken_.str;
                            parent->add_select_item(sql_raw_expr_id, column_name, false);
                        }
                    }
                    else
                    {
                        uint64_t sql_raw_expr_id = OB_INVALID_ID;
                        resolve_independ_expr(plan, nd, sql_raw_expr_id, parent);
                        parent->add_select_item(sql_raw_expr_id, nd->serialize(), false);   // this is a nameless field
                    }
                }
                    break;
            }
        }
        return 0;
    }

    int resolve_table(
            ResultPlan* plan,
            Node* node,
            Stmt* parent,
            uint64_t& out_table_id)
    {
        assert(node != nullptr);
        out_table_id = OB_INVALID_ID;
        Node* table_node = node;
        Node* alias_node = nullptr;
        Node* schema_node = nullptr;
        if (node->nodeType_ == E_ALIAS)
        {
            table_node = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
            alias_node = node->getChild(E_ALIAS_RELATION_NAME);
        }
        else if (node->nodeType_ == E_TABLE_IDENT)
        {
            table_node = node->getChild(E_TABLE_IDENT_OBJECT);
            schema_node = node->getChild(E_TABLE_IDENT_SCHEMA);
        }

        if (table_node->nodeType_ == E_SELECT_WITH_PARENS)
        {
            table_node = Node::remove_parens(table_node);
        }
        else if (table_node->nodeType_ == E_JOINED_TABLE_WITH_PARENS)
        {
            table_node = Node::remove_parens(table_node);
        }
        else if (table_node->nodeType_ == E_TABLE_IDENT)
        {
            table_node = table_node->getChild(E_TABLE_IDENT_OBJECT);
            schema_node = table_node->getChild(E_TABLE_IDENT_SCHEMA);
        }

        switch (table_node->nodeType_)
        {
            case E_IDENTIFIER:
            {
                std::string table_name = table_node->terminalToken_.str;
                std::string alias_name = alias_node ? alias_node->terminalToken_.str : "";
                std::string schema_name = schema_node ? schema_node->terminalToken_.str
                        : plan->local_table_mgr->get_default_schema();  // add default schema name
                parent->add_table_item(plan, schema_name, table_name, alias_name, out_table_id, node);
            }
                break;
            case E_SELECT:
            {
                assert(alias_node != nullptr);  // The alias is actually not optional at all.
                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, table_node, query_id, parent, E_SCOPE_FROM);
                std::string alias_name = alias_node ? alias_node->terminalToken_.str : "";
                TableRef* tbi = parent->add_table_item(plan, query_id, alias_name, out_table_id);
                Node* alias_list = node->getChild(2);
                std::vector<std::string> aliass{};
                if (alias_list)
                {
                    alias_list = Node::remove_parens(alias_list);
                    std::list<Node*> ls;
                    Node::ToList(alias_list, ls);
                    for (Node* it : ls)
                        aliass.push_back(it->terminalToken_.str);
                }
                GeneratedTableRef* gtbi = dynamic_cast<GeneratedTableRef*>(tbi);
                assert(gtbi != nullptr);
                gtbi->set_column_alias(plan, aliass);
            }
                break;
            case E_JOINED_TABLE:
            {
                resolve_joined_table(plan, table_node, parent);
            }
                break;
            case E_TABLE_VALUE_CTOR_PARENS:
                break;
            case E_FUN_CALL:
                /*todo*/
                break;
            case E_PIVOT_TABLE:
            {
                /*todo*/
                resolve_table(plan, table_node->getChild(0), parent, out_table_id);
            }
                break;
            case E_UNPIVOT_TABLE:
            {
                /*todo*/
                resolve_table(plan, table_node->getChild(0), parent, out_table_id);
            }
                break;
            case E_TEMP_VAR_FUN_CALL:
                /*todo*/
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        return 0;
    }

    int resolve_joined_table(
            ResultPlan* plan,
            Node* node,
            Stmt* parent)
    {
        int ret = 0;
        assert(node->nodeType_ == E_JOINED_TABLE);
        Node* table_node = nullptr;
        for (size_t i = 0; i < node->getChildrenCount(); ++i)
        {
            table_node = node->getChild(i);
            if (E_JOINED_TABLE_TABLE_FACTOR_L == i ||
                E_JOINED_TABLE_TABLE_FACTOR_R == i)
            {
                switch (table_node->nodeType_)
                {
                    case E_IDENTIFIER:
                    case E_SELECT:
                    case E_ALIAS:
                    {
                        uint64_t tid = OB_INVALID_ID;
                        ret = resolve_table(plan, table_node, parent, tid);
                    }
                        break;
                    case E_JOINED_TABLE:
                    {
                        ret = resolve_joined_table(plan, table_node, parent);
                    }
                        break;
                    case E_SELECT_WITH_PARENS:
                    {
                        table_node = Node::remove_parens(table_node);
                        uint64_t tid = OB_INVALID_ID;
                        ret = resolve_table(plan, table_node, parent, tid);
                    }
                        break;
                    case E_JOINED_TABLE_WITH_PARENS:
                    {
                        table_node = Node::remove_parens(table_node);
                        uint64_t tid = OB_INVALID_ID;
                        ret = resolve_table(plan, table_node, parent, tid);
                    }
                        break;
                    default:
                        break;
                }
            }
        }
        uint64_t sql_raw_expr_id = OB_INVALID_ID;
        resolve_independ_expr(plan, node->getChild(E_JOINED_TABLE_ON_EXPR), sql_raw_expr_id, parent);
        return ret;
    }

    int resolve_independ_expr(
            ResultPlan *plan,
            Node *node,
            uint64_t& sql_raw_expr_id,
            Stmt* parent)
    {
        SqlRawExpr* sql_expr = plan->logicPlan_->add_expr();
        sql_raw_expr_id = plan->logicPlan_->generate_sql_raw_expr_id();
        sql_expr->set_expr_id(sql_raw_expr_id);

        RawExpr* raw_expr = nullptr;
        resolve_expr(plan, node, sql_expr, parent, raw_expr);
        sql_expr->set_expr(raw_expr);
        assert(raw_expr != nullptr);
        sql_expr->set_query_id(parent->get_query_id());
        sql_expr->expr_content = node->serialize();
        printf("%s:\n", sql_expr->expr_content.c_str());
        sql_expr->debug(plan->logicPlan_);
        printf("\n");
    }

    int resolve_expr(
            ResultPlan* plan,
            Node* node,
            SqlRawExpr* sql_raw_expr,
            Stmt* parent,
            RawExpr*& out_raw_expr
    )
    {
        assert(node != nullptr);
        switch (node->nodeType_)
        {
            case E_NULL:
            case E_INT:
            case E_DOUBLE:
            case E_BOOL:
            case E_TEMP_VARIABLE:
            case E_QUESTIONMARK:
            case E_STRING:
            {
                RawExprConst* expr = new RawExprConst;
                expr->set_expr_type(node->nodeType_);
                out_raw_expr = expr;
            }
                break;
            case E_OP_NAME_FIELD:
            {
                // this is a column_ref   *,XXX.* illeagal
                Node* column_node = node->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
                Node* table_node = node->getChild(E_OP_NAME_FIELD_RELATION_NAME);
                Node* schema_node = node->getChild(E_OP_NAME_FIELD_SCHEMA_NAME);
                assert(column_node != nullptr);
                std::string column_name = column_node->terminalToken_.str;
                uint64_t table_id = OB_INVALID_ID;
                uint64_t column_id = OB_INVALID_ID;
                if (!table_node)
                {
                    TableRef* tbi = nullptr;

                    bool fd = parent->check_table_column(plan, column_name, tbi, column_id);
                    if (!fd)
                    {
                        assert(false);
                    }
                    table_id = tbi->get_table_id();
                }
                else
                {
                    std::string table_name = table_node->terminalToken_.str;
                    std::string schema_name = schema_node ? schema_node->terminalToken_.str : "";
                    TableRef* tbi = nullptr;
                    bool fd = parent->find_tableref_by_column(plan, schema_name, table_name, column_name, tbi, column_id);
                    if (!fd)
                    {
                        assert(false);
                    }
                    else
                    {
                        table_id = tbi->get_table_id();
                    }
                }
                RawExprBinaryRef* expr = new RawExprBinaryRef;
                expr->set_expr_type(node->nodeType_);
                expr->set_first_ref_id(table_id);
                expr->set_second_ref_id(column_id);
                out_raw_expr = expr;
            }
                break;
            case E_OP_ADD:
            {
                RawExpr* l = nullptr;
                RawExpr* r = nullptr;
                resolve_expr(plan, node->getChild(E_OP_BINARY_OPERAND_L), sql_raw_expr, parent, l);
                resolve_expr(plan, node->getChild(E_OP_BINARY_OPERAND_R), sql_raw_expr, parent, r);
                RawExprBinaryOp* expr = new RawExprBinaryOp;
                expr->set_expr_type(node->nodeType_);
                expr->set_first_op_expr(l);
                expr->set_second_op_expr(r);
                out_raw_expr = expr;
            }
                break;
            default:
                break;

        }
    }
}