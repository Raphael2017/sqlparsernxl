#ifndef LOGIC_PLAN_H
#define LOGIC_PLAN_H

#include <vector>
#include <cstdint>
#include "keydef.h"
namespace resolve
{
    struct Stmt;
    struct SqlRawExpr;
    struct LogicPlan
    {
        LogicPlan();
        ~LogicPlan();
        void reset();
        uint64_t generate_table_id();
        uint64_t generate_query_id();
        uint64_t generate_sql_raw_expr_id();
        Stmt* add_query(StmtType stmtType);
        Stmt* get_query(uint64_t query_id);
        SqlRawExpr* get_expr(uint64_t expr_id);
        SqlRawExpr* add_expr();
    private:
        void release();
        std::vector<Stmt*> stmts_;
        std::vector<SqlRawExpr*> exprs_;
        uint64_t new_gen_tid_;
        uint64_t  new_gen_qid_;
        uint64_t new_gen_eid_;
    };
}

#endif