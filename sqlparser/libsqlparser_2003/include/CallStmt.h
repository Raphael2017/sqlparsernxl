#ifndef CALL_STMT_H
#define CALL_STMT_H

#include "Interface.h"
#include "Stmt.h"

namespace resolve
{

    struct StoreProcedure : public IStoreProcedure {
        StoreProcedure(
                const std::string& server_name,
                const std::string& database_name,
                const std::string& schema_name,
                const std::string& sp_name)
                : store_procedure_name_(sp_name), schema_name_(schema_name),
                database_name_(database_name), server_name_(server_name) {}
        virtual std::string GetStoreProcedureName() override { return store_procedure_name_; }
        virtual std::string GetSchemaName() override { return schema_name_; }
        virtual std::string GetDatabaseName() override { return database_name_; };
        virtual std::string GetServerName() override { return server_name_; };

        std::string store_procedure_name_;
        std::string schema_name_;
        std::string database_name_;
        std::string server_name_;
    };

    struct CallStmt : public Stmt, public ICallStmt {
    public:
        ~CallStmt();
        bool set_store_procedure(
                const std::string& server_name,
                const std::string& database_name,
                const std::string& schema_name,
                const std::string& sp_name);
    private:
        StoreProcedure*  store_procedure_{nullptr};
    public:
        virtual StmtType GetStmtType() override { return  E_STMT_TYPE_CALL; }
        virtual IStoreProcedure *GetStoreProcedure() override { return store_procedure_; }
    };
}

#endif