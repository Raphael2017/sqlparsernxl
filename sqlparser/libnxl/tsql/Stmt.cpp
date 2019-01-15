#include "Stmt.h"
#include "ResultPlan.h"
#include "LogicPlan.h"
#include "LocalTableMgr.h"
#include "node.h"
#include "SelectStmt.h"
#include <assert.h>


namespace resolve
{
    void TableItem::bind_node(Node* node)
    {
        assert(node != nullptr);
        node_ = node;
        assert(node_->nodeType_ == E_ALIAS);
        Node* factor = node->getChild(E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS);

        assert(factor && factor->nodeType_ == E_TABLE_IDENT);

        table_object_ = factor->serialize();
        Node* schema = factor->getChild(E_TABLE_IDENT_SCHEMA);
        schema_name_ = schema ? schema->terminalToken_.str : "dbo"; // sqlserver default schema
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

    bool TableItem::check_is_ref(
            const std::string& schema,
            const std::string& table) const
    {
        if (alias_name_.length() > 0)
        {
            if (schema.length() > 0)
                return false;
            return table == alias_name_;
        }
        else
        {
            if (schema.length() > 0 && schema_name_.length() > 0)
            {
                return schema == schema_name_ && table == table_name_;
            }
            return table == table_name_;
        }
    }

    TableItemType TableItem::GetTableItemType()
    {
        switch (type_)
        {
            case BASE_TABLE:
                return E_BASIC_TABLE;
            case ALIAS_TABLE:
                return E_BASIC_TABLE_WITH_ALIAS;
            case CTE_TABLE:
                /* go through */
            case GENERATED_TABLE:
                /* go through */
            case USE_CTE_TABLE:
                /* go through */
            default:
                /* unreachable */
                assert(false);
        }
        return E_BASIC_TABLE;
    }

    uint64_t TableItem::GetTableID()
    {
        return table_id;
    }

    uint64_t TableItem::GetQueryID()
    {
        return query_id_;
    }

    std::string TableItem::GetTableName()
    {
        return table_name_;
    }

    std::string TableItem::GetTableAliasName()
    {
        switch (type_)
        {
            case BASE_TABLE:
                return "";
            case ALIAS_TABLE:
                return alias_name_;
            case CTE_TABLE:
                /* go through */
            case GENERATED_TABLE:
                /* go through */
            case USE_CTE_TABLE:
                /* go through */
            default:
                /* unreachable */
                assert(false);
        }
        return "";
    }

    std::string TableItem::GetSchemaName()
    {
        if (!default_schema_)
            return schema_name_;
        return "";
    }

    std::string TableItem::GetDatabaseName()
    {
        return database_name_;
    }

    std::string TableItem::GetServerName()
    {
        return server_name_;
    }

    std::string TableItem::GetTableHint()
    {
        return table_hints_;
    }

    std::string TableItem::GetTableObject()
    {
        return table_object_;
    }

    bool TableItem::SetText(
            TableItemType tp,
            const std::string& newtable,
            const std::string& alias)
    {
        assert(node_ != nullptr);
        assert(node_->nodeType_ == E_ALIAS);
        for (size_t i = 0; i < node_->getChildrenCount(); ++i)
        {
            delete(node_->getChild(i));
        }
        node_->nodeType_ = E_STRING;
        node_->terminalToken_.str = newtable + " AS " + alias;
        node_->isTerminalToken = true;
    }

    int TableItem::GetLine()
    {
        return line_;
    }

    int TableItem::GetColumn()
    {
        return column_;
    }
    //////////////////////////////////////////////////////////////////////////////
    void ColumnItem::bind(Node* node, ITableItem* tbi)
    {
        tbi_ = tbi;
        assert(node->nodeType_ == E_OP_NAME_FIELD);
        column_object_ = node->serialize();
        Node* cl = node->getChild(E_OP_NAME_FIELD_COLUMN_NAME);
        line_ = cl->terminalToken_.line;
        column_ = cl->terminalToken_.column;
    }

    ITableItem* ColumnItem::GetTableItem()
    {
        return tbi_;
    }

    std::string ColumnItem::GetColumnName()
    {
        return column_name_;
    }

    std::string ColumnItem::GetColumnObject()
    {
        return column_object_;
    }

    bool ColumnItem::SetText(const std::string& columnref)
    {
        return false;
    }

    int ColumnItem::GetLine()
    {
        return line_;
    }

    int ColumnItem::GetColumn()
    {
        return column_;
    }
    //////////////////////////////////////////////////////////////////////////////
    Stmt::Stmt() : query_id_(OB_INVALID_ID),
                   parent_(nullptr)

    {

    }

    int Stmt::get_query_id() const
    {
        return query_id_;
    }

    void Stmt::set_query_id(uint64_t query_id)
    {
        query_id_ = query_id;
    }

    Stmt* Stmt::get_parent() const
    {
        return parent_;
    }

    void Stmt::set_parent(Stmt* sel)
    {
        parent_ = sel;
    }

    const std::vector<TableItem>& Stmt::get_table_items() const
    {
        return table_items_;
    }

    TableItem* Stmt::add_table_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id,
            Node* node)
    {
        auto ret = _add_table_item(table_items_, resultPlan,
                               table_name, alias_name, tbtype,
                               ref_id, out_table_id, cte_at_query_id, node);
        ret->query_id_ = get_query_id();
        return ret;
    }

    TableItem* Stmt::add_cte_item(
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id,
            Node* node)
    {
        assert(tbtype == TableItem::CTE_TABLE);
        auto ret = _add_table_item(cte_items_, resultPlan,
                               table_name, alias_name, tbtype,
                               ref_id, out_table_id, cte_at_query_id, node);
        ret->query_id_ = get_query_id();
        return ret;
    }

