#include "ResultPlan.h"
#include "LogicPlan.h"
#include "LocalTableMgr.h"
#include "Stmt.h"
namespace resolve
{
    ResultPlan::ResultPlan(
            const BaseTableVisit& visit,
            const BaseTableColumnVisit& visit1,
            const StartNewStmt& visit2,
            const WhereClauseVisit& visit3,
            const ErrorOccur& errorOccur):
            base_table_visit_(visit),
            baseTableColumnVisit_(visit1),
            startNewStmt_(visit2),
            whereClauseVisit_(visit3),
            errorOccur_(errorOccur),
            logicPlan_(new LogicPlan),
            local_table_mgr(new LocalTableMgr),
            error_code_(0)
    {

    }
    ResultPlan::~ResultPlan()
    {
        delete(logicPlan_);
        delete(local_table_mgr);
    }

    void ResultPlan::reset()
    {
        error_code_ = 0;
        error_detail_ = "";
        tree_root_ = nullptr;
        if (logicPlan_)
            logicPlan_->reset();
        if (local_table_mgr)
            local_table_mgr->reset();
    }

    void ResultPlan::set_err(int err_code, const std::string err_detail)
    {
        error_code_ = err_code;
        error_detail_ = err_detail;
    }

    IStmt* ResultPlan::GetQuery(uint64_t query_id)
    {
        Stmt* ret = logicPlan_->get_query(query_id);
        return ret;
    }

    void ResultPlan::SetDefaultSchema(const std::string& default_schema)
    {
        local_table_mgr->set_default_schema(default_schema);
    }

    void ResultPlan::SetDefaultDatabase(const std::string& default_database)
    {
        local_table_mgr->set_default_database(default_database);
    }

    void ResultPlan::AddTableStructure(
            const std::string& schema,
            const std::string& table,
            const std::list<std::string>& columns)
    {
        local_table_mgr->add_table_struct(schema + "." + table, columns);
    }
}

