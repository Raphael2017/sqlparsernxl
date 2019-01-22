#ifndef SELECT_ITEM_H
#define SELECT_ITEM_H

#include "Interface.h"

namespace resolve
{
    struct LogicPlan;
    struct SelectItem
    {
    public:
        enum SelectItemType
        {
            E_SEL_ITEM_EXPR_ALIAS,
            E_SEL_ITEM_EXPR,
            E_SEL_ITEM_EXPAND_STAR,
        };
        virtual ~SelectItem() {}
        SelectItemType get_sel_item_type() const { return select_item_type_; }
        void set_sel_item_type(SelectItemType sel_type) { select_item_type_ = sel_type; }
        uint64_t get_column_id() const { return column_id_; }
        void set_column_id(uint64_t column_id) { column_id_ = column_id; }

        virtual std::string get_column_name() const  = 0;
        virtual SelectItem* clone() const = 0;
        virtual void set_alias(const std::string& alias) { alias_ = alias; }

    protected:
        SelectItemType select_item_type_;
        uint64_t column_id_;    // column identifier
        std::string alias_;
    };

    struct SelItemExprAlias : public SelectItem
    {
    public:
        SelItemExprAlias() { select_item_type_ = E_SEL_ITEM_EXPR_ALIAS; }
        virtual std::string get_column_name() const
        {
            return alias_;
        }
        virtual SelectItem* clone() const
        {
            SelectItem* ret = new SelItemExprAlias(*this);
            return ret;
        }
    private:
        uint64_t sql_raw_expr_id_;
        friend struct SelectStmt;
        friend struct SqlRawExpr;
    };

    struct SelItemExpr : public SelectItem
    {
    public:
        SelItemExpr() { select_item_type_ = E_SEL_ITEM_EXPR; }
        virtual std::string get_column_name() const
        {
            if (alias_.length() > 0)
                return alias_;
            else
                return name_;
        }
        virtual SelectItem* clone() const
        {
            SelectItem* ret = new SelItemExpr(*this);
            return ret;
        }
    private:
        uint64_t sql_raw_expr_id_;
        std::string name_;
        friend struct SelectStmt;
        friend struct SqlRawExpr;
    };

    struct SelItemExpandStar : public SelectItem
    {
    public:
        SelItemExpandStar() { select_item_type_ = E_SEL_ITEM_EXPAND_STAR; }
        virtual std::string get_column_name() const
        {
            if (alias_.length() > 0)
                return alias_;
            else
                return col_name_;
        }
        virtual SelectItem* clone() const
        {
            SelectItem* ret = new SelItemExpandStar(*this);
            return ret;
        }
    private:
        std::string col_name_;
        uint64_t query_id_;
        uint64_t ref_table_id_;
        uint64_t ref_column_id_;
        friend struct BaseTableRef;
        friend struct GeneratedTableRef;
        friend struct CteTableRef;
        friend struct SqlRawExpr;
    };
}

#endif