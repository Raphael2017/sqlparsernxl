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
        ResultPlan(
                const BaseTableVisit& visit,
                const BaseTableColumnVisit& visit1,
                const StartNewStmt& visit2,
                const WhereClauseVisit& visit3,
                const ErrorOccur& errorOccur);
        ~ResultPlan();
        void reset();
        BaseTableVisit base_table_visit_;
        BaseTableColumnVisit baseTableColumnVisit_;
        StartNewStmt startNewStmt_;
        WhereClauseVisit whereClauseVisit_;
        ErrorOccur errorOccur_;
        LogicPlan* logicPlan_{nullptr};
        LocalTableMgr* local_table_mgr{nullptr};
        void* context_{nullptr};
        Node* tree_root_{nullptr};

    public:
        void set_err(int err_code, const std::string err_detail);
        std::string error_detail_;
        int error_code_;

        // implement IPlan
        virtual void* GetContext() override { return context_; }
        virtual IStmt* GetQuery(uint64_t query_id) override;
        virtual void SetDefaultSchema(const std::string& default_schema) override;
        virtual void AddTableStructure(const std::string& schema,
                const std::string& table, const std::list<std::string>& columns) override;
        virtual std::string GetErrorDetail() override { return error_detail_; }
    };
}


#endif