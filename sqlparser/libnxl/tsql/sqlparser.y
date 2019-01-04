%{
/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>
#include <strings.h>

int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}

%}
/*********************************
 ** Section 2: Bison Parser Declarations
 *********************************/


// Specify code that is included in the generated .h and .c files
%code requires {
// %code requires block

#include "node.h"
}

// Auto update column and line number

// Define the names of the created files (defined in Makefile)
%output  "sqlparser_bison.cpp"
%defines "sqlparser_bison.h"

// Tell bison to create a reentrant parser
%define api.pure full

/*
  1. We do not accept any reduce/reduce conflicts, shift/reduce conflicts
*/


%define parse.error verbose
%locations

%initial-action {
	// Initialize
	@$.first_column = 0;
	@$.last_column = 0;
	@$.first_line = 0;
	@$.last_line = 0;
};


// Define additional parameters for yylex (http://www.gnu.org/software/bison/manual/html_node/Pure-Calling.html)
%lex-param   { yyscan_t scanner }

// Define additional parameters for yyparse
%parse-param { ParseResult* result }
%parse-param { yyscan_t scanner }


/*********************************
 ** Define all data-types (http://www.gnu.org/software/bison/manual/html_node/Union-Decl.html)
 *********************************/
%union
{
    struct Node* node;
    int    ival;
}


/*********************************
 ** Destructor symbols
 *********************************/
%destructor { delete($$); }<node>


/*********************************
 ** Token Definition
 *********************************/


%token <node> NAME
%token <node> STRING
%token <node> INTNUM
%token <node> BOOL
%token <node> APPROXNUM
%token <node> NULLX
%token <node> UNKNOWN
%token <node> QUESTIONMARK

%left	CONDITIONLESS_JOIN
%left	CROSS FULL INNER JOIN LEFT NATURAL RIGHT ON USING
%left	UNION EXCEPT
%left	INTERSECT
%left	OR
%left	AND
%right NOT
%left COMP_LE COMP_LT COMP_EQ COMP_GT COMP_GE COMP_NE
%left CNNOP
%left LIKE
%nonassoc BETWEEN
%nonassoc IN
%nonassoc IS NULLX BOOL UNKNOWN
%left '+' '-'
%left '*' '/' '%' MOD
%left '^'
%right UMINUS
%left '(' ')'
%left '.'

%token ADD AND ANY ALL ALTER AS ASC
%token BETWEEN BEGI BIGINT BINARY BOOLEAN BOTH BY
%token CASCADE CASE CHARACTER CLUSTER CNNOP COMMENT COMMIT
       CONSISTENT COLUMN COLUMNS CREATE CREATETIME
       CURRENT_USER CHANGE_OBI SWITCH_CLUSTER
%token DATE DATETIME DEALLOCATE DECIMAL DEFAULT DELETE DESC DESCRIBE
       DISTINCT DOUBLE DROP DUAL
%token ELSE END END_P ERROR EXCEPT EXECUTE EXISTS EXPLAIN
%token FLOAT FOR FROM FROZEN FORCE
%token GLOBAL GLOBAL_ALIAS GRANT GROUP
%token HAVING HINT_BEGIN HINT_END HOTSPOT
%token IDENTIFIED IF IN INTEGER INTERSECT INSERT INTO IS
%token KEY
%token LEADING LIMIT LIKE LOCAL LOCKED
%token MEDIUMINT MEMORY MOD MODIFYTIME MASTER
%token NOT NUMERIC
%token OFFSET OR ORDER OPTION OUTER
%token PARAMETERS PERCENT PASSWORD PRECISION PREPARE PRIMARY
%token READ_STATIC REAL RENAME REPLACE RESTRICT PRIVILEGES REVOKE
       ROLLBACK KILL READ_CONSISTENCY
%token SCHEMA SCOPE SELECT SESSION SESSION_ALIAS
       SET SHOW SMALLINT SNAPSHOT SPFILE START STATIC SYSTEM STRONG SET_MASTER_CLUSTER SET_SLAVE_CLUSTER SLAVE
%token TABLE TABLES THEN TIES TIME TIMESTAMP TINYINT TRAILING TRANSACTION TO TOP
%token UNION UPDATE USER
%token VALUES VARCHAR VARBINARY
%token WHERE WHEN WITH WORK PROCESSLIST QUERY CONNECTION WEAK

