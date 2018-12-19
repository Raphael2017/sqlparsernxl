#include "resolve.h"
#include "node.h"
#include <assert.h>

namespace resolve
{
    uint64_t OB_INVALID_ID = 0;
    int ObStmt::add_table_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string alias_name,
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
            const std::string alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        assert(tbtype == TableItem::CTE_TABLE);
        return _add_table_item(cte_items_, resultPlan,
                               table_name, alias_name, tbtype, ref_id, out_table_id, cte_at_query_id);
    }


    bool ObStmt::check_in_cte(const std::string& table_name, uint64_t& out_query_id, uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        ObStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& cte : cur->cte_items_)
            {
                if (cte.table_name_ == table_name ||
                    cte.alias_name_ == table_name)
                {
                    out_table_id = cte.table_id;
                    out_query_id = cur->query_id_;
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
            const std::string alias_name,
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
                item.ref_id_ = get_local_table_id(table_name);
                item.table_id = item.ref_id_;
            }
                break;
            case TableItem::ALIAS_TABLE:
            {
                item.ref_id_ = get_local_table_id(table_name);
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::CTE_TABLE:
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
        if (!node) return -1;
        switch (node->nodeType_) {
            case E_OP_NAME_FIELD: {

            }
                break;
        }
    }

    int resolve_select_statement(ResultPlan *plan, Node* node, uint64_t& queryID, ObStmt* parent) {
        assert(node && node->nodeType_ == E_SELECT);
        queryID = plan->logicPlan_->generate_query_id();
        ObStmt* select_stmt = new ObStmt;
        select_stmt->query_id_ = queryID;
        select_stmt->parent_ = parent;
        plan->logicPlan_->add_query(select_stmt);

        /*
         * todo
         * UNION INTERSECT EXCEPT
         * */
        assert(node->getChild(E_SELECT_SET_OPERATION) == nullptr);

        resolve_cte_clause(plan, node->getChild(E_SELECT_OPT_WITH), select_stmt);
        resolve_from_clause(plan, node->getChild(E_SELECT_FROM_LIST), select_stmt);



    }

    int resolve_cte_clause(ResultPlan* plan, Node* node, ObStmt* parent)
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
        subquery = remove_select_parens(subquery);
        assert(subquery->nodeType_ == E_SELECT);
        uint64_t query_id;
        resolve_select_statement(plan, subquery, query_id, parent);

        Node* tb = node->getChild(E_COMMON_TABLE_EXPR_TABLE);
        assert(tb && tb->nodeType_ == E_IDENTIFIER);
        std::string table_name = tb->terminalToken_.str;
        std::string alias_name;
        parent->add_cte_item(plan, table_name, alias_name, TableItem::CTE_TABLE, query_id, out_table_id, OB_INVALID_ID);
    }

    int resolve_from_clause(ResultPlan* plan, Node* node, ObStmt* parent)
    {
        if (!node)
        return 0;

        assert(node->nodeType_ == E_FROM_CLAUSE);
        node = node->getChild(E_FROM_CLAUSE_FROM_LIST);
        //assert(node != nullptr && (node->nodeType_ == E_FROM_LIST || node->nodeType_ == E_IDENTIFIER));
        std::list<Node*> ls{};
        Node::ToList(node, ls);
        for (auto child_node : ls)
        {
            uint64_t table_id = OB_INVALID_ID;
            resolve_table(plan, child_node, parent, table_id);
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
            table_node = remove_select_parens(table_node);
        }
        else if (table_node->nodeType_ == E_JOINED_TABLE_WITH_PARENS)
        {
            table_node = table_node->getChild(E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE);
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
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
    }



    uint64_t  get_local_table_id(const std::string& table_name)
    {
        static uint64_t local_table_id_begin = 200;
        static std::map<std::string, uint64_t > local_table{};
        std::string tb = table_name;
        std::transform(tb.begin(), tb.end(), tb.begin(), ::toupper);
        auto fd = local_table.find(tb);
        if (fd == local_table.end())
        {
            local_table[tb] = local_table_id_begin;
            ++local_table_id_begin;
        }
        else
        {
            return fd->second;
        }
    }


    Node* remove_select_parens(Node* node)
    {
        assert(node && node->nodeType_ == E_SELECT_WITH_PARENS);
        do
        {
            node = node->getChild(E_SELECT_WITH_PARENS_SELECT);
        }
        while (node->nodeType_ == E_SELECT_WITH_PARENS);
        return node;
    }
}