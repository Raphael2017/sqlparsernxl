#ifndef STMT_H
#define STMT_H

#include "Interface.h"

struct Node;

namespace resolve
{
    struct CteDef;
    struct TableRef;
    struct ResultPlan;
    struct Stmt : public IStmt
    {
    public:
        int get_query_id() const { return query_id_; }
        void set_query_id(uint64_t query_id) { query_id_ = query_id; }
        Stmt* get_parent() const { return parent_; }
        void set_parent(Stmt* parent) { parent_ = parent; }
        CteDef* get_cte_def_by_index(size_t index) { 0 <= index && index < cte_defs_.size() ? cte_defs_[index] : nullptr; }
        const std::vector<TableRef*>& get_table_items() const { return table_items_; }

        bool check_in_cte(
                const std::string& name,
                uint64_t& out_query_id,
                size_t& out_index);

        TableRef* add_table_item(
                ResultPlan* plan,
                const std::string& schema_name,
                const std::string& table_name,
                const std::string& alias_name,
                uint64_t& out_table_id,
                Node* node);

        TableRef* add_table_item(
                ResultPlan* plan,
                uint64_t query_id,
                const std::string& alias_name,
                uint64_t& out_table_id
        );

        CteDef* add_cte_def(
                ResultPlan* plan,
                uint64_t query_id,
                const std::string& cte_name
        );

        bool get_table_item(
                const std::string& schema,
                const std::string& table_name,
                TableRef*& out_table_ref);

        bool get_table_item(
                uint64_t table_id,
                TableRef*& out_table_ref
                );

        bool check_table_column(
                ResultPlan* plan,
                const std::string& column_name,
                TableRef*& table_item,
                uint64_t& column_id);

        bool find_tableref_by_column(
                ResultPlan* plan,
                const std::string& column_name,
                TableRef*& table_item,
                uint64_t& column_id);

        bool find_tableref_by_column(
                ResultPlan* plan,
                const std::string& schema,
                const std::string& table,
                const std::string& column_name,
                TableRef*& table_item,
                uint64_t& column_id);

    protected:
        uint64_t query_id_;
        Stmt* parent_{nullptr};
        std::vector<TableRef*> table_items_;
        std::vector<CteDef*> cte_defs_;

    public:
        virtual StmtType GetStmtType() { return  E_NONE; }
        virtual uint64_t GetQueryID() { return get_query_id(); }
    };
}

#endif