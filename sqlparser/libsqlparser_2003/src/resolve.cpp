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
#include "where_clause.h"
#include "UpdateStmt.h"
#include "join.h"
#include "UseStmt.h"
#include "DeleteStmt.h"
#include "InsertStmt.h"

namespace resolve
{
    int resolve(ResultPlan* plan, Node* node, uint64_t& query_id)
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
                query_id = OB_INVALID_ID;
                resolve_select_statement(plan, node, query_id);
            }
                break;
            case E_UPDATE:
            {
                query_id = OB_INVALID_ID;
                resolve_update_statement(plan, node, query_id);
            }
                break;
            case E_DELETE:
            {
                query_id = OB_INVALID_ID;
                resolve_delete_statement(plan, node, query_id);
            }
                break;
            case E_INSERT:
            {
                query_id = OB_INVALID_ID;
                resolve_insert_statement(plan, node, query_id);
            }
                break;
            case E_USE:
            {
                query_id = OB_INVALID_ID;
                resolve_use_statement(plan, node, query_id);
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
        std::list<Node*> stmts;
        Node::ToList(plan->tree_root_, stmts);
        uint64_t query_id = OB_INVALID_ID;
        for (auto stmt : stmts)
        {
            plan->reset();
            resolve(plan, stmt, query_id);
            plan->startNewStmt_(plan, query_id);
        }
        return 0;
    }

    int resolve_use_statement(
            ResultPlan* plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent/* = nullptr*/,
            ScopeType scope/* = E_SCOPE_WHATEVER*/)
    {
        assert(node->nodeType_ == E_USE);
        query_id = plan->logicPlan_->generate_query_id();
        UseStmt* use_stmt = dynamic_cast<UseStmt*>(plan->logicPlan_->add_query(E_STMT_TYPE_USE));
        use_stmt->set_query_id(query_id);
        use_stmt->set_parent(parent);
        Node* db = node->getChild(E_USE_DATABASE_NAME);
        assert(db != nullptr);
        use_stmt->set_database_name(db->terminalToken_.str);
        plan->local_table_mgr->set_default_database(use_stmt->get_database_name());
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
        query_id = plan->logicPlan_->generate_query_id();
        UpdateStmt* update_stmt = dynamic_cast<UpdateStmt*>(plan->logicPlan_->add_query(E_STMT_TYPE_UPDATE));
        update_stmt->set_query_id(query_id);
        update_stmt->set_parent(parent);

        resolve_cte_clause(plan, node->getChild(E_UPDATE_OPT_WITH), update_stmt);
        resolve_from_clause(plan, node->getChild(E_UPDATE_FROM_LIST), update_stmt);
        resolve_update_clause(plan, node->getChild(E_UPDATE_UPDATE_RELATION), update_stmt);
        resolve_where_clause(plan, node->getChild(E_UPDATE_OPT_WHERE), node, update_stmt);
        resolve_update_items(plan, node->getChild(E_UPDATE_UPDATE_ELEM_LIST), update_stmt);

        return 0;
    }

    int resolve_insert_statement(
            ResultPlan* plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent/* = nullptr*/,
            ScopeType scope/* = E_SCOPE_WHATEVER*/)
    {
        assert(node->nodeType_ == E_INSERT);
        query_id = plan->logicPlan_->generate_query_id();
        InsertStmt* insert_stmt = dynamic_cast<InsertStmt*>(plan->logicPlan_->add_query(E_STMT_TYPE_INSERT));
        insert_stmt->set_query_id(query_id);
        insert_stmt->set_parent(parent);

        resolve_insert_clause(plan, node->getChild(E_INSERT_INSERT_RELATION), insert_stmt);
        Node* cols_and_src = node->getChild(E_INSERT_INSERT_COLUMNS_AND_SOURCE);
        assert(cols_and_src != nullptr);
        Node* src = cols_and_src->getChild(1);
        assert(src != nullptr);
        uint64_t sql_raw_expr_id = OB_INVALID_ID;
        resolve_independ_expr(plan, src, sql_raw_expr_id, parent);
        return 0;
    }

    int resolve_delete_statement(
            ResultPlan* plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent/* = nullptr*/,
            ScopeType scope/* = E_SCOPE_WHATEVER*/)
    {
        assert(node->nodeType_ == E_DELETE);
        query_id = plan->logicPlan_->generate_query_id();
        DeleteStmt* delete_stmt = dynamic_cast<DeleteStmt*>(plan->logicPlan_->add_query(E_STMT_TYPE_DELETE));
        delete_stmt->set_query_id(query_id);
        delete_stmt->set_parent(parent);

        resolve_cte_clause(plan, node->getChild(E_DELETE_OPT_WITH), delete_stmt);
        resolve_from_clause(plan, node->getChild(E_DELETE_FROM_LIST), delete_stmt);
        resolve_delete_clause(plan, node->getChild(E_DELETE_DELETE_RELATION), delete_stmt);
        resolve_where_clause(plan, node->getChild(E_DELETE_OPT_WHERE), node, delete_stmt);
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

            resolve_where_clause(plan, node->getChild(E_SELECT_OPT_WHERE), node, select_stmt);
            resolve_select_items(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt, scope);
            resolve_group_by_clause(plan, node->getChild(E_SELECT_GROUP_BY), select_stmt);
            resolve_having_clause(plan, node->getChild(E_SELECT_HAVING), select_stmt);
            resolve_order_by_clause(plan, node->getChild(E_SELECT_ORDER_BY), select_stmt);
        }
        return 0;
    }

    int resolve_group_by_clause(
            ResultPlan *plan,
            Node *node,
            Stmt *parent
    ) {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_GROUP_BY);
        Node *expr_list = node->getChild(E_GROUP_BY_EXPR_LIST);
        assert(expr_list);
        std::list<Node*> ls;
        Node::ToList(expr_list, ls);
        for (Node *expr : ls) {
            uint64_t sql_raw_expr_id = OB_INVALID_ID;
            resolve_independ_expr(plan, expr, sql_raw_expr_id, parent);
        }
        return 0;
    }

    int resolve_having_clause(
            ResultPlan *plan,
            Node *node,
            Stmt *parent
    ) {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_HAVING);
        Node *expr = node->getChild(E_HAVING_EXPR);
        assert(expr);
        uint64_t sql_raw_expr_id = OB_INVALID_ID;
        resolve_independ_expr(plan, expr, sql_raw_expr_id, parent);
        return 0;
    }

    int resolve_order_by_clause(
            ResultPlan *plan,
            Node *node,
            Stmt *parent
    ) {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_ORDER_BY);
        Node *sort_list = node->getChild(E_ORDER_BY_SORT_LIST);
        assert(sort_list);
        std::list<Node*> ls;
        Node::ToList(sort_list, ls);
        for (Node *sort_key : ls) {
            assert(sort_key->nodeType_ == E_SORT_KEY);
            Node *expr = sort_key->getChild(E_SORT_KEY_EXPR);
            uint64_t sql_raw_expr_id = OB_INVALID_ID;
            resolve_independ_expr(plan, expr, sql_raw_expr_id, parent);
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
            if (child_node->nodeType_ == E_JOINED_TABLE ||
                child_node->nodeType_ == E_JOINED_TABLE_WITH_PARENS)
            {
                parent->add_from_item(table_id, FromItem::E_JOINED);
            }
            else
            {
                parent->add_from_item(table_id, FromItem::E_NORMAL);
            }
        }
        return 0;
    }

    int resolve_where_clause(
            ResultPlan* plan,
            Node* node,
            Node* node_parent,
            Stmt* parent)
    {
        if (node)
        {
            assert(node->nodeType_ == E_WHERE_CLAUSE);
            Node* expr = node->getChild(E_WHERE_CLAUSE_EXPR);
            uint64_t sql_raw_expr_id = OB_INVALID_ID;
            resolve_independ_expr(plan, expr, sql_raw_expr_id, parent);
        }

        {
            WhereCluase wc;
            wc.query_id_ = parent->get_query_id();
            wc.bind(node, node_parent);
            plan->whereClauseVisit_(plan, &wc);
        }

        return 0;
    }

