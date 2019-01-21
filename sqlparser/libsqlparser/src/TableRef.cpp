#include <assert.h>
#include "TableRef.h"
#include "ResultPlan.h"
#include "LocalTableMgr.h"
#include "LogicPlan.h"
#include "SelectItem.h"
#include <set>
#include "SelectStmt.h"
#include "node.h"

namespace resolve
{
    std::string BaseTableRef::get_table_name() const
    {
        return table_name_;
    }

    bool BaseTableRef::check_column(
            ResultPlan* plan,
            const std::string column_name,
            uint64_t& out_column_id) const
    {
        assert(base_table_id_ != OB_INVALID_ID);
        assert(plan->local_table_mgr != nullptr);
        std::map<std::string, uint64_t > structure;
        plan->local_table_mgr->get_table_struct(base_table_id_, structure);
        auto fd = structure.find(column_name);
        if (fd == structure.end())
        {
            out_column_id = OB_INVALID_ID;
            return false;
        }
        else
        {
            out_column_id = fd->second;
            return true;
        }
    }

    bool BaseTableRef::check_is_ref(
            const std::string& schema,
            const std::string& table) const
    {
        assert(schema_name_.length() > 0);
        if (schema.length() > 0)
        {
            return schema == schema_name_ && table == table_name_;
        }
        else
        {
            return table == table_name_;
        }
    }

    bool BaseTableRef::expand(
            ResultPlan* plan,
            std::vector<SelectItem*>& out_select_items,
            uint64_t start_index)
    {
        assert(base_table_id_ != OB_INVALID_ID);
        assert(plan->local_table_mgr != nullptr);
        std::map<std::string, uint64_t > structure;
        plan->local_table_mgr->get_table_struct(base_table_id_, structure);
        std::vector<SelItemExpandStar*> tmp;
        for (auto it = structure.begin(); it != structure.end(); ++it)
        {
            SelItemExpandStar* item = new SelItemExpandStar;
            item->ref_table_id_ = table_id_;
            item->col_name_ = it->first;
            item->ref_column_id_ = it->second;
            item->query_id_ = query_id_;
            tmp.push_back(item);
        }

        std::sort(tmp.begin(), tmp.end(), [](SelItemExpandStar* a, SelItemExpandStar* b){
            return a->ref_column_id_ < b->ref_column_id_;
        });

        int k = start_index;
        for (auto it : tmp)
        {
            it->set_column_id(k++);
            out_select_items.push_back(it);
        }
        return true;
    }

    bool BaseTableRef::check_column_by_index( uint64_t index, SelectItem*& out)
    {
        return false;
    }

    void BaseTableRef::bind_node(ResultPlan* plan, Node* node)
    {
        assert(node != nullptr);
        node_ = node;
        assert(node_->nodeType_ == E_ALIAS);
        Node* factor = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);

        assert(factor && factor->nodeType_ == E_TABLE_IDENT);

        table_object_ = factor->serialize();
        Node* schema = factor->getChild(E_TABLE_IDENT_SCHEMA);
        schema_name_ = schema ? schema->terminalToken_.str : plan->local_table_mgr->get_default_schema(); // sqlserver seems to add a default schema
        default_schema_ = (schema == nullptr);
        Node* db = factor->getChild(E_TABLE_IDENT_DATABASE);
        database_name_ = db ? db->terminalToken_.str : "";
        Node* server = factor->getChild(E_TABLE_IDENT_SERVER);
        server_name_ = server ? server->terminalToken_.str : "";

