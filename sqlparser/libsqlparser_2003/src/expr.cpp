#include <ResultPlan.h>
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

    void SqlRawExpr::debug(ResultPlan* plan, int lvl)
    {
        std::vector<TableColumnRef> vec;
        expr_->scanf_table_column_ref(plan->logicPlan_, vec);
        if (vec.size() == 0)
        {
            printf("\n");
            for (int i = 0; i < lvl; ++i)
                printf("    ");
            printf("|->constant");
        }
        for (const TableColumnRef& ref : vec )
        {
            debug1(plan, query_id_, ref.table_id_, ref.column_id_, lvl);
        }
    }

    bool SqlRawExpr::check_base_field_ref(ResultPlan* plan)
    {
        if (expr_->get_expr_type() != E_OP_NAME_FIELD)
            return false;
        std::vector<TableColumnRef> vec;
        expr_->scanf_table_column_ref(plan->logicPlan_, vec);
        if (vec.size() != 1)
            return false;
        return check_base_field_ref1(plan, query_id_, vec[0].table_id_, vec[0].column_id_);
    }

    void SqlRawExpr::debug1(ResultPlan* plan, uint64_t query_id, uint64_t table_id, uint64_t column_id, int lvl)
    {
        printf("\n");
        for (int i = 0; i < lvl; ++i)
            printf("    ");
        printf("|->");
        Stmt* stmt = plan->logicPlan_->get_query(query_id);
        TableRef* tbi = nullptr;
        bool fd = stmt->get_table_item(table_id, tbi);
        assert(fd);
        switch (tbi->get_table_ref_type())
        {
            case TableRef::BASE_TABLE_ALIAS_REF:
            {
                printf("(%s,%ld)", tbi->get_table_name().c_str(), column_id);
                BaseTableAliasRef* bb = dynamic_cast<BaseTableAliasRef*>(tbi);
                printf("\n");
                for (int i = 0; i < lvl+1; ++i)
                    printf("    ");
                printf("|->");
                printf("(%s,%ld)", bb->GetTableName().c_str(), column_id);
            }
                break;
            case TableRef::BASE_TABLE_DIRECT_REF:
            {
                printf("(%s,%ld)", tbi->get_table_name().c_str(), column_id);
            }
                break;
            case TableRef::CTE_TABLE_REF:
            {
                printf("(%s,%ld)", tbi->get_table_name().c_str(), column_id);
                CteTableRef* ctbi = dynamic_cast<CteTableRef*>(tbi);
                Stmt* stmt = plan->logicPlan_->get_query(ctbi->cte_at_query_id_);
                CteDef* cte_def = stmt->get_cte_def_by_index(ctbi->cte_index_);
                SelectItem* col = nullptr;
                for (auto it : cte_def->cols_)
                {
                    if (it->get_column_id() == column_id)
                    {
                        col = it;
                        break;
                    }
                }
                assert(col != nullptr);
                uint64_t eid = OB_INVALID_ID;
                switch (col->get_sel_item_type())
                {
                    case SelectItem::E_SEL_ITEM_EXPR_ALIAS:
                    {
                        eid = dynamic_cast<SelItemExprAlias*>(col)->sql_raw_expr_id_;
                        plan->logicPlan_->get_expr(eid)->debug(plan, lvl+1);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPR:
                    {
                        eid = dynamic_cast<SelItemExpr*>(col)->sql_raw_expr_id_;
                        plan->logicPlan_->get_expr(eid)->debug(plan, lvl+1);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPAND_STAR:
                    {
                        SelItemExpandStar* sss = dynamic_cast<SelItemExpandStar*>(col);
                        debug1(plan, sss->query_id_, sss->ref_table_id_, sss->ref_column_id_, lvl+ 1);
                    }
                        break;
                    default:
                        assert(false);  /*unreachable*/
                        break;
                }
            }
                break;
            case TableRef::GENERATED_TABLE_REF:
            {
                printf("(%s,%ld)", tbi->get_table_name().c_str(), column_id);
                GeneratedTableRef* gtbi = dynamic_cast<GeneratedTableRef*>(tbi);
                assert(gtbi != nullptr);
                SelectItem* col = nullptr;
                for (auto it : gtbi->cols_)
                {
                    if (it->get_column_id() == column_id)
                    {
                        col = it;
                        break;
                    }
                }
                assert(col != nullptr);
                uint64_t eid = OB_INVALID_ID;
                switch (col->get_sel_item_type())
                {
                    case SelectItem::E_SEL_ITEM_EXPR_ALIAS:
                    {
                        eid = dynamic_cast<SelItemExprAlias*>(col)->sql_raw_expr_id_;
                        plan->logicPlan_->get_expr(eid)->debug(plan, lvl+1);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPR:
                    {
                        eid = dynamic_cast<SelItemExpr*>(col)->sql_raw_expr_id_;
                        plan->logicPlan_->get_expr(eid)->debug(plan, lvl+1);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPAND_STAR:
                    {
                        SelItemExpandStar* sss = dynamic_cast<SelItemExpandStar*>(col);
                        debug1(plan, sss->query_id_, sss->ref_table_id_, sss->ref_column_id_, lvl+ 1);
                    }
                        break;
                }
            }
                break;
            default:
                assert(false);  /* unreachable */
                break;
        }
    }

    bool SqlRawExpr::check_base_field_ref1(ResultPlan* plan, uint64_t query_id, uint64_t table_id, uint64_t column_id)
    {
        Stmt* stmt = plan->logicPlan_->get_query(query_id);
        TableRef* tbi = nullptr;
        bool fd = stmt->get_table_item(table_id, tbi);
        assert(fd);
        switch (tbi->get_table_ref_type())
        {
            case TableRef::BASE_TABLE_ALIAS_REF:
            {
                return true;
            }
                break;
            case TableRef::BASE_TABLE_DIRECT_REF:
            {
                return true;
            }
                break;
            case TableRef::CTE_TABLE_REF:
            {
                CteTableRef* ctbi = dynamic_cast<CteTableRef*>(tbi);
                Stmt* stmt = plan->logicPlan_->get_query(ctbi->cte_at_query_id_);
                CteDef* cte_def = stmt->get_cte_def_by_index(ctbi->cte_index_);
                SelectItem* col = nullptr;
                for (auto it : cte_def->cols_)
                {
                    if (it->get_column_id() == column_id)
                    {
                        col = it;
                        break;
                    }
                }
                assert(col != nullptr);
                uint64_t eid = OB_INVALID_ID;
                switch (col->get_sel_item_type())
                {
                    case SelectItem::E_SEL_ITEM_EXPR_ALIAS:
                    {
                        eid = dynamic_cast<SelItemExprAlias*>(col)->sql_raw_expr_id_;
                        return plan->logicPlan_->get_expr(eid)->check_base_field_ref(plan);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPR:
                    {
                        eid = dynamic_cast<SelItemExpr*>(col)->sql_raw_expr_id_;
                        return plan->logicPlan_->get_expr(eid)->check_base_field_ref(plan);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPAND_STAR:
                    {
                        SelItemExpandStar* sss = dynamic_cast<SelItemExpandStar*>(col);
                        return check_base_field_ref1(plan, sss->query_id_, sss->ref_table_id_, sss->ref_column_id_);
                    }
                        break;
                    default:
                        assert(false);  /*unreachable*/
                        break;
                }
            }
                break;
            case TableRef::GENERATED_TABLE_REF:
            {
                GeneratedTableRef* gtbi = dynamic_cast<GeneratedTableRef*>(tbi);
                assert(gtbi != nullptr);
                SelectItem* col = nullptr;
                for (auto it : gtbi->cols_)
                {
                    if (it->get_column_id() == column_id)
                    {
                        col = it;
                        break;
                    }
                }
                assert(col != nullptr);
                uint64_t eid = OB_INVALID_ID;
                switch (col->get_sel_item_type())
                {
                    case SelectItem::E_SEL_ITEM_EXPR_ALIAS:
                    {
                        eid = dynamic_cast<SelItemExprAlias*>(col)->sql_raw_expr_id_;
                        return plan->logicPlan_->get_expr(eid)->check_base_field_ref(plan);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPR:
                    {
                        eid = dynamic_cast<SelItemExpr*>(col)->sql_raw_expr_id_;
                        return plan->logicPlan_->get_expr(eid)->check_base_field_ref(plan);
                    }
                        break;
                    case SelectItem::E_SEL_ITEM_EXPAND_STAR:
                    {
                        SelItemExpandStar* sss = dynamic_cast<SelItemExpandStar*>(col);
                        return check_base_field_ref1(plan, sss->query_id_, sss->ref_table_id_, sss->ref_column_id_);
                    }
                        break;
                }
            }
                break;
            default:
                assert(false);  /*unreachable*/
                break;
        }
        return false;
    }
}