#ifdef COMPLETE_ANALYSIS
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
#else
    int resolve_select_items(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            ScopeType scope)
    {
        RawExpr* e = nullptr;
        resolve_expr(plan, node, nullptr, parent, e);
        return 0;
    }
#endif

    int resolve_update_clause(
            ResultPlan* plan,
            Node* node,
            UpdateStmt* parent
    )
    {
        assert(node);
        switch (node->nodeType_)
        {
            case E_TABLE_IDENT:
            {
                Node* schema_node = node->getChild(E_TABLE_IDENT_SCHEMA);
                Node* table_node = node->getChild(E_TABLE_IDENT_OBJECT);
                assert(table_node != nullptr);
                std::string table_name = table_node->terminalToken_.str;
                std::string schema_name = schema_node ? schema_node->terminalToken_.str : "";
                TableRef* tbi = nullptr;
                parent->set_update_table(plan, schema_name, table_name, tbi);
                if (tbi)
                {
                    if (tbi->get_table_ref_type() == TableRef::BASE_TABLE_DIRECT_REF ||
                        tbi->get_table_ref_type() == TableRef::BASE_TABLE_ALIAS_REF)
                    {
                        BaseTableRef* btbi = dynamic_cast<BaseTableRef*>(tbi);
                        btbi->table_name_ = table_name;
                        btbi->schema_name_ = schema_name = schema_node ? schema_node->terminalToken_.str : plan->local_table_mgr->get_default_schema();
                        btbi->table_object_ = node->serialize();
                        btbi->default_schema_ = (schema_node == nullptr);
                    }
                }

            }
            case E_TEMP_VARIABLE:
            {

            }
            default:
                break;  /* todo */
        }

        return 0;
    }

    int resolve_update_items(
            ResultPlan* plan,
            Node* node,
            UpdateStmt* parent
    )
    {
        return 0;
    }

    int resolve_delete_clause(
            ResultPlan* plan,
            Node* node,
            DeleteStmt* parent
    )
    {
        assert(node);
        switch (node->nodeType_)
        {
            case E_TABLE_IDENT:
            {
                Node* schema_node = node->getChild(E_TABLE_IDENT_SCHEMA);
                Node* table_node = node->getChild(E_TABLE_IDENT_OBJECT);
                assert(table_node != nullptr);
                std::string table_name = table_node->terminalToken_.str;
                std::string schema_name = schema_node ? schema_node->terminalToken_.str : "";
                TableRef* tbi = nullptr;
                parent->set_delete_table(plan, schema_name, table_name, tbi);
                if (tbi)
                {
                    if (tbi->get_table_ref_type() == TableRef::BASE_TABLE_DIRECT_REF ||
                        tbi->get_table_ref_type() == TableRef::BASE_TABLE_ALIAS_REF)
                    {
                        BaseTableRef* btbi = dynamic_cast<BaseTableRef*>(tbi);
                        btbi->table_name_ = table_name;
                        btbi->schema_name_ = schema_name = schema_node ? schema_node->terminalToken_.str : plan->local_table_mgr->get_default_schema();
                        btbi->table_object_ = node->serialize();
                        btbi->default_schema_ = (schema_node == nullptr);
                    }
                }

            }
            case E_TEMP_VARIABLE:
            {

            }
            default:
                break;  /* todo */
        }
        return 0;
    }

    int resolve_insert_clause(
            ResultPlan* plan,
            Node* node,
            InsertStmt* parent
    )
    {
        assert(node);
        switch (node->nodeType_)
        {
            case E_TABLE_IDENT:
            {
                Node* schema_node = node->getChild(E_TABLE_IDENT_SCHEMA);
                Node* table_node = node->getChild(E_TABLE_IDENT_OBJECT);
                assert(table_node != nullptr);
                std::string table_name = table_node->terminalToken_.str;
                std::string schema_name = schema_node ? schema_node->terminalToken_.str : "";
                TableRef* tbi = nullptr;
                parent->set_insert_table(plan, schema_name, table_name, tbi);
                if (tbi)
                {
                    if (tbi->get_table_ref_type() == TableRef::BASE_TABLE_DIRECT_REF ||
                        tbi->get_table_ref_type() == TableRef::BASE_TABLE_ALIAS_REF)
                    {
                        BaseTableRef* btbi = dynamic_cast<BaseTableRef*>(tbi);
                        btbi->table_name_ = table_name;
                        btbi->schema_name_ = schema_name = schema_node ? schema_node->terminalToken_.str : plan->local_table_mgr->get_default_schema();
                        btbi->table_object_ = node->serialize();
                        btbi->default_schema_ = (schema_node == nullptr);
                    }
                }
            }
            case E_TEMP_VARIABLE:
            {

            }
            default:
                break;  /* todo */
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
            table_node = node->getChild(E_ALIAS_ORIGN);
            alias_node = node->getChild(E_ALIAS_ALIAS);
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
            schema_node = table_node->getChild(E_TABLE_IDENT_SCHEMA);
            table_node = table_node->getChild(E_TABLE_IDENT_OBJECT);
        }

        switch (table_node->nodeType_)
        {
            case E_IDENTIFIER:
            {
                std::string table_name = table_node->terminalToken_.str;
                std::string alias_name = alias_node ? alias_node->terminalToken_.str : "";
                std::string schema_name = schema_node ? schema_node->terminalToken_.str : "";
                parent->add_table_item(plan, schema_name, table_name, alias_name, out_table_id, node);
            }
                break;
            case E_SELECT:
            {
                //assert(alias_node != nullptr);  // The alias is actually not optional at all.
                std::string df = table_node->serialize();
                if (alias_node == nullptr)
                {
                    plan->set_err(0, "(" + df + ") must have alias name");
                    plan->errorOccur_(plan);
                }


                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, table_node, query_id, parent, E_SCOPE_FROM);
                std::string alias_name = alias_node ? alias_node->terminalToken_.str : df;
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
                JoinedTable* joinedTable = new JoinedTable;
                out_table_id = parent->generate_join_id();
                joinedTable->set_join_id(out_table_id);
                resolve_joined_table(plan, table_node, parent, joinedTable);
                parent->add_join(joinedTable);
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
            case E_TEMP_VARIABLE:
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
            Stmt* parent,
            JoinedTable* joinedTable)
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
                        joinedTable->add_table(tid);
                    }
                        break;
                    case E_JOINED_TABLE:
                    {
                        ret = resolve_joined_table(plan, table_node, parent, joinedTable);
                    }
                        break;
                    case E_SELECT_WITH_PARENS:
                    {
                        table_node = Node::remove_parens(table_node);
                        uint64_t tid = OB_INVALID_ID;
                        ret = resolve_table(plan, table_node, parent, tid);
                        joinedTable->add_table(tid);
                    }
                        break;
                    case E_JOINED_TABLE_WITH_PARENS:
                    {
                        table_node = Node::remove_parens(table_node);
                        ret = resolve_joined_table(plan, table_node, parent, joinedTable);
                    }
                        break;
                    default:
                        break;
                }
            }
        }
        uint64_t sql_raw_expr_id = OB_INVALID_ID;
        resolve_independ_expr(plan, node->getChild(E_JOINED_TABLE_ON_EXPR), sql_raw_expr_id, parent);
        Node* join_type_node = node->getChild(E_JOINED_TABLE_JOIN_TYPE);
        switch (join_type_node->nodeType_)
        {
            case E_JOIN_FULL:
            {
                joinedTable->add_join_op(E_JOIN_FULL, sql_raw_expr_id);
            }
                break;
            case E_JOIN_CROSS:
            {
                joinedTable->add_join_op(E_JOIN_CROSS, OB_INVALID_ID);
            }
                break;
            case E_JOIN_LEFT:
            {
                joinedTable->add_join_op(E_JOIN_LEFT, sql_raw_expr_id);
            }
                break;
            case E_JOIN_RIGHT:
            {
                joinedTable->add_join_op(E_JOIN_RIGHT, sql_raw_expr_id);
            }
                break;
            case E_JOIN_INNER:
            {
                joinedTable->add_join_op(E_JOIN_INNER, sql_raw_expr_id);
            }
                break;
            default:
                assert(false);  /* unreachable */
                break;
        }

        return ret;
    }