        Node* table_hints = node->getChild(E_ALIAS_TABLE_HINTS);
        table_hints_ = table_hints ? table_hints->serialize() : "";
        line_ = factor->getChild(E_TABLE_IDENT_OBJECT)->terminalToken_.line;
        column_ = factor->getChild(E_TABLE_IDENT_OBJECT)->terminalToken_.column;
    }

    std::string BaseTableAliasRef::get_table_name() const
    {
        return alias_name_;
    }

    bool BaseTableAliasRef::check_is_ref(
            const std::string& schema,
            const std::string& table) const
    {
        assert(alias_name_.length() > 0);
        if (schema.length() > 0)
        {
            return false;
        }
        else
        {
            return table == alias_name_;
        }
    }

    GeneratedTableRef::~GeneratedTableRef()
    {
        for (auto it : cols_)
        {
            delete(it);
        }
        cols_.clear();
    }

    std::string GeneratedTableRef::get_table_name() const
    {
        return alias_name_;
    }

    bool GeneratedTableRef::check_column(
            ResultPlan* plan,
            const std::string column_name,
            uint64_t& out_column_id) const
    {
        for (auto it : cols_)
        {
            if (it->get_column_name() == column_name)
            {
                out_column_id = it->get_column_id();
                return true;
            }
        }
        return false;
    }

    bool GeneratedTableRef::set_column_alias(
            ResultPlan* plan,
            const std::vector<std::string>& col_alias)
    {
        SelectStmt* select_stmt = dynamic_cast<SelectStmt*>(plan->logicPlan_->get_query(ref_query_id_));
        assert(select_stmt != nullptr);
        if (col_alias.size() > 0)
        {
            if (col_alias.size() != select_stmt->get_select_items().size())
            {
                /*
                 * column alias list size error
                 * */
                return false;
            }
            else
            {
                std::set<std::string> tmp;
                for (auto it : col_alias)
                    tmp.insert(it);
                if (tmp.size() < col_alias.size())
                {
                    /*
                     * ambiguous column alias error
                     * */
                    return false;
                }
            }
        }

        int index = 0;
        for (SelectItem* sel : select_stmt->get_select_items())
        {
            SelectItem* clone = sel->clone();
            if (col_alias.size() > 0)
                clone->set_alias(col_alias[index]);
            clone->set_column_id(1 + index);
            index++;
            cols_.push_back(clone);
        }
    }

    bool GeneratedTableRef::check_is_ref(
            const std::string& schema,
            const std::string& table) const
    {
        assert(alias_name_.length() > 0);   /* alias name is not optional */
        if (schema.length() > 0)
        {
            return false;
        }
        else
        {
            return table == alias_name_;
        }
    }

    bool GeneratedTableRef::expand(
            ResultPlan* plan,
            std::vector<SelectItem*>& out_select_items,
            size_t start_index)
    {
        for (auto it : cols_)
        {
            SelItemExpandStar* item = new SelItemExpandStar;
            item->ref_table_id_ = table_id_;
            item->col_name_ = it->get_column_name();
            item->ref_column_id_ = it->get_column_id();
            item->set_column_id(start_index++);
            item->query_id_ = query_id_;
            out_select_items.push_back(item);
        }
        return true;
    }

    bool GeneratedTableRef::check_column_by_index( uint64_t index, SelectItem*& out)
    {
        for (auto it : cols_)
        {
            if (index == it->get_column_id())
            {
                out = it;
                break;
            }
        }
        return true;
    }

    std::string CteTableRef::get_table_name() const
    {
        return cte_name_;
    }

    bool CteTableRef::check_column(
            ResultPlan* plan,
            const std::string column_name,
            uint64_t& out_column_id) const
    {
        Stmt* stmt = plan->logicPlan_->get_query(cte_at_query_id_);
        CteDef* cte_def = stmt->get_cte_def_by_index(cte_index_);

        for (auto it : cte_def->get_select_items())
        {
            if (it->get_column_name() == column_name)
            {
                out_column_id = it->get_column_id();
                return true;
            }
        }
        return false;
    }

    bool CteTableRef::check_is_ref(
            const std::string& schema,
            const std::string& table) const
    {
        assert(cte_name_.length() > 0);
        if (alias_name_.length() > 0)
        {
            if (schema.length() > 0)
                return false;
            return table == alias_name_;
        }
        else
        {
            if (schema.length() > 0)
                return false;
            return table == cte_name_;
        }
    }

    bool CteTableRef::expand(
            ResultPlan* plan,
            std::vector<SelectItem*>& out_select_items,
            uint64_t start_index)
    {
        Stmt* stmt = plan->logicPlan_->get_query(cte_at_query_id_);
        CteDef* cte_def = stmt->get_cte_def_by_index(cte_index_);

        uint64_t index = 0;
        for (auto it : cte_def->get_select_items())
        {
            SelItemExpandStar* item = new SelItemExpandStar;
            item->ref_table_id_ = table_id_;
            item->col_name_ = it->get_column_name();
            item->ref_column_id_ = index++;
            item->query_id_ = query_id_;
            item->set_column_id(start_index++);
            out_select_items.push_back(item);
        }
        return true;
    }

    bool CteTableRef::check_column_by_index( uint64_t index, SelectItem*& out)
    {
        // todo
        return false;
    }

    CteDef::~CteDef()
    {
        for (auto it : cols_)
        {
            delete(it);
        }
        cols_.clear();
    }

    bool CteDef::set_column_alias(
            ResultPlan*plan,
            const std::vector<std::string>& col_alias)
    {
        SelectStmt* select_stmt = dynamic_cast<SelectStmt*>(plan->logicPlan_->get_query(ref_query_id_));
        assert(select_stmt != nullptr);
        if (col_alias.size() > 0)
        {
            if (col_alias.size() != select_stmt->get_select_items().size())
            {
                /*
                 * column alias list size error
                 * */
                return false;
            }
            else
            {
                std::set<std::string> tmp;
                for (auto it : col_alias)
                    tmp.insert(it);
                if (tmp.size() < col_alias.size())
                {
                    /*
                     * ambiguous column alias error
                     * */
                    return false;
                }
            }
        }

        int index = 0;
        for (SelectItem* sel : select_stmt->get_select_items())
        {
            SelectItem* clone = sel->clone();
            if (col_alias.size() > 0)
                clone->set_alias(col_alias[index]);
            index++;
            cols_.push_back(clone);
        }
    }

}