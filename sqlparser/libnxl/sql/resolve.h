#ifndef RESOLVE_H
#define RESOLVE_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <assert.h>

#define OB_INVALID_ID  0
#define OB_APP_MIN_COLUMN_ID  500

struct Node;

namespace resolve
{
    typedef uint64_t TableID;
    typedef uint64_t QueryID;
    typedef uint64_t ColumnID;
    typedef uint64_t ExprID;
    typedef uint64_t CteID;


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

        TableID table_id;
        std::string table_name_;
        std::string alias_name_;
        TableType   type_;

        QueryID ref_id_;          // for GENERATED_TABLE, CTE_TABLE, ref_id_ link to a (select XXX)
        QueryID cte_at_query_id_; // for USE_CTE_TABLE  <cte_at_query_id_, ref_id_> link to cte definition
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

    struct ObStmt;
    struct SqlRawExpr;
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
        ObStmt* get_query(uint64_t query_id);
        SqlRawExpr* get_expr(uint64_t expr_id);
        std::vector<ObStmt*> stmts_;
        std::vector<SqlRawExpr*> exprs_;
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
        //std::vector<>
        int add_table_item(ResultPlan*, const std::string& table_name,
                const std::string& alias_name, TableItem::TableType tbtype,
                uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
        int add_cte_item(ResultPlan*, const std::string& table_name,
                 const std::string& alias_name, TableItem::TableType tbtype,
                 uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
        bool check_in_cte(const std::string& name, uint64_t& out_query_id, uint64_t& out_table_id);

        bool check_table_item(const std::string& table_name, uint64_t& out_query_id, uint64_t& out_table_id);
        bool check_table_item(uint64_t table_id, uint64_t& out_query_id);

        bool get_table_item(const std::string& table_name, uint64_t& out_query_id,
                uint64_t& out_table_id, TableItem& out_table_item);
        bool get_table_item(uint64_t table_id, uint64_t& out_query_id, TableItem& out_table_item);

        bool check_table_column(ResultPlan*, const std::string& column_name,
                                const TableItem& table_item, uint64_t& column_id);
        int add_column_item(ResultPlan* plan, const std::string& column_name, ColumnItem& out_column_item);
        int add_column_item(ResultPlan* plan, const std::string& table_name, const std::string& column_name,
                ColumnItem& out_column_item);



        // for select
        std::vector<SelectItem> select_items_;
        int add_select_item(uint64_t eid, const std::string& alias_name,
                const std::string& name)
        {
            select_items_.push_back({eid, name, alias_name});
        }
        // for select
    private:
        int _add_table_item(std::vector<TableItem>& tbs, ResultPlan*,
                const std::string& table_name,
                const std::string& alias_name, TableItem::TableType tbtype,
                uint64_t ref_id, uint64_t& out_table_id, uint64_t cte_at_query_id);
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

    int resolve_expr(ResultPlan*, Node*, ObStmt*);
    int resolve_select_statement(ResultPlan*, Node*, uint64_t& queryID, ObStmt*);

    int resolve_cte_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_cte(ResultPlan*, Node*, ObStmt*, uint64_t&);
    int resolve_from_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_table(ResultPlan*, Node*, ObStmt*, uint64_t&);
    int resolve_joined_table(ResultPlan*, Node*, ObStmt*);

    int resolve_where_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_select_clause(ResultPlan*, Node*, ObStmt*);
    int resolve_select_items(ResultPlan*, Node*, ObStmt*);


    struct LocalTableMgr
    {
        void report()
        {
            printf("tables:\n");
            for (auto tb : local_table_)
            {
                auto table_name = tb.first;
                printf("%s\n", table_name.c_str());
            }
            printf("fields:\n");
            for (auto tb : local_table_)
            {
                auto table_name = tb.first;
                auto table_id = tb.second;
                auto cols = local_table_column_[table_id];
                for (auto col : cols)
                {
                    auto col_name = col.first;
                    std::string info = table_name + "." +col_name;
                    printf("%s\n", info.c_str());
                }
            }
        }
        static LocalTableMgr* Ins()
        {
            if (!ins_)
            {
                ins_ = new LocalTableMgr;
                ins_->local_table_id_begin_ = 200;
            }
            return ins_;
        }
        uint64_t  get_local_table_id(const std::string& table_name)
        {
            std::string tb = table_name;
            std::transform(tb.begin(), tb.end(), tb.begin(), ::toupper);
            auto fd = local_table_.find(tb);
            if (fd == local_table_.end())
            {
                local_table_[tb] = local_table_id_begin_;
                local_table_column_[local_table_id_begin_] = {};
                ++local_table_id_begin_;
            }
            else
            {
                return fd->second;
            }
        }
        uint64_t  get_local_table_column_id(const std::string& table_name,
                const std::string& column_name)
        {
            std::string table_name_up = table_name;
            std::transform(table_name_up.begin(), table_name_up.end(), table_name_up.begin(), ::toupper);

            auto tb = local_table_.find(table_name_up);
            if (tb == local_table_.end())
                return OB_INVALID_ID;
            auto cols = local_table_column_.find(tb->second);
            if (cols != local_table_column_.end())
                return OB_INVALID_ID;
            if (cols->second.find(column_name) != cols->second.end())
                return OB_INVALID_ID;
            return cols->second[column_name];
        }
        uint64_t add_local_table_column(const std::string& table_name,
                const std::string& column_name)
        {
            std::string table_name_up = table_name;
            std::transform(table_name_up.begin(), table_name_up.end(), table_name_up.begin(), ::toupper);

            auto tb = local_table_.find(table_name_up);
            assert(tb != local_table_.end());
            auto cols = local_table_column_.find(tb->second);
            assert(cols != local_table_column_.end());
            if (cols->second.find(column_name) == cols->second.end())
            {
                auto k = cols->second.size();
                cols->second[column_name] = 1 + k;
            }
            return cols->second[column_name];
        }
    private:
        static LocalTableMgr* ins_;
        std::map<std::string, uint64_t > local_table_;
        std::map<uint64_t , std::map<std::string, uint64_t >> local_table_column_;
        uint64_t local_table_id_begin_;
    };
    Node* remove_select_parens(Node* node);
    Node* remove_joined_parens(Node* node);
}

#endif