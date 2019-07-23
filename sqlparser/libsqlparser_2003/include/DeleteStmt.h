#ifndef DELETE_STMT_H
#define DELETE_STMT_H

#include "Interface.h"
#include "Stmt.h"

namespace resolve {
    struct DeleteStmt : public Stmt, public IDeleteStmt {
    public:
        ~DeleteStmt();
        bool set_delete_table(
                ResultPlan* plan,
                const std::string& schema_name,
                const std::string& table_name,
                TableRef*& out_table_ref);
    private:
        TableRef*  delete_table_{nullptr};
    public:
        virtual StmtType GetStmtType() override { return  E_STMT_TYPE_DELETE; }

        virtual bool IsBasicTableOrAlias() override;
        virtual ITableItem* GetDeleteTable() override;
    };
}



#endif