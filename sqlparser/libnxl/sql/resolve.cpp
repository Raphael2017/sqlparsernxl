#include "resolve.h"
#include "node.h"
#include "expr.h"
#include <assert.h>

namespace resolve
{
    Node* remove_parens(Node* node, NodeType tp);
    LogicPlan::~LogicPlan()
    {
        for (auto stmt : stmts_)
        {
            delete(stmt);
        }
        stmts_.clear();
    }
    ObStmt* LogicPlan::get_query(uint64_t query_id)
    {
        for (auto stmt : stmts_)
        {
            assert(stmt != nullptr);
            if (query_id == stmt->query_id_)
                return stmt;
        }
        return nullptr;
    }

    SqlRawExpr* LogicPlan::get_expr(uint64_t expr_id)
    {
        for (auto sql_expr : exprs_)
        {
            if (sql_expr->get_expr_id() == expr_id)
            {
                return sql_expr;
            }
        }
        return nullptr;
    }

    int ObStmt::add_table_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        return _add_table_item(table_items_, resultPlan,
                table_name, alias_name, tbtype, ref_id, out_table_id, cte_at_query_id);
    }

    int ObStmt::add_cte_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        assert(tbtype == TableItem::CTE_TABLE);
        return _add_table_item(cte_items_, resultPlan,
                table_name, alias_name, tbtype, ref_id, out_table_id, cte_at_query_id);
    }


    /*
     * Reference resources mysql SELECT_LEX::find_common_table_expr
     * */
    bool ObStmt::check_in_cte(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (TableItem& cte : cur->cte_items_)
            {
                if (cte.table_name_ == table_name ||
                    cte.alias_name_ == table_name)
                {
                    out_table_id = cte.table_id;
                    out_query_id = cur->query_id_;

                    if (cte.ref_id_ == OB_INVALID_ID)
                    {
                        /*
                         * this means we are still resolving the cte definition,
                         * it also means that this cte is a recursive definition
                         * */
                        cte.is_recursive_cte_ = true;
                    }
                    return true;
                }
            }
            /*
             * If no match in the WITH clause of 'select', maybe this is a subquery, so
             * look up in the outer query's WITH clause
             * */
            cur = cur->parent_;
        }
        return false;
    }


    bool ObStmt::check_table_item(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_name_ == table_name ||
                    tbi.alias_name_ == table_name)
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    bool ObStmt::check_table_item(uint64_t table_id, uint64_t& out_query_id)
    {
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_id == table_id)
                {
                    out_query_id = cur->query_id_;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    bool ObStmt::check_table_column(
            ResultPlan* plan,
            const std::string& column_name,
            const TableItem& table_item,
            uint64_t& column_id)
    {
        column_id = OB_INVALID_ID;
        assert(plan && plan->logicPlan_);
        switch (table_item.type_)
        {
            case TableItem::BASE_TABLE:
            case TableItem::ALIAS_TABLE:
            {
                column_id = LocalTableMgr::
                        Ins()->get_local_table_column_id(
                                table_item.table_name_,
                                column_name);
            }
                break;
            case TableItem::CTE_TABLE:
            {
                if (table_item.ref_id_ == OB_INVALID_ID)
                {
                    break;
                }
            }
            case TableItem::GENERATED_TABLE:
            {
                ObStmt* stmt = plan->logicPlan_->get_query(table_item.ref_id_);
                assert(stmt != nullptr);
                int i = 0;
                for (const SelectItem& select_item : stmt->select_items_)
                {
                    std::string l = select_item.alias_name_;
                    std::string r = column_name;
                    std::transform(l.begin(), l.end(), l.begin(), ::toupper);
                    std::transform(r.begin(), r.end(), r.begin(), ::toupper);
                    if (l == r)
                    {
                        assert(column_id == OB_INVALID_ID);
                        column_id = i + OB_APP_MIN_COLUMN_ID;
                    }
                    ++i;
                }
            }
                break;
            case TableItem::USE_CTE_TABLE:
            {
                uint64_t qid = table_item.cte_at_query_id_;
                uint64_t tid = table_item.ref_id_;
                ObStmt* stmt = plan->logicPlan_->get_query(qid);
                assert(stmt != nullptr);
                TableItem cte_target;
                bool find = false;
                for (auto cte : stmt->cte_items_)
                {
                    if (cte.table_id == tid)
                    {
                        find = true;
                        cte_target = cte;
                        break;
                    }
                }
                assert(find);
                return check_table_column(plan, column_name, cte_target, column_id);
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        return column_id != OB_INVALID_ID;
    }

    int ObStmt::add_column_item(
            ResultPlan* plan,
            const std::string& column_name,
            ColumnItem& out_column_item)
    {
        bool flag = false;
        TableItem tbi;
        uint64_t column_id = OB_INVALID_ID;
        for (const TableItem& it : table_items_)
        {
            bool checkColumn = check_table_column(plan, column_name, it, column_id);
            if (checkColumn)
            {
                flag = true;
                tbi = it;
                break;
            }
        }
        if (flag)
        {
            out_column_item.query_id_ = query_id_;
            out_column_item.table_id_ = tbi.table_id;
            out_column_item.column_name_ = column_name;
            out_column_item.column_id_ = column_id;
            push_back_(column_items_, out_column_item);
        }
        else
        {
            for (const TableItem& it : table_items_)
            {
                if (it.type_ == TableItem::BASE_TABLE ||
                    it.type_ == TableItem::ALIAS_TABLE)
                {
                    out_column_item.query_id_ = query_id_;
                    out_column_item.table_id_ = it.table_id;
                    out_column_item.column_name_ = column_name;
                    out_column_item.column_id_ = LocalTableMgr::Ins()->add_local_table_column(it.table_name_, column_name);
                    push_back_(column_items_, out_column_item);
                    break;
                }
            }
        }
        // todo
        // assert(out_column_item.column_id_ != OB_INVALID_ID);
        return 0;
    }
    int ObStmt::add_column_item(
            ResultPlan* plan,
            const std::string& table_name,
            const std::string& column_name,
            ColumnItem& out_column_item)
    {
        uint64_t query_id = OB_INVALID_ID;
        uint64_t table_id = OB_INVALID_ID;
        TableItem tbi;
        bool findtb = get_table_item(table_name, query_id, table_id, tbi);
        assert(findtb);
        if (findtb && query_id != this->query_id_)
        {
            // here means Correlated Sub-Query
        }
        ObStmt* stmt = plan->logicPlan_->get_query(query_id);
        ColumnItem cli{OB_INVALID_ID, "", OB_INVALID_ID, OB_INVALID_ID};
        bool checkColumn = check_table_column(plan, column_name, tbi, cli.column_id_);

        if (!checkColumn && (tbi.type_ == TableItem::BASE_TABLE || tbi.type_ == TableItem::ALIAS_TABLE))
        {
            cli.column_id_ = LocalTableMgr::Ins()->add_local_table_column(tbi.table_name_, column_name);
        }

        cli.column_name_ = column_name;
        cli.table_id_ = tbi.table_id;
        cli.query_id_ = query_id;
        push_back_(column_items_, cli);
        out_column_item = cli;
    }

    bool ObStmt::get_table_item(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id,
            TableItem& out_table_item)
    {
        assert(table_name.length() > 0);
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_name_ == table_name ||
                    tbi.alias_name_ == table_name)
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    out_table_item = tbi;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }
    bool ObStmt::get_table_item(
            uint64_t table_id,
            uint64_t& out_query_id,
            TableItem& out_table_item)
    {
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_id == table_id)
                {
                    out_query_id = cur->query_id_;
                    out_table_item = tbi;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    int ObStmt::_add_table_item(
            std::vector<TableItem>& tbs,
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        out_table_id = OB_INVALID_ID;
        TableItem item;
        switch (tbtype)
        {
            case TableItem::BASE_TABLE:
            {

                item.ref_id_ = LocalTableMgr::
                        Ins()->get_local_table_id(table_name);
                item.table_id = item.ref_id_;
            }
                break;
            case TableItem::ALIAS_TABLE:
            {
                item.ref_id_ = LocalTableMgr::
                        Ins()->get_local_table_id(table_name);
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::CTE_TABLE:
            {
                item.ref_id_ = ref_id;
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::GENERATED_TABLE:
            {
                assert(ref_id != OB_INVALID_ID);
                item.ref_id_ = ref_id;
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::USE_CTE_TABLE:
            {
                item.table_id = ref_id;
                item.ref_id_ = ref_id;
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        /* todo
         * ambiguous table check*/
        item.type_ = tbtype;
        item.table_name_ = table_name;
        item.alias_name_ = alias_name;
        item.cte_at_query_id_ = cte_at_query_id;
        tbs.push_back(item);

        out_table_id = item.table_id;
        return 0;
    }


    int resolve_expr(ResultPlan *plan, Node *node, ObStmt* parent) {
        if (!node)
            return 0;
        if (node->nodeType_ == E_OP_NAME_FIELD)
        {
            Node* tb = node->getChild(E_OP_NAME_FIELD_RELATION_NAME);
            Node* cl = node->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
            assert(cl != nullptr);
            /*
            if (tb)
            {
                ColumnItem cli{OB_INVALID_ID, "", OB_INVALID_ID, OB_INVALID_ID};
                parent->add_column_item(plan, tb->terminalToken_.str,
                        cl->terminalToken_.yytex, cli);
            }
            else
            {
                ColumnItem cli{OB_INVALID_ID, "", OB_INVALID_ID, OB_INVALID_ID};
                parent->add_column_item(plan, cl->terminalToken_.yytex, cli);
            }
             */
            return 0;
        }
        else if (node->nodeType_ == E_STAR)
        {
            for (const TableItem& tbi : parent->table_items_)
            {
                if (tbi.type_ == TableItem::BASE_TABLE || tbi.type_ == TableItem::ALIAS_TABLE)
                {
                    ColumnItem cli{OB_INVALID_ID, "", OB_INVALID_ID, OB_INVALID_ID};
                    parent->add_column_item(plan, tbi.table_name_, "*", cli);
                }
            }
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
    }

    int resolve_select_statement(
            ResultPlan *plan,
            Node* node,
            uint64_t& queryID,
            ObStmt* parent) {
        if (node->nodeType_ == E_SELECT_WITH_PARENS)
            node = remove_parens(node, E_SELECT_WITH_PARENS);
        queryID = plan->logicPlan_->generate_query_id();
        ObStmt* select_stmt = new ObStmt;
        select_stmt->query_id_ = queryID;
        select_stmt->parent_ = parent;
        plan->logicPlan_->add_query(select_stmt);

        Node* set_op = node->getChild(E_SELECT_SET_OPERATION);
        if (set_op != nullptr)
        {
            Node* former = node->getChild(E_SELECT_FORMER_SELECT_STMT);
            uint64_t left_query_id = OB_INVALID_ID;
            resolve_select_statement(plan, former, left_query_id, select_stmt);
            select_stmt->left_query_id_ = left_query_id;
            Node* latter = node->getChild(E_SELECT_LATER_SELECT_STMT);
            uint64_t  right_query_id = OB_INVALID_ID;
            resolve_select_statement(plan, latter, right_query_id, select_stmt);
            select_stmt->right_query_id_ = right_query_id;
        }
        else
        {
            resolve_cte_clause(plan, node->getChild(E_SELECT_OPT_WITH), select_stmt);
            resolve_from_clause(plan, node->getChild(E_SELECT_FROM_LIST), select_stmt);

            resolve_select_clause(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt);
            resolve_where_clause(plan, node->getChild(E_SELECT_OPT_WHERE), select_stmt);
            resolve_select_items(plan, node->getChild(E_SELECT_SELECT_EXPR_LIST), select_stmt);
        }
    }

    int resolve_cte_clause(
            ResultPlan* plan,
            Node* node,
            ObStmt* parent)
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
    }

    int resolve_cte(ResultPlan* plan, Node* node, ObStmt* parent, uint64_t& out_table_id)
    {
        assert(node && node->nodeType_ == E_COMMON_TABLE_EXPR);
        Node* subquery = node->getChild(E_COMMON_TABLE_EXPR_SUBQUERY);
        assert(subquery && subquery->nodeType_ == E_SELECT_WITH_PARENS);
        subquery = remove_parens(subquery, E_SELECT_WITH_PARENS);
        assert(subquery->nodeType_ == E_SELECT);
        uint64_t query_id = OB_INVALID_ID;

        Node* tb = node->getChild(E_COMMON_TABLE_EXPR_TABLE);
        assert(tb && tb->nodeType_ == E_IDENTIFIER);
        std::string table_name = tb->terminalToken_.str;
        std::string alias_name;
        parent->add_cte_item(plan, table_name, alias_name, TableItem::CTE_TABLE, query_id, out_table_id, OB_INVALID_ID);
        resolve_select_statement(plan, subquery, query_id, parent);
        parent->cte_items_.back().ref_id_ = query_id;
    }

    int resolve_from_clause(ResultPlan* plan, Node* node, ObStmt* parent)
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

    }

    int resolve_where_clause(ResultPlan* plan, Node* node, ObStmt* parent)
    {
        if (!node)
            return 0;
        assert(node->nodeType_ == E_WHERE_CLAUSE);
        Node* expr = node->getChild(E_WHERE_CLAUSE_EXPR);
        resolve_expr(plan, expr, parent);
    }

    int resolve_select_clause(ResultPlan* plan, Node* node, ObStmt* parent)
    {
        assert(node != nullptr);
        resolve_expr(plan, node, parent);
    }

    int resolve_select_items(ResultPlan* plan, Node* node, ObStmt* parent)
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
            parent->select_items_.push_back({OB_INVALID_ID, "", alias_name});
        }
    }

    int resolve_table(ResultPlan* plan, Node* node, ObStmt* parent, uint64_t& out_table_id)
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
        if (table_node->nodeType_ == E_SELECT_WITH_PARENS)
        {
            table_node = remove_parens(table_node, E_SELECT_WITH_PARENS);
        }
        else if (table_node->nodeType_ == E_JOINED_TABLE_WITH_PARENS)
        {
            table_node = remove_parens(table_node, E_JOINED_TABLE_WITH_PARENS);
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
                    bool isCte = parent->check_in_cte(table_name, query_id, table_id);
                    if (isCte)
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::USE_CTE_TABLE, table_id, out_table_id, query_id);
                    }
                    else
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::ALIAS_TABLE, OB_INVALID_ID, out_table_id, OB_INVALID_ID);

                        if (plan->base_table_callback_)
                            plan->base_table_callback_(node, TableItem::ALIAS_TABLE, table_name, alias_name);
                    }
                }
                else
                {
                    uint64_t table_id = OB_INVALID_ID;
                    uint64_t query_id = OB_INVALID_ID;
                    bool isCte = parent->check_in_cte(table_name, query_id, table_id);
                    if (isCte)
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::USE_CTE_TABLE, table_id, out_table_id, query_id);
                    }
                    else
                    {
                        parent->add_table_item(plan, table_name, alias_name,
                                TableItem::BASE_TABLE, OB_INVALID_ID, out_table_id, OB_INVALID_ID);
                        if (plan->base_table_callback_)
                            plan->base_table_callback_(node, TableItem::BASE_TABLE, table_name, alias_name);
                    }
                }
            }
                break;
            case E_SELECT:
            {
                assert(alias_node != nullptr);
                uint64_t query_id = OB_INVALID_ID;
                resolve_select_statement(plan, table_node, query_id, parent);
                std::string table_name = alias_node->terminalToken_.str;
                std::string alias_name;
                parent->add_table_item(plan, table_name, alias_name,
                        TableItem::GENERATED_TABLE, query_id, out_table_id, OB_INVALID_ID);
            }
                break;
            case E_JOINED_TABLE:
            {
                /*todo*/
                resolve_joined_table(plan, table_node, parent);
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        return 0;
    }

    int resolve_joined_table(ResultPlan* plan, Node* node, ObStmt* parent)
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
                        table_node = remove_parens(table_node, E_SELECT_WITH_PARENS);
                        uint64_t tid = OB_INVALID_ID;
                        ret = resolve_table(plan, table_node, parent, tid);
                    }
                        break;
                    case E_JOINED_TABLE_WITH_PARENS:
                    {
                        table_node = remove_parens(table_node, E_JOINED_TABLE_WITH_PARENS);
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

    Node* remove_parens(Node* node, NodeType tp)
    {
        assert(node && node->nodeType_ == tp);
        do
        {
            node = node->getChild(0);
        }
        while (node->nodeType_ == tp);
        return node;
    }

    LocalTableMgr* LocalTableMgr::ins_ = nullptr;
}