%token AVG BROWSE CHECKSUM_AGG COUNT COUNT_BIG GROUPING GROUPING_ID HASH MAX MIN
%token NOLOCK NOWAIT SOME STDEV STDEVP SUM TABLESAMPLE VAR VARP

%type <node> sql_stmt stmt_list stmt select_statement
%type <node> query_expression opt_set_op_list set_op_list set_op
%type <node> set_op_operator query_specification_or_expression
%type <node> query_specification select_list select_item table_or_view_or_alias_name
%type <node> table_name view_name
%type <node> opt_column_alias column_alias opt_into_clause opt_from_clause from_clause
%type <node> table_source_list table_source derived_table subquery_parens subquery
%type <node> scalar_subquery_parens scalar_subquery joined_table joined_table_parens
%type <node> opt_where_clause where_clause search_condition search_condition_without_match
%type <node> search_condition_without_match_item_list and_or
%type <node> search_condition_without_match_item predicate all_some_any expression_list_parens
%type <node> expression_list expression_parens expression constant scalar_function unary_operator
%type <node> binary_operator aggregate_windowed_function aggregate_windowed_function_name1
%type <node> aggregate_windowed_function_name2 comp_op opt_table_alias opt_column_alias_list
%type <node> column_alias_list_parens column_alias_list opt_tablesample_clause opt_table_hint_list
%type <node> opt_top_clause top_clause opt_with_ties top_count top_percent opt_all_distinct
%type <node> opt_with_clause with_clause common_table_expression_list common_table_expression
%type <node> expression_name cte_query_definition_parens cte_query_definition opt_column_name_list_parens
%type <node> column_name_list_parens column_name_list column_name opt_order_by_clause order_by_clause
%type <node> order_by_expression_asc_list order_by_expression_asc opt_for_clause for_clause opt_option_clause
%type <node> option_clause query_hint_list query_hint table_hint table_alias table_or_view_name
%type <node> string_expression scalar_function_name sample_number order_by_expression
%type <node> join_type new_table column

%start sql_stmt
%%
/*********************************
 ** Section 3: Grammar Definition
 *********************************/

// Defines our general input.
sql_stmt:
    stmt_list END_P
{
    $$ = $1;
    result->result_tree_ = $1;
    result->accept = true;
    YYACCEPT;
}
;

stmt_list:  stmt
    |   stmt ';' stmt_list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, 2, $1, $3);
    $$->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
;

stmt:
    select_statement
    | /*EMPTY*/   { $$ = nullptr; }
;

select_statement:
  opt_with_clause query_expression opt_order_by_clause opt_for_clause opt_option_clause
{
  $$ = $2;
  $$->setChild(E_SELECT_OPT_WITH, $1);
  $$->setChild(E_SELECT_ORDER_BY, $3);
  $$->setChild(E_SELECT_FOR_UPDATE, $4);
  $$->setChild(E_SELECT_OPT_OPTION, $5)
}
;

query_expression:
  query_specification_or_expression opt_set_op_list
{
  $$ = nullptr;
  $1;
  $2;
}
;

opt_set_op_list:
    /*EMPTY*/	{ $$ = nullptr; }
  | set_op_list
{
  $$ = $1;
}
;

set_op_list:
    set_op
{
  $$ = nullptr;
}
  | set_op set_op_list
{
  $$ = nullptr;
  $1;
  $2;
}
;

set_op:
  set_op_operator query_specification_or_expression
{
  $$ = nullptr;
  $1;
  $2;
}
;

set_op_operator:
    UNION
  | UNION ALL
  | EXCEPT
  | INTERSECT
{
  $$ = 0;
}
;

query_specification_or_expression:
    query_specification
{
  $$ = nullptr;
  $1;
}
  | '(' query_expression ')'
;

query_specification:
  SELECT opt_all_distinct opt_top_clause select_list opt_into_clause opt_from_clause opt_where_clause
{
  $$ = nullptr;
  $2;
  $3;
  $4;
  $5;
  $6;
  $7;
}
;

select_list:
    select_item
  | select_item ',' select_list
{
  $$ = nullptr;
  $1;
  $3;
}
;

select_item:
    '*'
{
  $$ = nullptr;
}
  | table_or_view_or_alias_name '.' '*'
{
  $$ = nullptr;
  $1;
}
  | table_or_view_or_alias_name '.' column_name opt_column_alias
{
  $$ = nullptr;
  $1;
  $3;
}
  | expression opt_column_alias
{
  $$ = nullptr;
  $1;
  $2;
}
  | column_alias '=' expression
{
  $$ = nullptr;
  $1;
  $3;
}
;

