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
        typedef std::function<void(IPlan*, ITableItem*,
        uint64_t query_id)> BaseTableVisit;
        explicit ResultPlan(const BaseTableVisit& visit);
        ~ResultPlan();
        void reset();
        LogicPlan* logicPlan_{nullptr};
        LocalTableMgr* local_table_mgr{nullptr};
        BaseTableVisit base_table_visit_;
        void* context_{nullptr};
        Node* tree_root_{nullptr};

        // implement IPlan
        virtual void* GetContext() { return context_; }
        virtual IStmt* GetQuery(uint64_t query_id);
    };
}


#endif