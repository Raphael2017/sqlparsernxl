select_statement:
  opt_with_clause query_expression opt_order_by_clause opt_for_clause opt_option_clause
;

query_expression:
  query_specification_or_expression opt_set_op_list

opt_set_op_list:
    /*EMPTY*/
  | set_op_list
;

set_op_list:
    set_op
  | set_op set_op_list
;

set_op:
  set_op_operator query_specification_or_expression

set_op_operator:
    UNION
  | UNION ALL
  | EXCEPT
  | INTERSECT
;

query_specification_or_expression:
    query_specification
  | query_expression

query_specification:
  SELECT opt_all_distinct opt_top_clause select_list opt_into_clause opt_from_clause opt_where_clause opt_group_by_clause opt_having_clause
;

select_list:
    select_item
  | select_item ',' select_list
;

select_item:
    '*'
  | table_or_view_or_alias_name '.' '*'
  | table_or_view_or_alias_name '.' column_name opt_column_alias
  | expression opt_column_alias
  | column_alias '=' expression
;

table_or_view_or_alias_name:
    table_name
  | view_name
;

table_name:
    NAME
  | NAME '.' NAME
  | NAME '.' '.' NAME
  | NAME '.' NAME '.' NAME
;

view_name:
  NAME
;

opt_column_alias:
    /*EMPTY*/
  | column_alias
;

column_alias:
    NAME
  | STRING


opt_into_clause:
    /*EMPTY*/
  | INTO new_table
;

opt_from_clause:
    /*EMPTY*/
  | from_clause
;

from_clause:
  FROM table_source_list
;

table_source_list:
    table_source
  | table_source ',' table_source_list
;

table_source:
    table_or_view_name opt_table_alias opt_tablesample_clause opt_table_hint_list
  | rowset_function opt_table_alias opt_column_alias_list
  | user_defined_function opt_table_alias
  | derived_table opt_table_alias opt_column_alias_list
  | joined_table
;

derived_table:
  subquery_parens
;

subquery_parens:
  '(' subquery ')'
;

subquery:
  query_expression
;

scalar_subquery_parens:
  '(' scalar_subquery ')'
;

scalar_subquery:
  query_expression
;


joined_table:
    table_source join_type table_source ON search_condition
  | table_source CROSS JOIN table_source
  | joined_table_parens
;

joined_table_parens:
  '(' joined_table ')'
;

opt_where_clause:
    /*EMPTY*/
  | where_clause
;

where_clause:
  WHERE search_condition
;

search_condition:
    search_condition_without_match
  | search_condition AND search_condition
;

search_condition_without_match:
    search_condition_without_match_item
  | search_condition_without_match_item search_condition_without_match_item_list
;

search_condition_without_match_item_list:
    and_or search_condition_without_match_item
  | and_or search_condition_without_match_item and_or search_condition_without_match_item_list
;

and_or:
    AND
  | OR
;

search_condition_without_match_item:
    NOT predicate
  | NOT search_condition_without_match
  | predicate
  | search_condition_without_match
;

predicate:
    expression comp_op expression
  | string_expression NOT LIKE string_expression
  | string_expression LIKE string_expression
  | expression NOT BETWEEN expression AND expression
  | expression BETWEEN expression AND expression
  | expression IS NOT NULLX
  | expression IS NULLX
  | expression NOT IN subquery_parens
  | expression IN subquery_parens
  | expression NOT IN expression_list_parens
  | expression IN expression_list_parens
  | expression comp_op all_some_any subquery_parens
  | EXISTS subquery_parens

all_some_any:
    ALL
  | SOME
  | ANY
;

expression_list_parens:
  '(' expression_list ')'
;

expression_list:
    expression
  | expression ',' expression_list
;

expression_parens:
  '(' expression ')'
;

expression:
    constant
  | scalar_function
  | column
  | table_name '.' column
  | expression_parens
  | scalar_subquery_parens
  | unary_operator expression
  | expression binary_operator expression
  | aggregate_windowed_function
