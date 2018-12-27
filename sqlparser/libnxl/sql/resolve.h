#ifndef RESOLVE_H
#define RESOLVE_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <assert.h>
#include <functional>

#define OB_INVALID_ID  0
#define OB_APP_MIN_COLUMN_ID  500

struct Node;

namespace resolve
{
    struct SelectStmt;
    struct SqlRawExpr;
    struct LogicPlan;
    struct ResultPlan;


    int resolve_select_statement(
            ResultPlan *plan,
            Node* node,
            uint64_t& query_id,
            SelectStmt* parent = nullptr);

    int resolve_cte_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            );

    int resolve_cte(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            uint64_t& out_table_id
            );

    int resolve_from_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            );

    int resolve_table(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent,
            uint64_t& out_table_id
            );

    int resolve_joined_table(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            );

    int resolve_where_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            );  // not use

    int resolve_select_clause(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            ); // not use

    int resolve_select_items(
            ResultPlan* plan,
            Node* node,
            SelectStmt* parent
            );  // not use

    int resolve_expr(
            ResultPlan *plan,
            Node *node,
            SelectStmt* parent
            );  // not use
}

#endif