table_or_view_or_alias_name:
    table_name
  | view_name
;

table_name:
    NAME
  | NAME '.' NAME
{
  $$ = nullptr;
  $1;
  $3;
}
  | NAME '.' '.' NAME
{
  $$ = nullptr;
  $1;
  $4;
}
  | NAME '.' NAME '.' NAME
{
  $$ = nullptr;
  $1;
  $3;
  $5;
}
;

view_name:
  NAME
;

opt_column_alias:
    /*EMPTY*/ { $$ = nullptr; }
  | column_alias
;

column_alias:
    NAME
  | STRING


opt_into_clause:
    /*EMPTY*/ { $$ = nullptr; }
  | INTO new_table
;

opt_from_clause:
    /*EMPTY*/ { $$ = nullptr; }
  | from_clause
;

from_clause:
  FROM table_source_list
{
  $$ = nullptr;
  $2;
}
;

table_source_list:
    table_source
  | table_source ',' table_source_list
{
  $$ = nullptr;
  $1;
  $3;
}
;

table_source:
    table_or_view_name opt_table_alias opt_tablesample_clause opt_table_hint_list
{
  $$ = nullptr;
  $1;
  $2;
  $3;
  $4;
}
  | user_defined_function opt_table_alias
{
  $$ = nullptr;
}
  | derived_table opt_table_alias opt_column_alias_list
{
  $$ = nullptr;
}
  | joined_table
{
  $$ = nullptr;
}
;

table_or_view_name:
  NAME
;

derived_table:
  subquery_parens
;

subquery_parens:
  '(' subquery ')'
{
  $$ = nullptr;
}
;

subquery:
  query_expression
;

scalar_subquery_parens:
  '(' scalar_subquery ')'
{
  $$ = nullptr;
}
;

scalar_subquery:
  query_expression
;


joined_table:
    table_source join_type table_source ON search_condition
{
  $$ = nullptr;
}
  | table_source CROSS JOIN table_source
{
  $$ = nullptr;
}
  | joined_table_parens
{
  $$ = nullptr;
}
;

join_type:
  LEFT JOIN
;

new_table:
  NAME
;

joined_table_parens:
  '(' joined_table ')'
{
  $$ = nullptr;
}
;

opt_where_clause:
    /*EMPTY*/  { $$ = nullptr; }
  | where_clause
;

where_clause:
  WHERE search_condition
{
  $$ = nullptr;
}
;

search_condition:
    search_condition_without_match
  | search_condition AND search_condition
{
  $$ = nullptr;
}
;

search_condition_without_match:
    search_condition_without_match_item
  | search_condition_without_match_item search_condition_without_match_item_list
{
  $$ = nullptr;
}
;

search_condition_without_match_item_list:
    and_or search_condition_without_match_item
  | and_or search_condition_without_match_item and_or search_condition_without_match_item_list
{
  $$ = nullptr;
}
;

and_or:
    AND
  | OR
{
  $$ = 0;
}
;

search_condition_without_match_item:
    NOT predicate
{
  $$ = nullptr;
}
  | NOT search_condition_without_match
{
  $$ = nullptr;
}
  | predicate
  | search_condition_without_match
;

string_expression:
    STRING
  | expression
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
{
  $$ = nullptr;
}
;

all_some_any:
    ALL
  | SOME
  | ANY
{
  $$ = 0;
}
;

expression_list_parens:
  '(' expression_list ')'
{
  $$ = nullptr;
}
;

expression_list:
    expression
  | expression ',' expression_list
;

expression_parens:
  '(' expression ')'
{
  $$ = nullptr;
}
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

column:
  NAME
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

scalar_function_name:
  RIGHT
;

unary_operator:
    '+'
  | '-'
{
  $$ = 0;
}
;

binary_operator:
    '*'
{
  $$ = 0;
}
  | '/'
{
  $$ = 0;
}
  | '%'
{
  $$ = 0;
}
  | '+'
{
  $$ = 0;
}
  | '-'
{
  $$ = 0;
}
  | '&'
{
  $$ = 0;
}
  | '^'
{
  $$ = 0;
}
  | '|'
{
  $$ = 0;
}
  | CNNOP
{
  $$ = 0;
}
;

user_defined_function:
    NAME '(' '*' ')'
  | NAME '(' expression_list ')'
