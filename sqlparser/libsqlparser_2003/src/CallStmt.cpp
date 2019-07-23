#include "CallStmt.h"
#include "ResultPlan.h"
#include "LogicPlan.h"
#include <assert.h>

namespace resolve {
    CallStmt::~CallStmt() { delete(store_procedure_); store_procedure_ = nullptr; }
    bool CallStmt::set_store_procedure(
            const std::string& server_name,
            const std::string& database_name,
            const std::string& schema_name,
            const std::string& sp_name) {
        assert(store_procedure_ == nullptr);
        store_procedure_ = new StoreProcedure(server_name, database_name, schema_name, sp_name);
        return true;
    }
}
