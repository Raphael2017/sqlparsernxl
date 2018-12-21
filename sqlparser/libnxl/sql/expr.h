#ifndef EXPR_H
#define EXPR_H
#include "resolve.h"
#include "keydef.h"
#include <vector>
#include <string>

namespace resolve
{
    struct TableColumnRef
    {
        uint64_t table_id_ = OB_INVALID_ID;
        uint64_t column_id_ = OB_INVALID_ID;
    };
    class RawExpr
    {
    public:
        RawExpr() : type_(E_NODETYPE_BEGIN) {}
        virtual ~RawExpr() {}
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref) {}
        NodeType get_expr_type() const { return type_; }
        void set_expr_type(NodeType type) { type_ = type; }
    private:
        NodeType type_;
    };

    class RawExprConst
            : public RawExpr
    {
    private:
        union {
            int i;
            double num;
            const char* text;
        } value_;
    };

    class RawExprUnaryRef
            : public RawExpr
    {
    public:
        uint64_t get_ref_id() const { return id_; }
        void set_ref_id(uint64_t id) { id_ = id; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        uint64_t id_;
    };

    class RawExprBinaryRef
            : public RawExpr
    {
    public:
        uint64_t get_first_ref_id() const { return first_id_; }
        void set_first_ref_id(uint64_t id) { first_id_ = id; }
        uint64_t get_second_ref_id() const { return second_id_; }
        void set_second_ref_id(uint64_t id) { second_id_ = id; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        uint64_t first_id_;
        uint64_t second_id_;
    };

    class RawExprUnaryOp
            : public RawExpr
    {
    public:
        RawExpr* get_op_expr() { return expr_; }
        void set_op_expr(RawExpr* expr) { expr_ = expr; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        RawExpr* expr_;
    };

    class RawExprBinaryOp
            : public RawExpr
    {
    public:
        RawExpr* get_first_op_expr() { return first_expr_; }
        void set_first_op_expr(RawExpr* expr) { first_expr_ = expr; }
        RawExpr* get_second_op_expr() { return second_expr_; }
        void set_second_op_expr(RawExpr* expr) { second_expr_ = expr; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        RawExpr* first_expr_;
        RawExpr* second_expr_;
    };

    class RawExprTripleOp
            : public RawExpr
    {
        RawExpr* get_first_op_expr() { return first_expr_; }
        void set_first_op_expr(RawExpr* expr) { first_expr_ = expr; }
        RawExpr* get_second_op_expr() { return second_expr_; }
        void set_second_op_expr(RawExpr* expr) { second_expr_ = expr; }
        RawExpr* get_third_op_expr() { return third_expr_; }
        void set_third_op_expr(RawExpr* expr) { third_expr_ = expr; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        RawExpr* first_expr_;
        RawExpr* second_expr_;
        RawExpr* third_expr_;
    };

    class RawExprMultiOp
            : public RawExpr
    {
    public:
        RawExpr* get_op_expr(size_t index)
        {
            return 0 <= index && index < exprs_.size() ?  exprs_[index] : nullptr;
        }
        void add_op_expr(RawExpr* expr) { exprs_.push_back(expr); }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        std::vector<RawExpr*> exprs_;
    };

    class RawExprCaseOp
            : public RawExpr
    {
    public:
        RawExpr* get_arg_op_expr() { return arg_expr; }
        void set_arg_op_expr(RawExpr* expr) { arg_expr = expr; }
        RawExpr* get_default_expr() { return default_expr_; }
        void set_default_expr(RawExpr* expr) { default_expr_ = expr; }
        RawExpr* get_when_op_expr(size_t index)
        {
            return 0 <= index && index < when_exprs_.size() ? when_exprs_[index] : nullptr;
        }
        void add_when_op_expr(RawExpr* expr) { when_exprs_.push_back(expr); }
        RawExpr* get_then_op_expr(size_t index)
        {
            return 0 <= index && index < then_exprs_.size() ? then_exprs_[index] : nullptr;
        }
        void add_then_op_expr(RawExpr* expr) { then_exprs_.push_back(expr); }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        RawExpr* arg_expr;
        std::vector<RawExpr*> when_exprs_;
        std::vector<RawExpr*> then_exprs_;
        RawExpr* default_expr_;
    };

    /*
     * https://en.wikipedia.org/wiki/Aggregate_function
     * */
    class RawExprAggFun
            : public RawExpr
    {

    private:
        RawExpr* param_expr_;   // null means '*'
        bool distinct_;
    };

    class RawExprSysFun
            : public RawExpr
    {
    private:
        std::string func_name_;
        std::vector<RawExpr*> exprs_;
    };

    /////
    class SqlRawExpr
    {
    public:
        uint64_t get_expr_id() const { return expr_id_; }
        RawExpr* get_expr() { return expr_; }
    private:
        uint64_t expr_id_;
        uint64_t table_id_;
        uint64_t column_id_;
        RawExpr* expr_;
    };
}

#endif