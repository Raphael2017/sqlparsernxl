#include "LogicPlan.h"
#include <assert.h>
#include "Stmt.h"
#include "SelectStmt.h"
#include "expr.h"

namespace resolve
{
    LogicPlan::LogicPlan() : new_gen_tid_(UINT16_MAX),
                            new_gen_qid_(1)
    {

    }

    LogicPlan::~LogicPlan()
    {
        release();
    }

    void LogicPlan::reset()
    {
        new_gen_qid_ = UINT16_MAX;
        new_gen_qid_ = 1;
        release();
    }

    void LogicPlan::release()
    {
        for (auto stmt : stmts_)
        {
            delete(stmt);
        }
        stmts_.clear();
        for (auto expr : exprs_)
        {
            delete(expr);
        }
        exprs_.clear();
    }

    uint64_t LogicPlan::generate_table_id()
    {
        return new_gen_tid_--;
    }

    uint64_t LogicPlan::generate_query_id()
    {
        return new_gen_qid_++;
    }

    Stmt* LogicPlan::add_query(StmtType stmtType)
    {
        Stmt* s = nullptr;
        switch (stmtType)
        {
            case E_STMT_TYPE_SELECT:
                s = new SelectStmt;
                break;
            case E_STMT_TYPE_UPDATE:
                s = new UpdateStmt;
                break;
            default:
                assert(false);
        }
        stmts_.push_back(s);
        return s;
    }

    Stmt* LogicPlan::get_query(uint64_t query_id)
    {
        for (auto stmt : stmts_)
        {
            assert(stmt != nullptr);
            if (query_id == stmt->get_query_id())
                return stmt;
        }
        return nullptr;
    }

    SqlRawExpr* LogicPlan::get_expr(uint64_t expr_id)
    {
        for (auto sql_expr : exprs_)
        {
            if (sql_expr->get_expr_id() == expr_id)
            {
                return sql_expr;
            }
        }
        return nullptr;
    }
}