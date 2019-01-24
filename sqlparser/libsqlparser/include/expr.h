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
        uint64_t table_id_;
        uint64_t column_id_;
    };

    struct RawExpr
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

    struct RawExprConst
            : public RawExpr
    {
    public:
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref) {}
    private:
        union {
            int i;
            double num;
            const char* text;
        } value_;
    };

    struct RawExprScalarSubquery
            : public RawExpr
    {
    public:
        uint64_t get_ref_id() const { return query_id_; }
        void set_ref_id(uint64_t id) { query_id_ = id; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        uint64_t query_id_;
    };

    struct RawExprBinaryRef
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
        uint64_t first_id_;     // table_id
        uint64_t second_id_;    // column_id
    };

    struct RawExprUnaryOp
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

    struct RawExprBinaryOp
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

    struct RawExprTripleOp
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

    struct RawExprMultiOp
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

    struct RawExprCaseOp
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
    struct RawExprAggFun
            : public RawExpr
    {
    public:
        RawExpr* get_param_expr() { return param_expr_; };
        void set_param_expr(RawExpr* param_expr) { param_expr_ = param_expr; }
        bool get_distinct() { return distinct_; }
        void set_distinct(bool distinct) { distinct_ = distinct; }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        RawExpr* param_expr_;   // null means '*'
        bool distinct_;
    };

    struct RawExprSysFun
            : public RawExpr
    {
    public:
        std::string get_func_name() { return func_name_; }
        void set_func_name(const std::string& func_name) { func_name_ = func_name; }
        void add_param_expr(RawExpr* param_expr) { param_exprs_.push_back(param_expr); }
        RawExpr* get_param_expr(size_t index)
        {
            return 0 <= index && index < param_exprs_.size() ? param_exprs_[index] : nullptr;
        }
        virtual void scanf_table_column_ref(
                LogicPlan* logic,
                std::vector<TableColumnRef>& out_table_column_ref);
    private:
        std::string func_name_;
        std::vector<RawExpr*> param_exprs_;
    };

    /////
    struct SqlRawExpr
    {
    public:
        uint64_t get_expr_id() const { return expr_id_; }
        void set_expr_id(uint64_t expr_id) { expr_id_ = expr_id; }
        uint64_t get_query_id() const { return query_id_; }
        void set_query_id(uint64_t query_id) { query_id_ = query_id; }
        RawExpr* get_expr() { return expr_; }
        void set_expr(RawExpr* raw_expr) { expr_ = raw_expr; }
        void debug(ResultPlan* plan, int lvl = 0);
        bool check_base_field_ref(ResultPlan* plan);
    private:
        static void debug1(ResultPlan* plan, uint64_t query_id, uint64_t table_id, uint64_t column_id, int lvl);
        static bool check_base_field_ref1(ResultPlan* plan, uint64_t query_id, uint64_t table_id, uint64_t column_id);
    public:
        std::string expr_content;   // for debug info
    private:
        uint64_t query_id_;
        uint64_t expr_id_;
        uint64_t table_id_;
        uint64_t column_id_;
        RawExpr* expr_;

    };
}

#endif