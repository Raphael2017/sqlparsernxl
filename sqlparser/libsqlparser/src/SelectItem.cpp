#include "SelectItem.h"
#include "LogicPlan.h"
#include "expr.h"
#include "TableRef.h"

namespace resolve
{
    void SelItemExprAlias::debug(LogicPlan* logic)
    {
        auto expr = logic->get_expr(sql_raw_expr_id_);
        expr->debug(logic);
    }

    void SelItemExpr::debug(LogicPlan* logic)
    {
        auto expr = logic->get_expr(sql_raw_expr_id_);
        expr->debug(logic);
    }

    void SelItemExpandStar::debug(LogicPlan* logic)
    {
        TableRef* tbi = nullptr;
        Stmt* stmt = logic->get_query(query_id_);
        bool fd = stmt->get_table_item(ref_table_id_, tbi);
        assert(fd);
        SelectItem* s = nullptr;
        fd = tbi->check_column_by_index(ref_column_id_, s);
        if (fd)
        {
            printf("->%s.%s", tbi->get_table_name().c_str(), s->get_column_name().c_str());
            s->debug(logic);
        }
        else
        {
            ITableItem* tt = dynamic_cast<ITableItem*>(tbi);
            printf("->%s\n", tt->GetTableName().c_str());
        }
    }
}