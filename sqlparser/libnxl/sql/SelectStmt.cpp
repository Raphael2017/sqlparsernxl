#include "SelectStmt.h"
#include "LocalTableMgr.h"
#include "LogicPlan.h"
#include "resolve.h"
#include <assert.h>

namespace resolve
{
    ResultPlan::ResultPlan(const TableVisit& visit):
                        base_table_visit_(visit),
                        logicPlan_(new LogicPlan),
                        local_table_mgr(new LocalTableMgr)
    {

    }
    ResultPlan::~ResultPlan()
    {
        delete(logicPlan_);
        delete(local_table_mgr);
    }

    void ResultPlan::reset()
    {
        if (logicPlan_)
            logicPlan_->reset();
        if (local_table_mgr)
            local_table_mgr->reset();
    }

    SelectStmt::SelectStmt() : query_id_(OB_INVALID_ID),
                               left_query_id_(OB_INVALID_ID),
                               right_query_id_(OB_INVALID_ID),
                               parent_(nullptr)

    {

    }

    int SelectStmt::get_query_id() const
    {
        return query_id_;
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

    SelectStmt* SelectStmt::get_outer_Select() const
    {
        return parent_;
    }

    const std::vector<TableItem>& SelectStmt::get_table_items() const
    {
        return table_items_;
    }

    void SelectStmt::set_outer_select(SelectStmt* sel)
    {
        parent_ = sel;
    }

    void SelectStmt::set_query_id(uint64_t query_id)
    {
        query_id_ = query_id;
    }

    void SelectStmt::set_set_op_left_query_id(uint64_t left_query_id)
    {
        left_query_id_ = left_query_id;
    }

    void SelectStmt::set_set_op_right_query_id(uint64_t right_query_id)
    {
        right_query_id_ = right_query_id;
    }

    int SelectStmt::add_table_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        return _add_table_item(table_items_, resultPlan,
                               table_name, alias_name, tbtype,
                               ref_id, out_table_id, cte_at_query_id);
    }

