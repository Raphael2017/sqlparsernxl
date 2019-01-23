#ifndef RESOLVE_H
#define RESOLVE_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <assert.h>
#include <functional>

#define COMPLETE_ANALYSIS1

struct Node;

namespace resolve
{
    enum ScopeType
    {
        E_SCOPE_WHATEVER,
        E_SCOPE_FROM,
        E_SCOPE_EXPR,

        E_SCOPE_END
    };

    struct Stmt;
    struct SelectStmt;
    struct SqlRawExpr;
    struct RawExpr;
    struct LogicPlan;
    struct ResultPlan;

    int resolve(ResultPlan* plan, Node* node);

    int resolve_multi_statements(ResultPlan* plan, Node* node);

    int resolve_update_statement(
            ResultPlan* plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent = nullptr,
            ScopeType scope = E_SCOPE_WHATEVER);

    int resolve_select_statement(
            ResultPlan *plan,
            Node* node,
            uint64_t& query_id,
            Stmt* parent = nullptr,
            ScopeType scope = E_SCOPE_WHATEVER);

    int resolve_cte_clause(
            ResultPlan* plan,
            Node* node,
            Stmt* parent
            );

    int resolve_cte(
            ResultPlan* plan,
            Node* node,
            Stmt* parent,
            uint64_t& out_table_id
            );

    int resolve_from_clause(
            ResultPlan* plan,
            Node* node,
            Stmt* parent
            );

    int resolve_table(
            ResultPlan* plan,
            Node* node,
            Stmt* parent,
            uint64_t& out_table_id
            );

    int resolve_joined_table(
            ResultPlan* plan,
            Node* node,
            Stmt* parent
            );

    int resolve_where_clause(
            ResultPlan* plan,
            Node* node,
            Node* select,
            Stmt* parent
            );  // not use

    int resolve_select_items(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            ScopeType scope
            );  // not use

    int resolve_independ_expr(
            ResultPlan *plan,
            Node *node,
            uint64_t& sql_raw_expr_id,
            Stmt* parent
            );  // not use

    int resolve_expr(
            ResultPlan* plan,
            Node* node,
            SqlRawExpr* sql_raw_expr,
            Stmt* parent,
            RawExpr*& out_raw_expr
            );
}

#endif