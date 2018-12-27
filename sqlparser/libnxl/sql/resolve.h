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


    int resolve_select_statement(ResultPlan*, Node*, uint64_t& query_id, SelectStmt*);

    int resolve_cte_clause(ResultPlan*, Node*, SelectStmt*);
    int resolve_cte(ResultPlan*, Node*, SelectStmt*, uint64_t&);
    int resolve_from_clause(ResultPlan*, Node*, SelectStmt*);
    int resolve_table(ResultPlan*, Node*, SelectStmt*, uint64_t&);
    int resolve_joined_table(ResultPlan*, Node*, SelectStmt*);

    int resolve_where_clause(ResultPlan*, Node*, SelectStmt*);  // not use
    int resolve_select_clause(ResultPlan*, Node*, SelectStmt*); // not use
    int resolve_select_items(ResultPlan*, Node*, SelectStmt*);  // not use
    int resolve_expr(ResultPlan *plan, Node *node, SelectStmt* parent);  // not use
}

#endif