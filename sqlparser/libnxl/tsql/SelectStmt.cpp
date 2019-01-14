#include "SelectStmt.h"
#include "LocalTableMgr.h"
#include "LogicPlan.h"
#include "resolve.h"
#include <assert.h>
#include "Interface.h"
#include "node.h"

namespace resolve
{



    int SelectStmt::add_select_item(uint64_t eid, const std::string& alias_name,
                        const std::string& name)
    {
        select_items_.push_back({eid, name, alias_name});
        return 0;
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
}