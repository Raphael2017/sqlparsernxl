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
            const WhereClauseVisit& visit3):
            base_table_visit_(visit),
            baseTableColumnVisit_(visit1),
            startNewStmt_(visit2),
            whereClauseVisit_(visit3),
            logicPlan_(new LogicPlan),
            local_table_mgr(new LocalTableMgr)
    {

    }
    ResultPlan::~ResultPlan()
    {
        delete(logicPlan_);
        delete(local_table_mgr);
    }

    void ResultPlan::reset()
    {
        if (logicPlan_)
            logicPlan_->reset();
        if (local_table_mgr)
            local_table_mgr->reset();
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

    void ResultPlan::AddTableStructure(
            const std::string& schema,
            const std::string& table,
            const std::list<std::string>& columns)
    {
        local_table_mgr->add_table_struct(schema + "." + table, columns);
    }
}

