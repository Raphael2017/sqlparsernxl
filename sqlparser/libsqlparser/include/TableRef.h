#ifndef TABLE_REF_H
#define TABLE_REF_H

#include "Interface.h"
#include "Stmt.h"

struct Node;

namespace resolve
{
    struct ResultPlan;
    struct LogicPlan;
    struct SelectItem;
    struct UpdateStmt;
    struct TableRef : ITableItem
    {
    public:
        enum TableRefType
        {
            NULL_REF,
            BASE_TABLE_DIRECT_REF,
            BASE_TABLE_ALIAS_REF,
            GENERATED_TABLE_REF,
            CTE_TABLE_REF,
        };
        virtual ~TableRef() {}
        TableRefType get_table_ref_type() const { return table_ref_type_; }
        void set_table_ref_type(TableRefType table_ref_type) { table_ref_type_ = table_ref_type; }
        uint64_t get_table_id() const { return table_id_; }
        void set_table_id(uint64_t table_id) { table_id_ = table_id; }
        uint64_t get_query_id() const { return query_id_; }
        void set_query_id(uint64_t query_id) { query_id_ = query_id; }

        /*  */
        virtual std::string get_table_name() const = 0;
        virtual bool check_column(
                ResultPlan* plan,
                const std::string column_name,
                uint64_t& out_column_id) const = 0;
        virtual bool check_is_ref(
                const std::string& schema,
                const std::string& table) const = 0;
        virtual bool expand(
                ResultPlan* plan,
                std::vector<SelectItem*>& out_select_items,
                uint64_t start_index) = 0;
        virtual TableRef* clone() const = 0;

        /* Implement Of ITableItem */
        virtual TableItemType GetTableItemType() override { return E_UNKNOWN; }
        virtual uint64_t GetTableID() override { return OB_INVALID_ID; }
        virtual uint64_t GetQueryID() override { return OB_INVALID_ID; }
        virtual std::string GetTableName() override { return ""; }
        virtual std::string GetTableAliasName() override { return ""; }
        virtual std::string GetSchemaName() override { return ""; }
        virtual std::string GetDatabaseName() override { return ""; }
        virtual std::string GetServerName() override { return ""; }
        virtual std::string GetTableHint() override { return ""; }
        virtual std::string GetTableObject() override { return ""; }
        virtual bool SetText(
                TableItemType tp,
                const std::string& newtable,
                const std::string& alias) override { return false; }
        virtual int GetLine() override { return 0; }
        virtual int GetColumn() override { return 0; }

    protected:
        TableRefType table_ref_type_;
        uint64_t table_id_; // table unique code
        uint64_t query_id_; // location of stmt
        friend struct Stmt;
    };

    struct BaseTableRef : public TableRef
    {
    public:
        BaseTableRef() { table_ref_type_ = BASE_TABLE_DIRECT_REF; }
        virtual std::string get_table_name() const override;
        virtual bool check_column(
                ResultPlan* plan,
                const std::string column_name,
                uint64_t& out_column_id) const override;
        virtual bool check_is_ref(
                const std::string& schema,
                const std::string& table) const override;
        virtual bool expand(
                ResultPlan* plan,
                std::vector<SelectItem*>& out_select_items,
                uint64_t start_index) override;
        virtual TableRef* clone() const override;

        /* Implement Of ITableItem */
        virtual TableItemType GetTableItemType() override { return E_BASIC_TABLE; }
        virtual uint64_t GetTableID() override { return base_table_id_; }
        virtual uint64_t GetQueryID() override { return query_id_; }
        virtual std::string GetTableName() override { return table_name_; }
        virtual std::string GetSchemaName() override { return schema_name_; }
        virtual std::string GetDatabaseName() override { return database_name_; }
        virtual std::string GetServerName() override { return server_name_; }
        virtual std::string GetTableHint() override { return table_hints_; }
        virtual std::string GetTableObject() override { return table_object_; }
        virtual bool SetText(
                TableItemType tp,
                const std::string& newtable,
                const std::string& alias) override { return false; }
        virtual int GetLine() override { return line_; }
        virtual int GetColumn() override { return column_; }

