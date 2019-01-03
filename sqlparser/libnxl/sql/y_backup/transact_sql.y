select_statement:
  opt_with_clause
  query_expression
  opt_order_by_clause
  opt_for_clause
  opt_option_clause
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

query_specification_or_expression:
  query_specification
  | query_expression

query_specification:
  SELECT opt_all_distinct
  opt_top_clause
  select_list
  opt_into_clause
  opt_from_clause
  opt_where_clause
  opt_group_by_clause
  opt_having_clause
;

select_list:
  select_item
  | select_item ',' select_list
;

select_item:
  '*'
  | table_view_alias_name '.' '*'
  | table_view_alias_name '.' column_name opt_column_alias
  | expression opt_column_alias
  | column_alias '=' expression
;

table_view_alias_name:
  table_name
  | view_name
  | table_alias
;

opt_column_alias:
  /*EMPTY*/
  | column_alias
;

opt_into_clause:
  /*EMPTY*/
  | INTO new_table
;

opt_from_clause:
  /*EMPTY*/
  | from_clause
;







opt_top_clause:
  /*EMPTY*/
  | top_clause
;

top_clause:
    | TOP top_count opt_with_ties
    | TOP top_percent PERCENT opt_with_ties
;

opt_with_ties:
  /*EMPTY*/
  | WITH TIES
;

top_count:  INTNUM
    | '(' expr ')'
;

top_percent:    APPROXNUM
    | INTNUM
    | '(' expr ')'
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
  expression_name opt_column_name_list_parens AS CTE_query_definition_parens
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













