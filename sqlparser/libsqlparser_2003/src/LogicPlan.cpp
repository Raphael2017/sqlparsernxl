#include "LogicPlan.h"
#include <assert.h>
#include "Stmt.h"
#include "SelectStmt.h"
#include "expr.h"
#include "TableRef.h"
#include "SelectItem.h"
#include "UpdateStmt.h"
#include "UseStmt.h"
#include "DeleteStmt.h"
#include "InsertStmt.h"

namespace resolve
{
    LogicPlan::LogicPlan() : new_gen_tid_(UINT16_MAX),
                            new_gen_qid_(1), new_gen_eid_(1)
    {

    }

    LogicPlan::~LogicPlan()
    {
        release();
    }

    void LogicPlan::reset()
    {
        new_gen_tid_ = UINT16_MAX;
        new_gen_qid_ = 1;
        new_gen_eid_ = 1;
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

    uint64_t LogicPlan::generate_sql_raw_expr_id()
    {
        return new_gen_eid_++;
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
            case E_STMT_TYPE_USE:
                s = new UseStmt;
                break;
            case E_STMT_TYPE_DELETE:
                s = new DeleteStmt;
                break;
            case E_STMT_TYPE_INSERT:
                s = new InsertStmt;
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

    SqlRawExpr* LogicPlan::add_expr()
    {
        SqlRawExpr* ret = new SqlRawExpr;
        exprs_.push_back(ret);
        return ret;
    }

}