#ifndef RESOLVE_H
#define RESOLVE_H

#include <string>
#include <vector>

struct Node;

namespace resolve
{
    struct TableItem
    {
        enum TableType
        {
            BASE_TABLE,
            ALIAS_TABLE,
            CTE_TABLE,
            GENERATED_TABLE,
            USE_CTE_TABLE,
        };

        uint64_t table_id;
        std::string table_name_;
        std::string alias_name_;
        TableType   type_;

        uint64_t ref_id_;   // for subquery
        uint64_t cte_at_query_id_; // for find cte
    };

    struct ColumnItem
    {
        uint64_t column_id_;
        std::string column_name_;
        uint64_t table_id_;
        uint64_t query_id_;
    };

    typedef TableItem CteItem;

    struct ObStmt;
    struct LogicPlan
    {
        uint64_t generate_table_id()
        {
            return new_gen_tid_--;
        }
        uint64_t generate_query_id()
        {
            return new_gen_qid_++;
        }
        void add_query(ObStmt* s)
        {
            stmts_.push_back(s);
        }
        std::vector<ObStmt*> stmts_;
        uint64_t new_gen_tid_ = UINT16_MAX;
        uint64_t  new_gen_qid_ = 1;
    };
    struct ResultPlan
    {
        LogicPlan* logicPlan_;
    };

    struct ObStmt
    {
        uint64_t query_id_;
        ObStmt* parent_ = nullptr;
        std::vector<TableItem> table_items_;
        std::vector<ColumnItem> column_items_;
        std::vector<CteItem> cte_items_;
        int add_table_item(ResultPlan*, const std::string& table_name,
                const std::string alias_name, TableItem::TableType tbtype,
                uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
        int add_cte_item(ResultPlan*, const std::string& table_name,
                 const std::string alias_name, TableItem::TableType tbtype,
                 uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
        bool check_in_cte(const std::string& name, uint64_t& query_id, uint64_t& out_table_id);
    private:
        int _add_table_item(std::vector<TableItem>& tbs, ResultPlan*,
                const std::string& table_name,
                const std::string alias_name, TableItem::TableType tbtype,
                uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
    };

    int resolve_expr(ResultPlan*, Node*, ObStmt*);
    int resolve_select_statement(ResultPlan*, Node*, uint64_t& queryID, ObStmt*);

    int resolve_cte_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_cte(ResultPlan*, Node*, ObStmt*, uint64_t&);
    int resolve_from_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_table(ResultPlan*, Node*, ObStmt*, uint64_t&);

    uint64_t  get_local_table_id(const std::string& table_name);
    Node* remove_select_parens(Node* node);
}

#endif