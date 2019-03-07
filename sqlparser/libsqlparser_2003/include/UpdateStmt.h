#ifndef UPDATE_STMT_H
#define UPDATE_STMT_H

#include "Interface.h"
#include "Stmt.h"

namespace resolve
{
    struct UpdateItem
    {
        uint64_t table_id_;         // basic table
        uint64_t column_id_;
        uint64_t sql_raw_expr_id_;
        NodeType assign_type_;
    };
    struct TableRef;
    struct UpdateStmt : public Stmt, public IUpdateStmt
    {
    public:
        ~UpdateStmt();
        const std::vector<UpdateItem*>& get_update_items() const { return update_items_; }
        bool set_update_table(
                ResultPlan* plan,
                const std::string& schema_name,
                const std::string& table_name,
                TableRef*& out_table_ref);
    private:
        std::vector<UpdateItem*> update_items_;
        TableRef*  update_table_{nullptr};
    public:
        virtual StmtType GetStmtType() override { return  E_STMT_TYPE_UPDATE; }

        virtual bool IsBasicTableOrAlias() override;
        virtual ITableItem* GetUpdateTable() override;
    };
}

#endif