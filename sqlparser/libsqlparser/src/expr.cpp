#include "expr.h"
#include "LogicPlan.h"
#include "SelectStmt.h"
#include "TableRef.h"
#include "SelectItem.h"

namespace resolve
{
    void RawExprScalarSubquery::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {

    }

    void RawExprBinaryRef::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && first_id_ != OB_INVALID_ID
                && second_id_ != OB_INVALID_ID);
        out_table_column_ref.push_back({first_id_, second_id_});
    }

    void RawExprUnaryOp::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && expr_ != nullptr);
        expr_->scanf_table_column_ref(logic, out_table_column_ref);
    }

    void RawExprBinaryOp::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && first_expr_ != nullptr
                && second_expr_ != nullptr);
        first_expr_->scanf_table_column_ref(logic, out_table_column_ref);
        second_expr_->scanf_table_column_ref(logic, out_table_column_ref);
    }

    void RawExprTripleOp::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && first_expr_ != nullptr
               && second_expr_ != nullptr && third_expr_ != nullptr);
        first_expr_->scanf_table_column_ref(logic, out_table_column_ref);
        second_expr_->scanf_table_column_ref(logic, out_table_column_ref);
        third_expr_->scanf_table_column_ref(logic, out_table_column_ref);
    }

    void RawExprMultiOp::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr);
        for (auto expr : exprs_)
        {
            assert(expr != nullptr);
            expr->scanf_table_column_ref(logic, out_table_column_ref);
        }
    }

    void RawExprCaseOp::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && arg_expr != nullptr);
        arg_expr->scanf_table_column_ref(logic, out_table_column_ref);
        for (auto expr : when_exprs_)
        {
            assert(expr != nullptr);
            expr->scanf_table_column_ref(logic, out_table_column_ref);
        }
        for (auto expr : then_exprs_)
        {
            assert(expr != nullptr);
            expr->scanf_table_column_ref(logic, out_table_column_ref);
        }
        assert(default_expr_ != nullptr);
        default_expr_->scanf_table_column_ref(logic, out_table_column_ref);
    }

    void RawExprAggFun::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        if (param_expr_ == nullptr)
        {
            // means '*'
        }
        else
        {
            param_expr_->scanf_table_column_ref(logic, out_table_column_ref);
        }
    }

    void RawExprSysFun::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        for (auto expr : param_exprs_)
        {
            expr->scanf_table_column_ref(logic, out_table_column_ref);
        }
    }

    void SqlRawExpr::debug(LogicPlan* logic)
    {
        std::vector<TableColumnRef> vec;
        expr_->scanf_table_column_ref(logic, vec);
        Stmt* stmt = logic->get_query(query_id_);
        for (const TableColumnRef& ref : vec )
        {
            TableRef* tbi = nullptr;
            bool fd = stmt->get_table_item(ref.table_id_, tbi);
            assert(fd);
            SelectItem* s = nullptr;
            fd = tbi->check_column_by_index(ref.column_id_, s);
            if (fd)
            {
                printf("->%s.%s", tbi->get_table_name().c_str(), s->get_column_name().c_str());
                s->debug(logic);
            }
            else
            {
                /*leaf node*/
                ITableItem* tt = dynamic_cast<ITableItem*>(tbi);
                printf("->%s\n", tt->GetTableName().c_str());
            }
        }
    }
}