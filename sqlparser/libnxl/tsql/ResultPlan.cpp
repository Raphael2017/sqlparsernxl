#include "ResultPlan.h"
#include "LogicPlan.h"
#include "LocalTableMgr.h"
#include "Stmt.h"
namespace resolve
{
    ResultPlan::ResultPlan(const BaseTableVisit& visit):
            base_table_visit_(visit),
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
    };
}

