#include "resolve.h"
#include "node.h"
#include "expr.h"
#include "SelectStmt.h"
#include "LogicPlan.h"
#include "ResultPlan.h"
#include <assert.h>
#include <list>

namespace resolve
{
    int resolve_select_statement(
            ResultPlan *plan,
            Node* node,
            uint64_t& query_id,
            SelectStmt* parent /* = nullptr*/)
    {
        if (node->nodeType_ == E_SELECT_WITH_PARENS)
            node = Node::remove_parens(node);
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

            resolve_select_clause(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt);
            resolve_where_clause(plan, node->getChild(E_SELECT_OPT_WHERE), select_stmt);
            resolve_select_items(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt);
        }
        return 0;
    }

    int resolve_cte_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent)
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
            SelectStmt* parent,
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
        parent->add_cte_item(plan, table_name, alias_name, TableItem::CTE_TABLE, query_id, out_table_id, OB_INVALID_ID);
        resolve_select_statement(plan, subquery, query_id, parent);
        /*
         * Since recursive common table expression is supported,
         * so this cte's definition query_id need to be set up
         * */
        parent->cte_items_.back().ref_id_ = query_id;
        return 0;
    }

    int resolve_from_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent)
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
            SelectStmt* parent)
    {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_WHERE_CLAUSE);
        Node* expr = node->getChild(E_WHERE_CLAUSE_EXPR);
        resolve_expr(plan, expr, parent);
        return 0;
    }

    int resolve_select_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent)
    {
        assert(node != nullptr);
        resolve_expr(plan, node, parent);
        return 0;
    }

    int resolve_select_items(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent)
    {
        assert(node != nullptr);
        std::list<Node*> ls;
        Node::ToList(node, ls);
        for (auto child : ls)
        {
            assert(child->nodeType_ == E_PROJECT_STRING);
            Node* nd = child->getChild(E_PROJECT_STRING_EXPR_OR_ALIAS);
            std::string alias_name = "";
            if (nd->nodeType_ == E_ALIAS)
            {
                alias_name = nd->getChild(E_ALIAS_RELATION_NAME)->terminalToken_.str;
            }
            else
            {
                if (nd->nodeType_ == E_OP_NAME_FIELD)
                {
                    alias_name = nd->getChild(E_OP_NAME_FIELD_COLUMN_NAME)->terminalToken_.str;
                }
                else if (nd->nodeType_ == E_IDENTIFIER)
                {
                    alias_name = nd->terminalToken_.str;
                }
                else
                {
                    alias_name = nd->serialize();
                }
            }
            parent->add_select_item(OB_INVALID_ID, alias_name, "");
        }
        return 0;
    }

    int resolve_table(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            uint64_t& out_table_id)
    {
        assert(node != nullptr);
        out_table_id = OB_INVALID_ID;
        Node* table_node = node;
        Node* alias_node = nullptr;
        if (node->nodeType_ == E_ALIAS)
        {
            table_node = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);
            alias_node = node->getChild(E_ALIAS_RELATION_NAME);
        }
        else if (node->nodeType_ == E_TABLE_IDENT)
        {
            table_node = node->getChild(E_TABLE_IDENT_OBJECT);
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
        }

        switch (table_node->nodeType_)
        {
            case E_IDENTIFIER:
            {
                std::string table_name = table_node->terminalToken_.str;
                std::string alias_name;
                if (alias_node)
                {
                    alias_name = alias_node->terminalToken_.str;
                    uint64_t table_id = OB_INVALID_ID;
                    uint64_t query_id = OB_INVALID_ID;
                    /*
                     * Since common table expression is supported, so check this
                     * table_name as a cte ref
                     * */
                    bool isCte = parent->check_in_cte(table_name, query_id, table_id);
                    if (isCte)
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::USE_CTE_TABLE, table_id, out_table_id, query_id);
                    }
                    else
                    {
                        auto tbi = parent->add_table_item(plan, table_name, alias_name,
                                TableItem::ALIAS_TABLE, OB_INVALID_ID, out_table_id, OB_INVALID_ID, node);

                        if (plan->base_table_visit_)
                            plan->base_table_visit_(plan, tbi);
                    }
                }
                else
                {
                    uint64_t table_id = OB_INVALID_ID;
                    uint64_t query_id = OB_INVALID_ID;
                    /*
                     * Since common table expression is supported, so check this
                     * table_name as a cte ref
                     * */
                    bool isCte = parent->check_in_cte(table_name, query_id, table_id);
                    if (isCte)
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::USE_CTE_TABLE, table_id, out_table_id, query_id);
                    }
                    else
                    {
                        auto tbi = parent->add_table_item(plan, table_name, alias_name,
                                TableItem::BASE_TABLE, OB_INVALID_ID, out_table_id, OB_INVALID_ID, node);
                        if (plan->base_table_visit_)
                            plan->base_table_visit_(plan, tbi);
                    }
                }
            }
                break;
            case E_SELECT:
            {
                /*
                    The alias is actually not optional at all.
                */
                //assert(alias_node != nullptr);
                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, table_node, query_id, parent);
                std::string table_name = alias_node ? alias_node->terminalToken_.str : "";
                std::string alias_name;
                parent->add_table_item(plan, table_name, alias_name,
                        TableItem::GENERATED_TABLE, query_id, out_table_id, OB_INVALID_ID);
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
            SelectStmt* parent)
    {
        int ret = 0;
        assert(node->nodeType_ == E_JOINED_TABLE);
        Node* table_node = nullptr;
        for (int i = 0; i < node->getChildrenCount(); ++i)
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
                }
            }
        }
        resolve_expr(plan, node->getChild(E_JOINED_TABLE_ON_EXPR), parent);
        return ret;
    }

    int resolve_expr(
            ResultPlan *plan,
            Node *node,
            SelectStmt* parent)
    {
        if (!node)
            return 0;
        if (node->nodeType_ == E_OP_NAME_FIELD)
        {

            Node* sch = node->getChild(E_OP_NAME_FIELD_SCHEMA_NAME);
            Node* tb = node->getChild(E_OP_NAME_FIELD_RELATION_NAME);
            Node* cl = node->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
            assert(cl != nullptr);
            if (tb)
            {
                ColumnItem cli;
                parent->add_column_item(plan, sch ? sch->terminalToken_.str : "" , tb->terminalToken_.str,
                        cl->terminalToken_.str, cli, node);
            }
            else
            {
                // todo
            }
            return 0;
        }
        else if (node->nodeType_ == E_STAR)
        {
            // todo
        }
        if (node->nodeType_ == E_SELECT)
        {
            uint64_t query_id = OB_INVALID_ID;
            resolve_select_statement(plan, node, query_id, parent);
            return 0;
        }
        for (int i = 0; i < node->getChildrenCount(); ++i)
        {
            Node* child = node->getChild(i);
            if (child)
                resolve_expr(plan, child, parent);
        }
        return 0;
    }
}