    bool Stmt::check_in_cte(
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        Stmt* cur = this;
        while (cur != nullptr)
        {
            // reverse traversal to find the nearby cte definition
            for (auto rit = cur->cte_items_.rbegin(); rit != cur->cte_items_.rend(); ++rit)
            {
                auto cte = *rit;
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
             * If no match in this WITH clause of 'select', maybe this is a subquery,
             * so look up in the outer query's WITH clause
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::check_table_item(
            const std::string& schema,
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id)
    {
        assert(table_name.length() > 0);
        Stmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.check_is_ref(schema,table_name))
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    return true;
                }
            }
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::check_table_item(uint64_t table_id, uint64_t& out_query_id)
    {
        Stmt* cur = this;
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
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::get_table_item(
            const std::string& schema,
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id,
            TableItem& out_table_item)
    {
        assert(table_name.length() > 0);
        Stmt* cur = this;
        while (cur != nullptr)
        {
            for (const TableItem& tbi : cur->table_items_)
            {
                if (tbi.check_is_ref(schema, table_name))
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    out_table_item = tbi;
                    return true;
                }
            }
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::get_table_item(
            const std::string& schema,
            const std::string& table_name,
            uint64_t& out_query_id,
            uint64_t& out_table_id,
            TableItem*& out_table_item)
    {
        assert(table_name.length() > 0);
        Stmt* cur = this;
        while (cur != nullptr)
        {
            for (TableItem& tbi : cur->table_items_)
            {
                if (tbi.check_is_ref(schema, table_name))
                {
                    out_table_id = tbi.table_id;
                    out_query_id = cur->query_id_;
                    out_table_item = &tbi;
                    return true;
                }
            }
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::get_table_item(
            uint64_t table_id,
            uint64_t& out_query_id,
            TableItem& out_table_item)
    {
        Stmt* cur = this;
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
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::get_table_item(
            uint64_t table_id,
            uint64_t& out_query_id,
            TableItem*& out_table_item)
    {
        Stmt* cur = this;
        while (cur != nullptr)
        {
            for (TableItem& tbi : cur->table_items_)
            {
                if (tbi.table_id == table_id)
                {
                    out_query_id = cur->query_id_;
                    out_table_item = &tbi;
                    return true;
                }
            }
            /*
             * Since correlated subquery is supported, if no match in this query,
             * maybe this is a subquery, so look up in the outer query
             * */
            cur = cur->parent_;
        }
        return false;
    }

    bool Stmt::check_table_column(
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
                Stmt* stmt1 = plan->logicPlan_->get_query(table_item.ref_id_);
                assert(stmt1 != nullptr);
                SelectStmt* stmt = dynamic_cast<SelectStmt*>(stmt1);
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
                Stmt* stmt1 = plan->logicPlan_->get_query(qid);
                assert(stmt1 != nullptr);
                SelectStmt* stmt = dynamic_cast<SelectStmt*>(stmt1);
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

    int Stmt::add_column_item(
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

    int Stmt::add_column_item(
            ResultPlan* plan,
            const std::string& schema,
            const std::string& table_name,
            const std::string& column_name,
            ColumnItem& out_column_item,
            Node* node)
    {
        uint64_t query_id = OB_INVALID_ID;
        uint64_t table_id = OB_INVALID_ID;
        TableItem* tbi;
        bool findtb = get_table_item(schema, table_name, query_id, table_id, tbi);
        assert(findtb);
        if (findtb && query_id != this->query_id_)
        {
            // here means Correlated Sub-Query
        }
        Stmt* stmt = plan->logicPlan_->get_query(query_id);
        ColumnItem cli;
        bool checkColumn = check_table_column(plan, column_name, *tbi, cli.column_id_);

        if (!checkColumn && (tbi->type_ == TableItem::BASE_TABLE || tbi->type_ == TableItem::ALIAS_TABLE))
        {
            cli.column_id_ = plan->local_table_mgr->add_local_table_column(tbi->table_name_, column_name);
        }

        cli.column_name_ = column_name;
        cli.table_id_ = tbi->table_id;
        cli.query_id_ = query_id;
        ColumnItem* t = push_back_(column_items_, cli);
        out_column_item = *t;
        t->bind(node, tbi);
        plan->baseTableColumnVisit_(plan, t);
        return 0;
    }

    TableItem* Stmt::_add_table_item(
            std::vector<TableItem>& tbs,
            ResultPlan* resultPlan,
            const std::string& table_name,
            const std::string& alias_name,
            TableItem::TableType tbtype,
            uint64_t ref_id,
            uint64_t& out_table_id,
            uint64_t cte_at_query_id,
            Node* node)
    {
        out_table_id = OB_INVALID_ID;
        TableItem item;
        switch (tbtype)
        {
            case TableItem::BASE_TABLE:
            {
                assert(node != nullptr);
                item.ref_id_ = resultPlan->local_table_mgr->get_local_table_id(table_name);
                item.table_id = item.ref_id_;
                item.bind_node(node);
            }
                break;
            case TableItem::ALIAS_TABLE:
            {
                /*
                 * FROM NATION AS N1, NATION N2
                 * this means we need generate different table_id, and they link to a same base table
                 * */
                assert(node != nullptr);
                item.ref_id_ = resultPlan->local_table_mgr->get_local_table_id(table_name);
                item.table_id = resultPlan->logicPlan_->generate_table_id();
                item.bind_node(node);
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
        return &tbs.back();
    }

    ColumnItem* Stmt::push_back_(std::vector<ColumnItem>& src, const ColumnItem& it)
    {
        /*
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
        }*/
        src.push_back(it);
        return &src.back();
    }
}