;

constant:
    STRING
  | INTNUM
  | APPROXNUM
  | BOOL
  | NULLX
  | QUESTIONMARK
;

scalar_function:
    scalar_function_name '(' ')'
  | scalar_function_name '(' expression_list ')'
;

unary_operator:
    '+'
  | '-'
;

binary_operator
    '*'
  | '/'
  | '%'
  | '+'
  | '-'
  | '&'
  | '^'
  | '|'
  | '||'
;

aggregate_windowed_function:
    aggregate_windowed_function_name1 '(' opt_all_distinct expression ')'
  | aggregate_windowed_function_name2 '(' '*' ')'
  | aggregate_windowed_function_name2 '(' opt_all_distinct expression ')'
  | GROUPING '(' expression ')'
  | GROUPING_ID '(' expression_list ')'



aggregate_windowed_function_name1:
    AVG
  | MAX
  | MIN
  | SUM
  | STDEV
  | STDEVP
  | VAR
  | VARP
  | CHECKSUM_AGG
;

aggregate_windowed_function_name2:
    COUNT
  | COUNT_BIG
;


comp_op:
    COMP_EQ
  | COMP_NE
  | COMP_GT
  | COMP_GE
  | COMP_LE
  | COMP_LT
;

opt_table_alias:
    /*EMPTY*/
  | AS table_alias
  | table_alias
;

opt_column_alias_list:
    /*EMPTY*/
  | column_alias_list_parens
;

column_alias_list_parens:
  '(' column_alias_list ')'
;

column_alias_list:
    column_alias
  | column_alias ',' column_alias_list
;

opt_tablesample_clause:
    /*EMPTY*/
  | TABLESAMPLE SYSTEM '(' sample_number PERCENT ')'
;

opt_table_hint_list:
    /*EMPTY*/
  | WITH table_hint_list
;

table_hint_list:
    table_hint
  | table_hint ',' table_hint_list
;

opt_top_clause:
    /*EMPTY*/
  | top_clause
;

top_clause:
      TOP top_count opt_with_ties
    | TOP top_percent PERCENT opt_with_ties
;

opt_with_ties:
    /*EMPTY*/
  | WITH TIES
;

top_count:
    INTNUM
  | '(' expression ')'
;

top_percent:
    APPROXNUM
  | INTNUM
  | '(' expression ')'
;

opt_all_distinct:
    /*EMPTY*/
  | ALL
  | DISTINCT
;

opt_with_clause:
    /*EMPTY*/
  | with_clause
;

with_clause:
  WITH common_table_expression_list
;

common_table_expression_list:
    common_table_expression
  | common_table_expression ',' common_table_expression_list
;

common_table_expression:
  expression_name opt_column_name_list_parens AS cte_query_definition_parens
;

expression_name:
  NAME
;

cte_query_definition_parens:
  '(' cte_query_definition ')'
;

cte_query_definition:
  select_statement
;

opt_column_name_list_parens
    /*EMPTY*/
  | column_name_list_parens
;

column_name_list_parens:
  '(' column_name_list ')'
;

column_name_list:
    column_name
  | column_name ',' column_name_list
;

column_name:
  NAME
;

opt_order_by_clause:
    /*EMPTY*/
  | order_by_clause
;

order_by_clause:
  ORDER BY order_by_expression_asc_list
;

order_by_expression_asc_list:
    order_by_expression_asc
  | order_by_expression_asc ',' order_by_expression_asc_list
;

order_by_expression_asc:
    order_by_expression
  | order_by_expression ASC
  | order_by_expression DESC
;

opt_for_clause:
    /*EMPTY*/
  | for_clause
;

for_clause:
  FOR BROWSE
;

opt_option_clause:
    /*EMPTY*/
  | option_clause
;

option_clause:
  OPTION query_hint_list
;

query_hint_list:
    query_hint
  | query_hint ',' query_hint_list
;