#ifdef COMPLETE_ANALYSIS
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
        printf("%s updateable %d :", sql_expr->expr_content.c_str(), sql_expr->check_base_field_ref(plan) ? 1 : 0);
        sql_expr->debug(plan);
        printf("\n");
        return 0;
    }
#else
    int resolve_independ_expr(
            ResultPlan *plan,
            Node *node,
            uint64_t& sql_raw_expr_id,
            Stmt* parent)
    {
        if (!node)
            return 0;
        if (node->nodeType_ == E_SELECT)
        {
            uint64_t query_id = OB_INVALID_ID;
            resolve_select_statement(plan, node, query_id, parent);
            return 0;
        }
        for (size_t i = 0; i < node->getChildrenCount(); ++i)
        {
            Node* child = node->getChild(i);
            if (child)
                resolve_independ_expr(plan, child, sql_raw_expr_id, parent);
        }
        sql_raw_expr_id = OB_INVALID_ID;
        return 0;
    }
#endif

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
            case E_EXPR_LIST_WITH_PARENS:
            {
                Node* nd = Node::remove_parens(node);
                resolve_expr(plan, nd, sql_raw_expr, parent, out_raw_expr);
            }
                break;
            case E_EXPR_LIST:
            {
                std::list<Node*> ls;
                Node::ToList(node, ls);
                RawExprMultiOp* expr = new RawExprMultiOp;
                expr->set_expr_type(E_EXPR_LIST);
                for (auto it : ls)
                {
                    RawExpr* e = nullptr;
                    resolve_expr(plan, it, sql_raw_expr, parent, e);
                    expr->add_op_expr(e);
                }
                out_raw_expr = expr;
            }
                break;
            case E_SELECT_WITH_PARENS:
            {
                Node* nd = Node::remove_parens(node);
                resolve_expr(plan, nd, sql_raw_expr, parent, out_raw_expr);
            }
                break;
            case E_SELECT:
            {
                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, node, query_id, parent);
                RawExprScalarSubquery* expr = new RawExprScalarSubquery;
                expr->set_expr_type(E_SELECT);
                expr->set_ref_id(query_id);
                out_raw_expr = expr;
            }
                break;
            case E_OP_ADD:
            case E_OP_MINUS:
            case E_OP_MUL:
            case E_OP_DIV:
            case E_OP_REM:
            case E_OP_POW:
            case E_OP_MOD:
            case E_OP_LE:
            case E_OP_LT:
            case E_OP_EQ:
            case E_OP_GE:
            case E_OP_GT:
            case E_OP_NE:
            case E_OP_LIKE:
            case E_OP_NOT_LIKE:
            case E_OP_AND:
            case E_OP_OR:
            case E_OP_IS:
            case E_OP_IS_NOT:
            case E_OP_IN:
            case E_OP_NOT_IN:
            case E_OP_CNN:
            case E_OP_ASS:
            case E_OP_ASS_ADD:
            case E_OP_ASS_MINUS:
            case E_OP_ASS_MUL:
            case E_OP_ASS_DIV:
            case E_OP_ASS_REM:
            case E_OP_ASS_BIT_AND:
            case E_OP_ASS_BIT_OR:
            case E_OP_ASS_BIT_XOR:
            case E_OP_COLLATE:
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
            case E_OP_NOT:
            case E_OP_EXISTS:
            case E_OP_POS:
            case E_OP_NEG:
            {
                RawExpr* r = nullptr;
                resolve_expr(plan, node->getChild(E_OP_UNARY_OPERAND), sql_raw_expr, parent, r);
                RawExprUnaryOp* expr = new RawExprUnaryOp;
                expr->set_expr_type(node->nodeType_);
                expr->set_op_expr(r);
                out_raw_expr = expr;
            }
                break;
            case E_OP_BTW:
            case E_OP_NOT_BTW:
            {
                RawExpr* a = nullptr;
                RawExpr* b = nullptr;
                RawExpr* c = nullptr;
                resolve_expr(plan, node->getChild(E_OP_TERNARY_OPERAND_1), sql_raw_expr, parent, a);
                resolve_expr(plan, node->getChild(E_OP_TERNARY_OPERAND_2), sql_raw_expr, parent, b);
                resolve_expr(plan, node->getChild(E_OP_TERNARY_OPERAND_3), sql_raw_expr, parent, c);
                RawExprTripleOp* expr = new RawExprTripleOp;
                expr->set_expr_type(node->nodeType_);
                expr->set_first_op_expr(a);
                expr->set_second_op_expr(b);
                expr->set_third_op_expr(c);
                out_raw_expr = expr;
            }
                break;
            case E_CASE:
            {
                RawExprCaseOp* expr = new RawExprCaseOp;
                expr->set_expr_type(E_CASE);
                RawExpr* arg = nullptr;
                resolve_expr(plan, node->getChild(E_CASE_ARG), sql_raw_expr, parent, arg);
                expr->set_arg_op_expr(arg);
                Node* deft = node->getChild(E_CASE_ELSE);
                if (!deft)
                    expr->set_default_expr(nullptr);
                else
                {
                    RawExpr* e = nullptr;
                    resolve_expr(plan, deft->getChild(E_CASE_DEFAULT_EXPR), sql_raw_expr, parent, e);
                    expr->set_default_expr(e);
                }

                Node* when = node->getChild(E_CASE_WHEN_CLAUSE_LIST);
                std::list<Node*> ls;
                Node::ToList(when, ls);
                for (auto it : ls)
                {
                    assert(it->nodeType_ == E_WHEN);
                    RawExpr* w = nullptr;
                    resolve_expr(plan, it->getChild(E_WHEN_WHEN_EXPR), sql_raw_expr, parent, w);
                    expr->add_when_op_expr(w);
                    RawExpr* t = nullptr;
                    resolve_expr(plan, it->getChild(E_WHEN_THEN_EXPR), sql_raw_expr, parent, t);
                    expr->add_then_op_expr(t);
                }
                out_raw_expr = expr;
            }
                break;
            case E_FUN_CALL:
            {
                Node* func = node->getChild(E_FUN_CALL_FUNC_NAME);
                Node* params = node->getChild(E_FUN_CALL_PARAMS);
                RawExprSysFun* expr = new RawExprSysFun;
                expr->set_expr_type(E_FUN_CALL);
                expr->set_func_name(func->serialize());
                std::list<Node*> ls;
                Node::ToList(params, ls);
                for (auto it : ls)
                {
                    RawExpr* param = nullptr;
                    resolve_expr(plan, it, sql_raw_expr, parent, param);
                    expr->add_param_expr(param);
                }
                out_raw_expr = expr;
            }
                break;
            default:
                break;

        }
        return 0;
    }
}