    int SelectStmt::add_cte_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        assert(tbtype == TableItem::CTE_TABLE);
        return _add_table_item(cte_items_, resultPlan,
                               table_name, alias_name, tbtype,
                               ref_id, out_table_id, cte_at_query_id);
    }

    bool SelectStmt::check_in_cte(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        SelectStmt* cur = this;
        while (cur != nullptr)
        {
            for (TableItem& cte : cur->cte_items_)
            {
                if (cte.table_name_ == table_name ||
                    cte.alias_name_ == table_name)
                {
                    out_table_id = cte.table_id;
                    out_query_id = cur->query_id_;

                    if (cte.ref_id_ == OB_INVALID_ID)
                    {
                        /*
                         * this means we are still resolving the cte definition,
                         * it also means that this cte is a recursive definition
                         * */
                        cte.is_recursive_cte_ = true;
                    }
                    return true;
                }
            }
            /*
             * If no match in the WITH clause of 'select', maybe this is a subquery,
             * so look up in the outer query's WITH clause
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool SelectStmt::check_table_item(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        SelectStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_name_ == table_name ||
                    tbi.alias_name_ == table_name)
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    bool SelectStmt::check_table_item(uint64_t table_id, uint64_t& out_query_id)
    {
        SelectStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_id == table_id)
                {
                    out_query_id = cur->query_id_;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    bool SelectStmt::check_table_column(
            ResultPlan* plan,
            const std::string& column_name,
            const TableItem& table_item,
            uint64_t& column_id)
    {
        column_id = OB_INVALID_ID;
        assert(plan && plan->logicPlan_);
        switch (table_item.type_)
        {
            case TableItem::BASE_TABLE:
            case TableItem::ALIAS_TABLE:
            {
                column_id = plan->local_table_mgr->get_local_table_column_id(
                        table_item.table_name_,
                        column_name);
            }
                break;
            case TableItem::CTE_TABLE:
            {
                if (table_item.ref_id_ == OB_INVALID_ID)
                {
                    break;
                }
            }
            case TableItem::GENERATED_TABLE:
            {
                SelectStmt* stmt = plan->logicPlan_->get_query(table_item.ref_id_);
                assert(stmt != nullptr);
                int i = 0;
                for (const SelectItem& select_item : stmt->select_items_)
                {
                    std::string l = select_item.alias_name_;
                    std::string r = column_name;
                    std::transform(l.begin(), l.end(), l.begin(), ::toupper);
                    std::transform(r.begin(), r.end(), r.begin(), ::toupper);
                    if (l == r)
                    {
                        assert(column_id == OB_INVALID_ID);
                        column_id = i + OB_APP_MIN_COLUMN_ID;
                    }
                    ++i;
                }
            }
                break;
            case TableItem::USE_CTE_TABLE:
            {
                uint64_t qid = table_item.cte_at_query_id_;
                uint64_t tid = table_item.ref_id_;
                SelectStmt* stmt = plan->logicPlan_->get_query(qid);
                assert(stmt != nullptr);
                TableItem cte_target;
                bool find = false;
                for (auto cte : stmt->cte_items_)
                {
                    if (cte.table_id == tid)
                    {
                        find = true;
                        cte_target = cte;
                        break;
                    }
                }
                assert(find);
                return check_table_column(plan, column_name, cte_target, column_id);
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        return column_id != OB_INVALID_ID;
    }

    int SelectStmt::add_column_item(
            ResultPlan* plan,
            const std::string& column_name,
            ColumnItem& out_column_item)
    {
        bool flag = false;
        TableItem tbi;
        uint64_t column_id = OB_INVALID_ID;
        for (const TableItem& it : table_items_)
        {
            bool checkColumn = check_table_column(plan, column_name, it, column_id);
            if (checkColumn)
            {
                flag = true;
                tbi = it;
                break;
            }
        }
        if (flag)
        {
            out_column_item.query_id_ = query_id_;
            out_column_item.table_id_ = tbi.table_id;
            out_column_item.column_name_ = column_name;
            out_column_item.column_id_ = column_id;
            push_back_(column_items_, out_column_item);
        }
        else
        {
            for (const TableItem& it : table_items_)
            {
                if (it.type_ == TableItem::BASE_TABLE ||
                    it.type_ == TableItem::ALIAS_TABLE)
                {
                    out_column_item.query_id_ = query_id_;
                    out_column_item.table_id_ = it.table_id;
                    out_column_item.column_name_ = column_name;
                    out_column_item.column_id_ = plan->local_table_mgr->add_local_table_column(it.table_name_, column_name);
                    push_back_(column_items_, out_column_item);
                    break;
                }
            }
        }
        // todo
        // assert(out_column_item.column_id_ != OB_INVALID_ID);
        return 0;
    }

    int SelectStmt::add_column_item(
            ResultPlan* plan,
            const std::string& table_name,
            const std::string& column_name,
            ColumnItem& out_column_item)
    {
        uint64_t query_id = OB_INVALID_ID;
        uint64_t table_id = OB_INVALID_ID;
        TableItem tbi;
        bool findtb = get_table_item(table_name, query_id, table_id, tbi);
        assert(findtb);
        if (findtb && query_id != this->query_id_)
        {
            // here means Correlated Sub-Query
        }
        SelectStmt* stmt = plan->logicPlan_->get_query(query_id);
        ColumnItem cli{OB_INVALID_ID, "", OB_INVALID_ID, OB_INVALID_ID};
        bool checkColumn = check_table_column(plan, column_name, tbi, cli.column_id_);

        if (!checkColumn && (tbi.type_ == TableItem::BASE_TABLE || tbi.type_ == TableItem::ALIAS_TABLE))
        {
            cli.column_id_ = plan->local_table_mgr->add_local_table_column(tbi.table_name_, column_name);
        }

        cli.column_name_ = column_name;
        cli.table_id_ = tbi.table_id;
        cli.query_id_ = query_id;
        push_back_(column_items_, cli);
        out_column_item = cli;
    }

    bool SelectStmt::get_table_item(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id,
            TableItem& out_table_item)
    {
        assert(table_name.length() > 0);
        SelectStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_name_ == table_name ||
                    tbi.alias_name_ == table_name)
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    out_table_item = tbi;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }
    bool SelectStmt::get_table_item(
            uint64_t table_id,
            uint64_t& out_query_id,
            TableItem& out_table_item)
    {
        SelectStmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_id == table_id)
                {
                    out_query_id = cur->query_id_;
                    out_table_item = tbi;
                    return true;
                }
            }
            cur = cur->parent_;
        }
        return false;
    }

    int SelectStmt::_add_table_item(
            std::vector<TableItem>& tbs,
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id)
    {
        out_table_id = OB_INVALID_ID;
        TableItem item;
        switch (tbtype)
        {
            case TableItem::BASE_TABLE:
            {

                item.ref_id_ = resultPlan->local_table_mgr->get_local_table_id(table_name);
                item.table_id = item.ref_id_;
            }
                break;
            case TableItem::ALIAS_TABLE:
            {
                item.ref_id_ = resultPlan->local_table_mgr->get_local_table_id(table_name);
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::CTE_TABLE:
            {
                item.ref_id_ = ref_id;
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::GENERATED_TABLE:
            {
                assert(ref_id != OB_INVALID_ID);
                item.ref_id_ = ref_id;
                item.table_id = resultPlan->logicPlan_->generate_table_id();
            }
                break;
            case TableItem::USE_CTE_TABLE:
            {
                item.table_id = ref_id;
                item.ref_id_ = ref_id;
            }
                break;
            default:
                /*unreachable*/
                assert(false);
        }
        /* todo
         * ambiguous table check*/
        item.type_ = tbtype;
        item.table_name_ = table_name;
        item.alias_name_ = alias_name;
        item.cte_at_query_id_ = cte_at_query_id;
        tbs.push_back(item);

        out_table_id = item.table_id;
        return 0;
    }

    void SelectStmt::push_back_(std::vector<ColumnItem>& src, const ColumnItem& it)
    {
        std::vector<ColumnItem>::iterator find = std::find_if(src.begin(), src.end(),
                                                              [it](ColumnItem cur)
                                                              {
                                                                  if (cur.column_id_ == it.column_id_ && cur.column_name_ == it.column_name_ &&
                                                                      cur.table_id_ == it.table_id_ && cur.query_id_ == it.query_id_)
                                                                      return true;
                                                                  return false;
                                                              });
        if (find == src.end())
        {
            src.push_back(it);
        }
    }

    int SelectStmt::add_select_item(uint64_t eid, const std::string& alias_name,
                        const std::string& name)
    {
        select_items_.push_back({eid, name, alias_name});
    }
}