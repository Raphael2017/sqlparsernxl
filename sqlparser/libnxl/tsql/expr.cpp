#include "expr.h"
#include "LogicPlan.h"
#include "SelectStmt.h"

namespace resolve
{
    void RawExprUnaryRef::scanf_table_column_ref(
            LogicPlan* logic,
            std::vector<TableColumnRef>& out_table_column_ref)
    {
        assert(logic != nullptr && id_ != OB_INVALID_ID);
        SelectStmt* stmt = logic->get_query(id_);
        assert(stmt != nullptr);
        for (const SelectItem& sli : stmt->select_items_)
        {
            uint64_t expr_id = sli.expr_id_;
            SqlRawExpr* sql_expr = logic->get_expr(expr_id);
            assert(sql_expr != nullptr);
            RawExpr* expr = sql_expr->get_expr();
            assert(expr != nullptr);
            expr->scanf_table_column_ref(logic, out_table_column_ref);
        }
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

    }


}