    public:
        void bind_node(ResultPlan* plan, Node* node);

    protected:
        uint64_t base_table_id_;
        std::string table_name_;
        std::string schema_name_;
        bool default_schema_{false};
        std::string database_name_;
        bool default_database_{false};
        std::string server_name_;
        std::string table_hints_;
        std::string table_object_;
        int line_;
        int column_;
        Node* node_;
    friend struct Stmt;
    friend struct SqlRawExpr;
    friend struct UpdateStmt;
    friend struct BaseTableAliasRef;
    friend int resolve_update_clause(
            ResultPlan* plan,
            Node* node,
            UpdateStmt* parent
    );
    };

    struct BaseTableAliasRef: public BaseTableRef
    {
    public:
        BaseTableAliasRef() { table_ref_type_ = BASE_TABLE_ALIAS_REF; }
        virtual std::string get_table_name() const override;
        virtual bool check_is_ref(
                const std::string& schema,
                const std::string& table) const override;
        virtual TableRef* clone() const override;

        /* Implement Of ITableItem */
        virtual TableItemType GetTableItemType() override { return E_BASIC_TABLE_WITH_ALIAS; }
        virtual std::string GetTableAliasName() override { return alias_name_; }
        virtual bool SetText(
                TableItemType tp,
                const std::string& newtable,
                const std::string& alias) override { return false; }
    private:
        std::string alias_name_;
        friend struct Stmt;
    };

    struct GeneratedTableRef: public TableRef
    {
    public:
        GeneratedTableRef() { table_ref_type_ = GENERATED_TABLE_REF; }
        virtual std::string get_table_name() const override;
        virtual bool check_column(
                ResultPlan* plan,
                const std::string column_name,
                uint64_t& out_column_id) const override;
        virtual bool check_is_ref(
                const std::string& schema,
                const std::string& table) const override;
        virtual bool expand(
                ResultPlan* plan,
                std::vector<SelectItem*>& out_select_items,
                uint64_t start_index) override;
        virtual TableRef* clone() const override;
        bool set_column_alias(
                ResultPlan*plan,
                const std::vector<std::string>& col_alias);
        ~GeneratedTableRef();
    private:
        std::vector<SelectItem*> cols_;
        std::string alias_name_;
        uint64_t ref_query_id_;  // link of selectstmt
        friend struct Stmt;
        friend struct SqlRawExpr;
    };

    struct CteTableRef: public TableRef
    {
    public:
        CteTableRef() { table_ref_type_ = CTE_TABLE_REF; }
        virtual std::string get_table_name() const override;
        virtual bool check_column(
                ResultPlan* plan,
                const std::string column_name,
                uint64_t& out_column_id) const override;
        virtual bool check_is_ref(
                const std::string& schema,
                const std::string& table) const override;
        virtual bool expand(
                ResultPlan* plan,
                std::vector<SelectItem*>& out_select_items,
                uint64_t start_index) override;
        virtual TableRef* clone() const override;
    private:
        std::string cte_name_;
        std::string alias_name_;
        uint64_t cte_at_query_id_;
        uint64_t cte_index_;
        friend struct Stmt;
        friend struct SqlRawExpr;
        friend struct UpdateStmt;
    };

    struct Stmt;
    struct CteDef
    {
    public:
        ~CteDef();
        bool set_column_alias(
                ResultPlan*plan,
                const std::vector<std::string>& col_alias);
        const std::vector<SelectItem*>& get_select_items() const { return cols_; }
    private:
        std::vector<SelectItem*> cols_;
        std::string cte_def_name_;
        uint64_t ref_query_id_; // link of selectstmt
        bool is_recursive_cte_{false};
        friend struct Stmt;
        friend int resolve_cte(
                ResultPlan* plan,
                Node* node,
                Stmt* parent,
                uint64_t& out_table_id);
        friend struct SqlRawExpr;
    };

}

#endif