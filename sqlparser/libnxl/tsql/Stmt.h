#ifndef STMT_H
#define STMT_H

#include "Interface.h"

struct Node;

namespace resolve
{
    struct TableItem : public ITableItem
    {
        enum TableType
        {
            BASE_TABLE,
            ALIAS_TABLE,
            CTE_TABLE,
            GENERATED_TABLE,
            USE_CTE_TABLE,
        };

        uint64_t table_id{OB_INVALID_ID};
        std::string table_name_;
        std::string schema_name_;
        std::string database_name_;
        std::string server_name_;
        std::string alias_name_;
        std::string table_hints_;
        std::string table_object_;
        int line_;
        int column_;
        TableType   type_;

        /*
         * for GENERATED_TABLE, CTE_TABLE, ref_id_ link to a query_id
         * for BASE_TABLE, ALIAS_TABLE, ref_id_ link to a base table_id
         * */
        uint64_t ref_id_{OB_INVALID_ID};
        uint64_t cte_at_query_id_{OB_INVALID_ID}; // for USE_CTE_TABLE  <cte_at_query_id_, ref_id_> link to cte definition

        bool is_recursive_cte_{false};  // for CTE_TABLE
        Node* node_{nullptr};

        bool default_schema_{true};
        uint64_t query_id_{OB_INVALID_ID};
    public:
        void bind_node(Node* node);
        bool check_is_ref(
                const std::string& schema,
                const std::string& table) const;
    public:
        virtual TableItemType GetTableItemType();
        virtual uint64_t GetTableID();
        virtual uint64_t GetQueryID();
        virtual std::string GetTableName();
        virtual std::string GetTableAliasName();
        virtual std::string GetSchemaName();
        virtual std::string GetDatabaseName();
        virtual std::string GetServerName();
        virtual std::string GetTableHint();
        virtual std::string GetTableObject();
        virtual bool SetText(
                TableItemType tp,
                const std::string& newtable,
                const std::string& alias);
        virtual int GetLine();
        virtual int GetColumn();
    };

    struct ColumnItem : public ITableColumnRefItem
    {
        uint64_t column_id_{OB_INVALID_ID};
        std::string column_name_;
        uint64_t table_id_{OB_INVALID_ID};
        uint64_t query_id_{OB_INVALID_ID};     // for correlated subquery

        std::string column_object_;
        int line_;
        int column_;
        ITableItem* tbi_;
    public:
        void bind(Node* node, ITableItem* tbi);
    public:
        virtual ITableItem* GetTableItem();
        virtual std::string GetColumnName();
        virtual std::string GetColumnObject();
        virtual bool SetText(const std::string& columnref);
        virtual int GetLine();
        virtual int GetColumn();
    };

    struct SelectItem
    {
        uint64_t expr_id_;
        std::string name_;
        std::string alias_name_;
    };

    typedef TableItem CteItem;

    struct ResultPlan;
    struct SelectStmt;
    struct Stmt : public IStmt
    {
        Stmt();
        int get_query_id() const;
        void set_query_id(uint64_t query_id);
        Stmt* get_parent() const;
        void set_parent(Stmt* sel);
        const std::vector<TableItem>& get_table_items() const;

        TableItem* add_table_item(
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id,
                Node* node = nullptr);

        TableItem* add_cte_item(
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id,
                Node* node = nullptr);

        bool check_in_cte(
                const std::string& name,
                uint64_t& out_query_id,
                uint64_t& out_table_id);

        bool check_table_item(
                const std::string& schema,
                const std::string& table_name,
                uint64_t& out_query_id,
                uint64_t& out_table_id);

        bool check_table_item(
                uint64_t table_id,
                uint64_t& out_query_id);

        bool get_table_item(
                const std::string& schema,
                const std::string& table_name,
                uint64_t& out_query_id,
                uint64_t& out_table_id,
                TableItem& out_table_item);

        bool get_table_item(
                const std::string& schema,
                const std::string& table_name,
                uint64_t& out_query_id,
                uint64_t& out_table_id,
                TableItem*& out_table_item);

        bool get_table_item(
                uint64_t table_id,
                uint64_t& out_query_id,
                TableItem& out_table_item);

        bool get_table_item(
                uint64_t table_id,
                uint64_t& out_query_id,
                TableItem*& out_table_item);

        bool check_table_column(
                ResultPlan* plan,
                const std::string& column_name,
                const TableItem& table_item,
                uint64_t& column_id);

        int add_column_item(
                ResultPlan* plan,
                const std::string& column_name,
                ColumnItem& out_column_item);

        int add_column_item(
                ResultPlan* plan,
                const std::string& schema,
                const std::string& table_name,
                const std::string& column_name,
                ColumnItem& out_column_item,
                Node* node);

    private:
        uint64_t query_id_;
        Stmt* parent_ = nullptr;
        std::vector<TableItem> table_items_;
        std::vector<ColumnItem> column_items_;
        std::vector<CteItem> cte_items_;

    private:
        static TableItem* _add_table_item(
                std::vector<TableItem>& tbs,
                ResultPlan* plan,
                const std::string& table_name,
                const std::string& alias_name,
                TableItem::TableType tbtype,
                uint64_t ref_id,
                uint64_t& out_table_id,
                uint64_t cte_at_query_id,
                Node* node);

        static ColumnItem* push_back_(std::vector<ColumnItem>& src, const ColumnItem& it);

        friend int resolve_cte(ResultPlan*, Node*, Stmt*, uint64_t&);
        friend int resolve_table(
                ResultPlan* plan,
                Node* node,
                Stmt* parent,
                uint64_t& out_table_id);
        friend struct RawExprUnaryRef;
        friend int resolve_cte(
                ResultPlan* plan,
                Node* node,
                SelectStmt* parent,
                uint64_t& out_table_id);

    public:
        virtual StmtType GetStmtType() { return E_STMT_TYPE_SELECT; }
        virtual uint64_t GetQueryID() { return  get_query_id();};
    };
}

#endif