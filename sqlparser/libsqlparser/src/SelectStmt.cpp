#include "SelectStmt.h"
#include "LocalTableMgr.h"
#include "LogicPlan.h"
#include "resolve.h"
#include <assert.h>
#include "Interface.h"
#include "node.h"
#include "TableRef.h"
#include "SelectItem.h"

namespace resolve
{
    bool SelectStmt::add_select_item_expand_star(
            ResultPlan* plan,
            const std::string& schema,
            const std::string& table)
    {
        if (table.length() == 0)
        {
            // all table expand
            for (TableRef* tbi : table_items_)
            {
                tbi->expand(plan, select_items_, 1 + get_last_column_id());
            }
        }
        else
        {
            // specific table expand
            TableRef* tbi = nullptr;
            bool gettable = get_table_item(schema, table, tbi);
            assert(gettable);
            tbi->expand(plan, select_items_, 1 + get_last_column_id());
        }
        return true;
    }

    bool SelectStmt::add_select_item(uint64_t expr_id, const std::string& alias, bool is_real_alias)
    {
        if (is_real_alias)
        {
            SelItemExprAlias* item = new SelItemExprAlias;
            item->sql_raw_expr_id_ = expr_id;
            item->set_alias(alias);
            item->set_column_id(get_last_column_id() + 1);
            select_items_.push_back(item);
        }
        else
        {
            SelItemExpr* item = new SelItemExpr;
            item->sql_raw_expr_id_ = expr_id;
            item->name_ = alias;
            item->set_column_id(get_last_column_id() + 1);
            select_items_.push_back(item);
        }
        return true;
    }

    bool SelectStmt::is_set_op() const
    {
        return left_query_id_ != OB_INVALID_ID &&
               right_query_id_ != OB_INVALID_ID;
    }

    uint64_t SelectStmt::get_set_op_left_query_id() const
    {
        return left_query_id_;
    }

    uint64_t SelectStmt::get_set_op_right_query_id() const
    {
        return right_query_id_;
    }

    void SelectStmt::set_set_op_left_query_id(uint64_t left_query_id)
    {
        left_query_id_ = left_query_id;
    }

    void SelectStmt::set_set_op_right_query_id(uint64_t right_query_id)
    {
        right_query_id_ = right_query_id;
    }

    uint64_t SelectStmt::get_last_column_id() const
    {
        uint64_t index = 0;
        if (select_items_.size() == 0)
            index = 0;
        else
            index = select_items_.back()->get_column_id();
        return index;
    }
}