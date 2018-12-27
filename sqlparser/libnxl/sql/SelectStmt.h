#ifndef SELECT_STMT_H
#define SELECT_STMT_H
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

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

        uint64_t ref_id_;          // for GENERATED_TABLE, CTE_TABLE, ref_id_ link to a (select XXX)
        uint64_t cte_at_query_id_; // for USE_CTE_TABLE  <cte_at_query_id_, ref_id_> link to cte definition

        bool is_recursive_cte_{false};  // for CTE_TABLE
    };

    struct ColumnItem
    {
        uint64_t column_id_;
        std::string column_name_;
        uint64_t table_id_;
        uint64_t query_id_;     // for correlated subquery
    };

    struct SelectItem
    {
        uint64_t expr_id_;
        std::string name_;
        std::string alias_name_;
    };

    typedef TableItem CteItem;

    struct LogicPlan;
    struct LocalTableMgr;
    struct ResultPlan
    {
        LogicPlan* logicPlan_{nullptr};
        LocalTableMgr* local_table_mgr{nullptr};
        std::function<void(Node* node,
                TableItem::TableType table_type,
                const std::string& table_name,
                const std::string& alias_name)> base_table_visit_{nullptr};
    };

    struct SelectStmt
    {
        SelectStmt();
        int get_query_id() const;
        bool is_set_op() const;
        uint64_t get_set_op_left_query_id() const;
        uint64_t get_set_op_right_query_id() const;
        SelectStmt* get_outer_Select() const;
        const std::vector<TableItem>& get_table_items() const;
        void set_outer_select(SelectStmt* sel);
        void set_query_id(uint64_t query_id);
        void set_set_op_left_query_id(uint64_t left_query_id);
        void set_set_op_right_query_id(uint64_t right_query_id);

        int add_table_item(
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id);

        int add_cte_item(
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id);

        bool check_in_cte(
                const std::string& name,
                uint64_t& out_query_id,
                uint64_t& out_table_id);

        bool check_table_item(
                const std::string& table_name,
                uint64_t& out_query_id,
                uint64_t& out_table_id);

        bool check_table_item(
                uint64_t table_id,
                uint64_t& out_query_id);

        bool get_table_item(
                const std::string& table_name,
                uint64_t& out_query_id,
                uint64_t& out_table_id,
                TableItem& out_table_item);

        bool get_table_item(
                uint64_t table_id,
                uint64_t& out_query_id,
                TableItem& out_table_item);

        /*not use*/
        bool check_table_column(
                ResultPlan* plan,
                const std::string& column_name,
                const TableItem& table_item,
                uint64_t& column_id);

        /*not use*/
        int add_column_item(
                ResultPlan* plan,
                const std::string& column_name,
                ColumnItem& out_column_item);
        /*not use*/
        int add_column_item(
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& column_name,
                ColumnItem& out_column_item);

        // for select
        int add_select_item(uint64_t eid, const std::string& alias_name,
                            const std::string& name)
        {
            select_items_.push_back({eid, name, alias_name});
        }
        // for select

    private:
        uint64_t left_query_id_;
        uint64_t right_query_id_;

        uint64_t query_id_;
        SelectStmt* parent_ = nullptr;
        std::vector<TableItem> table_items_;
        std::vector<ColumnItem> column_items_;
        std::vector<CteItem> cte_items_;

        std::vector<SelectItem> select_items_;  // just for select

        friend int resolve_cte(ResultPlan*, Node*, SelectStmt*, uint64_t&);
        friend struct RawExprUnaryRef;

    private:
        static int _add_table_item(
                std::vector<TableItem>& tbs,
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id);

        static void push_back_(std::vector<ColumnItem>& src, const ColumnItem& it)
        {
            std::vector<ColumnItem>::iterator find = std::find_if(src.begin(), src.end(),
                  [it](ColumnItem cur)
                  {
                      if (cur.column_id_ == it.column_id_ && cur.column_name_ == it.column_name_ &&
                          cur.table_id_ == it.table_id_ && cur.query_id_ == it.query_id_)
                          return true;
                      return false;
                  });
            if (find == src.end())
            {
                src.push_back(it);
            }
        }
    };
}

#endif