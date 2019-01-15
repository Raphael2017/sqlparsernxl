#ifndef RESULT_PLAN_H
#define RESULT_PLAN_H

#include "Interface.h"
struct Node;

namespace resolve
{
    struct LogicPlan;
    struct LocalTableMgr;
    struct ResultPlan : public IPlan
    {
        ResultPlan(const BaseTableVisit& visit, const BaseTableColumnVisit& visit1);
        ~ResultPlan();
        void reset();
        LogicPlan* logicPlan_{nullptr};
        LocalTableMgr* local_table_mgr{nullptr};
        BaseTableVisit base_table_visit_;
        BaseTableColumnVisit baseTableColumnVisit_;
        void* context_{nullptr};
        Node* tree_root_{nullptr};

        // implement IPlan
        virtual void* GetContext() { return context_; }
        virtual IStmt* GetQuery(uint64_t query_id);
    };
}


#endif