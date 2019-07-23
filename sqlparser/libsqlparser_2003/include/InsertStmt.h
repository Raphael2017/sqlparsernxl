#ifndef INSERT_STMT_H
#define INSERT_STMT_H

#include "Interface.h"
#include "Stmt.h"

namespace resolve {
    struct InsertStmt : public Stmt, public IInsertStmt
    {
    public:
        ~InsertStmt();
        bool set_insert_table(
                ResultPlan* plan,
                const std::string& schema_name,
                const std::string& table_name,
                TableRef*& out_table_ref);
    private:
        TableRef*  insert_table_{nullptr};
    public:
        virtual StmtType GetStmtType() override { return  E_STMT_TYPE_INSERT; }

        virtual bool IsBasicTableOrAlias() override;
        virtual ITableItem* GetInsertTable() override;
    };
}



#endif