;

aggregate_windowed_function:
    aggregate_windowed_function_name1 '(' opt_all_distinct expression ')'
  | aggregate_windowed_function_name2 '(' '*' ')'
  | aggregate_windowed_function_name2 '(' opt_all_distinct expression ')'
  | GROUPING '(' expression ')'
{
  $$ = nullptr;
}
  | GROUPING_ID '(' expression_list ')'
{
  $$ = nullptr;
}
;

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
{
  $$ = 0;
}
;

aggregate_windowed_function_name2:
    COUNT
{
  $$ = 0;
}
  | COUNT_BIG
{
  $$ = 0;
}
;


comp_op:
    COMP_EQ
{
  $$ = 0;
}
  | COMP_NE
{
  $$ = 0;
}
  | COMP_GT
{
  $$ = 0;
}
  | COMP_GE
{
  $$ = 0;
}
  | COMP_LE
{
  $$ = 0;
}
  | COMP_LT
{
  $$ = 0;
}
;

opt_table_alias:
    /*EMPTY*/	{ $$ = nullptr; }
  | AS table_alias
{
  $$ = nullptr;
}
  | table_alias
;

table_alias:
  NAME
;

opt_column_alias_list:
    /*EMPTY*/	{ $$ = nullptr; }
  | column_alias_list_parens
;

column_alias_list_parens:
  '(' column_alias_list ')'
{
  $$ = nullptr;
}
;

column_alias_list:
    column_alias
  | column_alias ',' column_alias_list
;

opt_tablesample_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | TABLESAMPLE SYSTEM '(' sample_number PERCENT ')'
{
  $$ = nullptr;
}
;

sample_number:
  INTNUM
;

opt_table_hint_list:
    /*EMPTY*/	{ $$ = nullptr; }
  | WITH table_hint_list
{
  $$ = nullptr;
}
;

table_hint_list:
    table_hint
  | table_hint ',' table_hint_list
;

opt_top_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | top_clause
;

top_clause:
      TOP top_count opt_with_ties
{
  $$ = nullptr;
}
    | TOP top_percent PERCENT opt_with_ties
{
  $$ = nullptr;
}
;

opt_with_ties:
    /*EMPTY*/  { $$ = 0; }
  | WITH TIES
{ $$ = 0; }
;

top_count:
    INTNUM
  | '(' expression ')'
{ $$ = nullptr; }
;

top_percent:
    APPROXNUM
  | INTNUM
  | '(' expression ')'
{ $$ = nullptr; }
;

opt_all_distinct:
    /*EMPTY*/	{ $$ = 0; }
  | ALL
{
  $$ = 0;
}
  | DISTINCT
{
  $$ = 0;
}

;

opt_with_clause:
    /*EMPTY*/  { $$ = 0; }
  | with_clause
;

with_clause:
  WITH common_table_expression_list
{
  $$ = nullptr;
}
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
{
  $$ = nullptr;
}
;

cte_query_definition:
  select_statement
;

opt_column_name_list_parens:
    /*EMPTY*/	{ $$ = nullptr; }
  | column_name_list_parens
;

column_name_list_parens:
  '(' column_name_list ')'
{
  $$ = nullptr;
}
;

column_name_list:
    column_name
  | column_name ',' column_name_list
;

column_name:
  NAME
;

opt_order_by_clause:
    /*EMPTY*/  { $$ = nullptr; }
  | order_by_clause
;

order_by_clause:
  ORDER BY order_by_expression_asc_list
{
  $$ = nullptr;
}
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

order_by_expression:
  expression
;

opt_for_clause:
    /*EMPTY*/  { $$ = nullptr; }
  | for_clause
;

for_clause:
  FOR BROWSE
{
  $$ = nullptr;
}
;

opt_option_clause:
    /*EMPTY*/  { $$ = nullptr; }
  | option_clause
;

option_clause:
  OPTION query_hint_list
{
  $$ = nullptr;
}
;

query_hint_list:
    query_hint
{
  $$ = nullptr;
}
  | query_hint ',' query_hint_list
{
  $$ = nullptr;
}
;

query_hint:
    HASH GROUP
{
  $$ = 0;
}
  | ORDER GROUP
{
  $$ = 0;
}
  | FORCE ORDER
{
  $$ = 0;
}
;

table_hint:
    NOLOCK
{
  $$ = 0;
}
  | NOWAIT
{
  $$ = 0;
}
;



%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
