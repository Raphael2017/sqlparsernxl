#ifndef LOGIC_PLAN_H
#define LOGIC_PLAN_H

#include <vector>
#include <cstdint>

namespace resolve
{
    struct SelectStmt;
    struct SqlRawExpr;
    struct LogicPlan
    {
        LogicPlan();
        ~LogicPlan();
        void reset();
        uint64_t generate_table_id();
        uint64_t generate_query_id();
        SelectStmt* add_query();
        SelectStmt* get_query(uint64_t query_id);
        SqlRawExpr* get_expr(uint64_t expr_id);

    private:
        void release();
        std::vector<SelectStmt*> stmts_;
        std::vector<SqlRawExpr*> exprs_;    //not used
        uint64_t new_gen_tid_;
        uint64_t  new_gen_qid_;
    };
}

#endif