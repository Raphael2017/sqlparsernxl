%{
/**
 * This grammar file is designed for ISO/IEC 9075-2:2003 - Database Language SQL (SQL-2003) SQL/Foundation
 * Most grammar rules refer to https://github.com/Raphael2017/SQL/blob/master/sql-2003-2.bnf.
 * sqlparser.y
 * defines sqlparser_bison.h
 * outputs sqlparser_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>
//#include <strings.h>

/*
 * We provide parse error includes error message, first line, first column of error lex for debug
 */
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
 * 1. We do not accept any reduce/reduce conflicts, shift/reduce conflicts
 * 2.
 **/


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
%token <node> NSTRING
%token <node> BSTRING
%token <node> INTNUM
%token <node> BOOL
%token <node> APPROXNUM
%token <node> NULLX
%token <node> UNKNOWN
%token <node> QUESTIONMARK
%token <node> TEMP_VARIABLE




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
%nonassoc WITH
%left '(' ')'
%left '.'
%left ';'
%right FOR



%token WITH RECURSIVE UNION EXCEPT INTERSECT TABLE
%token VALUES SELECT FROM TABLESAMPLE BERNOULLI SYSTEM
%token LATERAL UNNEST ORDINALITY ONLY CROSS INNER
%token LEFT RIGHT FULL OUTER NATURAL JOIN USING WHERE
%token REPEATABLE GROUP BY HAVING COLLATE ROLLUP CUBE
%token GROUPING SETS WINDOW PARTITION ORDER ASC DESC
%token NULLS FIRST LAST ROWS RANGE UNBOUNDED PRECEDING
%token CURRENT ROW BETWEEN AND FOLLOWING
%token EXCLUDE TIES NO OTHERS DATE TIME TIMESTAMP TO
%token YEAR MONTH DAY HOUR MINUTE SECOND CURRENT_COLLATION
%token CURRENT_DEFAULT_TRANSFORM_GROUP CURRENT_PATH
%token CURRENT_ROLE CURRENT_USER SESSION_USER SYSTEM_USER
%token USER VALUE CURRENT_TRANSFORM_GROUP_FOR_TYPE
%token COUNT FILTER AVG MAX MIN SUM EVERY ANY SOME
%token STDDEV_POP STDDEV_SAMP VAR_SAMP VAR_POP COLLECT
%token FUSION INTERSECTION COVAR_POP COVAR_SAMP CORR
%token REGR_SLOPE REGR_INTERCEPT REGR_COUNT REGR_R2
%token REGR_AVGX REGR_AVGY REGR_SXX REGR_SYY REGR_SXY
%token RANK DENSE_RANK PERCENT_RANK CUME_DIST WITHIN
%token PERCENTILE_CONT PERCENTILE_DISC ROW_NUMBER
%token NULLIF COALESCE CASE END OR NOT IS ASYMMETRIC
%token SYMMETRIC LIKE ESCAPE SUBSTRING FOR SIMILAR
%token UPPER LOWER CONVERT TRANSLATE TRIM OVERLAY
%token PLACING NORMALIZE SPECIFICTYPE CHARACTERS
%token CODE_UNITS OCTETS LEADING TRAILING BOTH
%token ALL DISTINCT EXISTS UNIQUE NORMALIZED MEMBER
%token OF SUBMULTISET SET A CAST ARRAY MULTISET
%token TREAT DEREF ELEMENT NEXT AT LOCAL ZONE ABS
%token WHEN THEN


%type <node> direct_sql_statement
%type <node> directly_executable_statement
%type <node> direct_sql_data_statement
%type <node> delete_statement_searched
%type <node> update_statement_searched
%type <node> direct_select_statement_multiple_rows
%type <node> cursor_specification
%type <node> query_expression
%type <node> opt_order_by_clause
%type <node> opt_updatability_clause
%type <node> opt_with_clause
%type <node> query_expression_body
%type <node> non_join_query_expression
%type <node> non_join_query_term
%type <node> non_join_query_primary
%type <node> query_term
%type <node> query_primary
%type <node> opt_corresponding_spec
%type <node> joined_table
%type <node> opt_join_type
%type <ival> outer_join_type
%type <node> join_specification
%type <node> search_condition
%type <node> simple_table
%type <node> query_specification
%type <node> select_list
%type <node> select_sublist
%type <node> select_sublist_element
%type <node> derived_column
%type <node> qualified_asterisk
%type <node> identifier_chain
%type <node> all_fields_reference
%type <node> opt_as_clause
%type <node> table_expression
%type <node> from_clause
%type <node> table_reference_list
%type <node> table_reference
%type <node> table_primary_or_joined_table
%type <node> table_primary
%type <node> collection_derived_table
%type <node> collection_value_expression
%type <node> sample_clause
%type <node> opt_repeatable_clause
%type <node> sample_method
%type <node> opt_where_clause
%type <node> opt_group_by_clause
%type <node> opt_having_clause
%type <node> opt_window_clause
%type <node> where_clause
%type <node> group_by_clause
%type <node> grouping_element_list
%type <node> grouping_element
%type <node> ordinary_grouping_set
%type <node> grouping_column_reference
%type <node> grouping_column_reference_list
%type <node> rollup_list
%type <node> ordinary_grouping_set_list
%type <node> cube_list
%type <node> grouping_sets_specification
%type <node> grouping_set_list
%type <node> grouping_set
%type <node> empty_grouping_set
%type <node> having_clause
%type <node> window_clause
%type <node> window_definition_list
%type <node> window_definition
%type <node> window_specification
%type <node> window_specification_details
%type <node> opt_existing_window_name
%type <node> opt_window_partition_clause
%type <node> opt_window_order_clause
%type <node> opt_window_frame_clause
%type <node> window_partition_clause
%type <node> window_order_clause
%type <node> sort_specification_list
%type <node> sort_specification
%type <node> opt_ordering_specification
%type <node> opt_null_ordering
%type <node> window_frame_clause
%type <node> window_frame_units
%type <node> window_frame_extent
%type <node> window_frame_start
%type <node> window_frame_between
%type <node> window_frame_preceding
%type <node> window_frame_bound
%type <node> window_frame_following
%type <node> opt_window_frame_exclusion
%type <node> window_frame_exclusion
%type <node> table_value_constructor
%type <node> explicit_table
%type <node> table_name
%type <node> local_or_schema_qualified_name
%type <node> table_row_value_expression_list
%type <node> table_row_value_expression
%type <node> row_value_special_case
%type <node> row_value_constructor
%type <node> with_list
%type <node> with_list_element
%type <node> opt_with_column_list
%type <node> subquery
%type <node> column_name_list
%type <ival> opt_all_distinct
%type <node> value_expression
%type <node> common_value_expression
%type <node> boolean_value_expression
%type <node> boolean_term
%type <node> boolean_factor
%type <node> boolean_test
%type <node> boolean_primary
%type <node> predicate
%type <node> comparison_predicate
%type <node> between_predicate
%type <node> in_predicate
%type <node> like_predicate
%type <node> character_value_expression
%type <node> datetime_value_expression
%type <node> interval_value_expression
%type <node> reference_value_expression
%type <node> user_defined_type_value_expression
%type <node> datetime_term
%type <node> interval_term
%type <node> datetime_primary
%type <node> datetime_value_function
%type <node> time_zone_specifier
%type <node> interval_primary
%type <node> interval_value_function
%type <node> character_factor
%type <node> string_value_function
%type <node> char_length_units
%type <node> opt_trim_specification
%type <node> similar_predicate
%type <node> null_predicate
%type <node> quantified_comparison_predicate
%type <node> exists_predicate
%type <node> unique_predicate
%type <node> normalized_predicate
%type <node> match_predicate
%type <node> overlaps_predicate
%type <node> distinct_predicate
%type <node> member_predicate
%type <node> submultiset_predicate
%type <node> set_predicate
%type <node> type_predicate
%type <node> boolean_predicand
%type <node> numeric_value_expression
%type <node> term
%type <node> factor
%type <node> numeric_primary
%type <node> value_expression_primary
%type <node> numeric_value_function
%type <node> nonparenthesized_value_expression_primary
%type <node> parenthesized_value_expression
%type <node> unsigned_value_specification
%type <node> unsigned_literal
%type <node> unsigned_numeric_literal
%type <node> general_literal
%type <node> datetime_literal
%type <node> interval_literal
%type <node> interval_qualifier
%type <node> start_field
%type <node> end_field
%type <node> single_datetime_field
%type <node> non_second_primary_datetime_field
%type <node> boolean_literal
%type <node> general_value_specification
%type <node> set_function_specification
%type <node> window_function_type
%type <node> case_expression
%type <node> cast_specification
%type <node> field_reference
%type <node> subtype_treatment
%type <node> method_invocation
%type <node> static_method_invocation
%type <node> new_specification
%type <node> attribute_or_method_reference
%type <node> reference_resolution
%type <node> collection_value_constructor
%type <node> array_element_reference
%type <node> multiset_element_reference
%type <node> routine_invocation
%type <node> next_value_expression
%type <node> SQL_argument_list
%type <node> SQL_argument
%type <node> implicitly_typed_value_specification
%type <node> empty_specification
%type <node> case_abbreviation
%type <node> case_specification
%type <node> simple_case
%type <node> case_operand
%type <node> simple_when_clause_list
%type <node> simple_when_clause
%type <node> when_operand
%type <node> opt_else_clause
%type <node> searched_case
%type <node> searched_when_clause_list
%type <node> aggregate_function
%type <node> grouping_operation
%type <node> opt_filter_clause
%type <node> general_set_function
%type <node> set_function_type
%type <node> binary_set_function_type
%type <node> binary_set_function
%type <node> ordered_set_function
%type <node> hypothetical_set_function
%type <node> rank_function_type
%type <node> within_group_specification
%type <node> inverse_distribution_function
%type <node> inverse_distribution_function_type
%type <node> row_value_expression
%type <node> value_expression_list
%type <node> type_list
%type <node> user_defined_type_specification
%type <node> stmt_list
%start sql_stmt
%%
/*********************************
 ** Section 3: Grammar Definition
 *********************************/

// Defines our general input.
stmt_list:
    direct_sql_statement
  | direct_sql_statement ';' stmt_list
;

direct_sql_statement:
    /* EMPTY */	{ $$ = nullptr; }
  | directly_executable_statement
;

directly_executable_statement:
    direct_sql_data_statement
;

direct_sql_data_statement:
    direct_select_statement_multiple_rows
  | update_statement_searched
  | delete_statement_searched
;

direct_select_statement_multiple_rows:
    cursor_specification
;

cursor_specification:
    query_expression opt_order_by_clause opt_updatability_clause
;

query_expression:
    opt_with_clause query_expression_body
;

query_expression_body:
    non_join_query_expression
  | joined_table
;

non_join_query_expression:
    non_join_query_term
  | query_expression_body UNION  opt_all_distinct opt_corresponding_spec query_term
  | query_expression_body EXCEPT opt_all_distinct opt_corresponding_spec query_term
;

query_term:
    non_join_query_term
  | joined_table
;

non_join_query_term:
    non_join_query_primary
  | query_term INTERSECT opt_all_distinct opt_corresponding_spec query_primary
;

query_primary:
    non_join_query_primary
  | joined_table
;

non_join_query_primary:
    simple_table
  | '(' non_join_query_expression ')'
;

simple_table:
    query_specification
  | table_value_constructor
  | explicit_table
;

query_specification:
    SELECT opt_all_distinct select_list table_expression
;

table_expression:
   from_clause
   opt_where_clause
   opt_group_by_clause
   opt_having_clause
   opt_window_clause
;

from_clause:
    FROM table_reference_list
;

table_reference_list:
    table_reference
  | table_reference ',' table_reference_list
;

table_reference:
    table_primary_or_joined_table sample_clause
;

table_primary_or_joined_table:
    table_primary
  | joined_table
;

table_primary:
            table_name           AS NAME '(' column_name_list ')'
  |         table_name              NAME '(' column_name_list ')'
  |         table_name           AS NAME
  |         table_name              NAME
  |         table_name
  |         subquery             AS NAME '(' column_name_list ')'
  |         subquery                NAME '(' column_name_list ')'
  |         subquery             AS NAME
  |         subquery                NAME
  | LATERAL subquery             AS NAME '(' column_name_list ')'
  | LATERAL subquery                NAME '(' column_name_list ')'
  | LATERAL subquery             AS NAME
  | LATERAL subquery                NAME
  | collection_derived_table     AS NAME '(' column_name_list ')'
  | collection_derived_table        NAME '(' column_name_list ')'
  | collection_derived_table     AS NAME
  | collection_derived_table        NAME
  | table_function_derived_table AS NAME '(' column_name_list ')'
  | table_function_derived_table    NAME '(' column_name_list ')'
  | table_function_derived_table AS NAME
  | table_function_derived_table    NAME
  | ONLY '(' table_name ')'      AS NAME '(' column_name_list ')'
  | ONLY '(' table_name ')'         NAME '(' column_name_list ')'
  | ONLY '(' table_name ')'      AS NAME
  | ONLY '(' table_name ')'         NAME
  | ONLY '(' table_name ')'
  | '(' joined_table ')'
;

joined_table:
    table_reference CROSS JOIN table_primary
  | table_reference opt_join_type JOIN table_reference join_specification
  | table_reference NATURAL opt_join_type JOIN table_primary
  | table_reference UNION JOIN table_primary
;

opt_join_type:
    /* EMPTY */	{ $$ = nullptr; }
  | INNER
  | outer_join_type OUTER
  | outer_join_type
;

outer_join_type:
    LEFT
  | RIGHT
  | FULL
;

join_specification:
    ON search_condition
  | USING '(' column_name_list ')'
;

collection_derived_table:
    UNNEST '(' collection_value_expression ')' WITH ORDINALITY
  | UNNEST '(' collection_value_expression ')'
;

sample_clause:
    TABLESAMPLE sample_method '(' numeric_value_expression ')'
    opt_repeatable_clause
;

opt_repeatable_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | REPEATABLE '(' numeric_value_expression ')'
;

opt_where_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | where_clause
;

where_clause:
    WHERE search_condition
;

search_condition:
    boolean_value_expression
;

opt_group_by_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | group_by_clause
;

group_by_clause:
    GROUP BY opt_all_distinct grouping_element_list
;

grouping_element_list:
    grouping_element
  | grouping_element ',' grouping_element_list
;

grouping_element:
    ordinary_grouping_set
  | rollup_list
  | cube_list
  | grouping_sets_specification
  | empty_grouping_set
;

ordinary_grouping_set:
    grouping_column_reference
  | '(' grouping_column_reference_list ')'
;

grouping_column_reference_list:
    grouping_column_reference
  | grouping_column_reference ',' grouping_column_reference_list
;

grouping_column_reference:
    column_reference opt_collate_clause
;

column_reference:
    identifier_chain
;

opt_collate_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | COLLATE identifier_chain
;

rollup_list:
    ROLLUP '(' ordinary_grouping_set_list ')'
;

ordinary_grouping_set_list:
    ordinary_grouping_set
  | ordinary_grouping_set ',' ordinary_grouping_set_list
;

cube_list:
    CUBE '(' ordinary_grouping_set_list ')'
;

grouping_sets_specification:
    GROUPING SETS '(' grouping_set_list ')'
;

grouping_set_list:
    grouping_set
  | grouping_set ',' grouping_set_list
;

grouping_set:
    ordinary_grouping_set
  | rollup_list
  | cube_list
  | grouping_sets_specification
  | empty_grouping_set
;

empty_grouping_set:
    '(' ')'
;

opt_having_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | having_clause
;

having_clause:
    HAVING search_condition
;

opt_window_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | window_clause
;

window_clause:
    WINDOW window_definition_list
;

window_definition_list:
    window_definition
  | window_definition ',' window_definition_list
;

window_definition:
    NAME AS window_specification
;

window_specification:
    '(' window_specification_details ')'
;

window_specification_details:
    opt_existing_window_name
    opt_window_partition_clause
    opt_window_order_clause
    opt_window_frame_clause
;

opt_existing_window_name:
    /* EMPTY */	{ $$ = nullptr; }
  | NAME
;

opt_window_partition_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | window_partition_clause
;

window_partition_clause:
    PARTITION BY grouping_column_reference_list
;

opt_window_order_clause:
    /* EMPTY */	{ $$ = nullptr; }
  |  window_order_clause
;

window_order_clause:
    ORDER BY sort_specification_list
;

sort_specification_list:
    sort_specification
  | sort_specification ',' sort_specification_list
;

sort_specification:
    value_expression opt_ordering_specification opt_null_ordering
;

opt_ordering_specification:
    /* EMPTY */	{ $$ = nullptr; }
  | ASC
  | DESC
;

opt_null_ordering:
    /* EMPTY */	{ $$ = nullptr; }
  | NULLS FIRST
  | NULLS LAST
;

opt_window_frame_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | window_frame_clause
;

window_frame_clause:
    window_frame_units
    opt_window_frame_exclusion
;

opt_window_frame_exclusion:
    /* EMPTY */	{ $$ = nullptr; }
  | window_frame_exclusion
;

window_frame_units:
    ROWS
  | RANGE
;

window_frame_extent:
    window_frame_start
  | window_frame_between
;

window_frame_start:
    UNBOUNDED PRECEDING
  | CURRENT ROW
  | window_frame_preceding
;

window_frame_preceding:
    unsigned_value_specification PRECEDING
;

window_frame_between:
    BETWEEN window_frame_bound AND window_frame_bound
;

window_frame_bound:
    window_frame_start
  | window_frame_following
  | UNBOUNDED FOLLOWING
;

window_frame_following:
    unsigned_value_specification FOLLOWING
;

window_frame_exclusion:
    EXCLUDE CURRENT ROW
  | EXCLUDE GROUP
  | EXCLUDE TIES
  | EXCLUDE NO OTHERS
;

sample_method:
    BERNOULLI
  | SYSTEM
;


select_list:
    '*'
  | select_sublist
;

select_sublist:
    select_sublist_element
  | select_sublist_element ',' select_sublist
;

select_sublist_element:
    derived_column
  | qualified_asterisk
;

derived_column:
    value_expression opt_as_clause
;

value_expression_list:
    value_expression
  | value_expression ',' value_expression_list
;

value_expression:
    common_value_expression
  | boolean_value_expression
  | row_value_expression
;

common_value_expression:
    numeric_value_expression
  | character_value_expression
  | datetime_value_expression
  | interval_value_expression
  | reference_value_expression
  | collection_value_expression
  | user_defined_type_value_expression
;

interval_value_expression:
    interval_term
  | interval_value_expression '+' interval_term
  | interval_value_expression '-' interval_term
  | '(' datetime_value_expression '-' datetime_term ')' interval_qualifier
;

interval_term:
    interval_factor
  | interval_term '*' factor
  | interval_term '/' factor
  | term '*' interval_factor
;

interval_factor:
    '+' interval_primary
  | '-' interval_primary
  |     interval_primary
;

reference_value_expression:
    value_expression_primary
;

user_defined_type_value_expression:
   value_expression_primary
;


datetime_value_expression:
    datetime_term
  | interval_value_expression '+' datetime_term
  | datetime_value_expression '+' interval_term
  | datetime_value_expression '-' interval_term
;

datetime_term:
    datetime_primary AT time_zone_specifier
;

datetime_primary:
    value_expression_primary
  | datetime_value_function
;

datetime_value_function:
    CURRENT_DATE
  | CURRENT_TIME '(' INTNUM ')'
  | CURRENT_TIME
  | LOCALTIME    '(' INTNUM ')'
  | LOCALTIME
  | CURRENT_TIMESTAMP '(' INTNUM ')'
  | CURRENT_TIMESTAMP
  | LOCALTIMESTAMP    '(' INTNUM ')'
  | LOCALTIMESTAMP
;

time_zone_specifier:
    LOCAL
  | TIME ZONE interval_primary
;

interval_primary:
    value_expression_primary interval_qualifier
  | value_expression_primary
  | interval_value_function
;

interval_value_function:
    ABS '(' interval_value_expression ')'
;

numeric_value_expression:
    term
  | numeric_value_expression '+' term
  | numeric_value_expression '-' term
;

term:
    factor
  | term '*' factor
  | term '/' factor
;

factor:
    '+' numeric_primary
  | '-' numeric_primary
  |     numeric_primary
;

numeric_primary:
    value_expression_primary
  | numeric_value_function
;

value_expression_primary:
    nonparenthesized_value_expression_primary
  | parenthesized_value_expression
;

parenthesized_value_expression:
    '(' value_expression ')'
;

nonparenthesized_value_expression_primary:
    unsigned_value_specification
  | column_reference
  | set_function_specification
  | window_function
  | subquery	/* <scalar subquery> */
  | case_expression
  | cast_specification
  | field_reference
  | subtype_treatment
  | method_invocation
  | static_method_invocation
  | new_specification
  | attribute_or_method_reference
  | reference_resolution
  | collection_value_constructor
  | array_element_reference
  | multiset_element_reference
  | routine_invocation
  | next_value_expression
;

multiset_element_reference:
    ELEMENT '(' multiset_element_reference ')'
;

routine_invocation:
    identifier_chain '(' SQL_argument_list ')'
;

next_value_expression:
    NEXT VALUE FOR identifier_chain
;

collection_value_constructor:
    array_value_constructor
  | multiset_value_constructor
;

array_element_reference:
    array_value_expression '(' numeric_value_expression ')'
;

reference_resolution:
    DEREF '(' reference_value_expression ')'
;

method_invocation:
    value_expression_primary '.' NAME '(' SQL_argument_list ')'
  | value_expression_primary '.' NAME
  | '(' value_expression_primary AS data_type ')' '.' NAME '(' SQL_argument_list ')'
  | '(' value_expression_primary AS data_type ')' '.' NAME
;

static_method_invocation:
    identifier_chain ':' ':' NAME '(' SQL_argument_list ')'
  | identifier_chain ':' ':' NAME
;

new_specification:
    NEW identifier_chain '(' SQL_argument_list ')'
;

attribute_or_method_reference:
    value_expression_primary '-' COMP_GT NAME '(' SQL_argument_list ')'
  | value_expression_primary '-' COMP_GT NAME
;

SQL_argument_list:
    SQL_argument
  | SQL_argument ',' SQL_argument_list
;

SQL_argument:
    value_expression
  | value_expression AS identifier_chain
  | target_specification
;

field_reference:
    value_expression_primary '.' NAME
;

subtype_treatment:
    TREAT '(' value_expression AS identifier_chain ')'
  | TREAT '(' value_expression AS reference_type ')'
;

cast_specification:
    CAST '(' value_expression AS data_type ')'
  | CAST '(' implicitly_typed_value_specification ')'
;

implicitly_typed_value_specification:
    NULLX
  | empty_specification
;

empty_specification:
    ARRAY '(' ')'
  | MULTISET '(' ')'
;

unsigned_value_specification:
    unsigned_literal
  | general_value_specification
;

set_function_specification:
    aggregate_function
  | grouping_operation
;

grouping_operation:
    GROUPING '(' grouping_column_reference_list ')'	/* should be column_reference_list */
;

window_function:
    window_function_type OVER NAME
  | window_function_type OVER window_specification
;

window_function_type:
    rank_function_type '(' ')'
  | ROW_NUMBER '(' ')'
  | aggregate_function
;

case_expression:
    case_abbreviation
  | case_specification
;

case_abbreviation:
    NULLIF   '(' value_expression_list ')'	/* 2 arguments */
  | COALESCE '(' value_expression_list ')'	/* N arguments */
;

case_specification:
    simple_case
  | searched_case
;

searched_case:
    CASE searched_when_clause_list opt_else_clause END
;

searched_when_clause_list:
    searched_when_clause
  | searched_when_clause searched_when_clause_list
;

searched_when_clause:
    WHEN search_condition THEN value_expression
  | WHEN search_condition THEN NULLX
;


simple_case:
    CASE case_operand simple_when_clause_list opt_else_clause END
;

case_operand:
    row_value_special_case
  | row_value_constructor_predicand

simple_when_clause_list:
    simple_when_clause
  | simple_when_clause simple_when_clause_list
;

simple_when_clause:
    WHEN when_operand THEN value_expression
  | WHEN when_operand THEN NULLX
;

when_operand:
    case_operand
  | COMP_EQ case_operand
  | COMP_NE case_operand
  | COMP_LT case_operand
  | COMP_GT case_operand
  | COMP_LE case_operand
  | COMP_GE case_operand
  | NOT BETWEEN ASYMMETRIC case_operand AND case_operand
  | NOT BETWEEN SYMMETRIC  case_operand AND case_operand
  | NOT BETWEEN            case_operand AND case_operand
  |     BETWEEN ASYMMETRIC case_operand AND case_operand
  |     BETWEEN SYMMETRIC  case_operand AND case_operand
  |     BETWEEN            case_operand AND case_operand
  | NOT IN subquery
  | NOT IN '(' row_value_expression_list ')'
  |     IN subquery
  |     IN '(' row_value_expression_list ')'
  | NOT LIKE character_value_expression ESCAPE character_value_expression
  | NOT LIKE character_value_expression
  |     LIKE character_value_expression ESCAPE character_value_expression
  |     LIKE character_value_expression
  | NOT SIMILAR TO character_value_expression ESCAPE character_value_expression
  | NOT SIMILAR TO character_value_expression
  |     SIMILAR TO character_value_expression ESCAPE character_value_expression
  |     SIMILAR TO character_value_expression
  | IS NOT NULLX
  | IS     NULLX
  | COMP_LE ALL  subquery
  | COMP_LT ALL  subquery
  | COMP_EQ ALL  subquery
  | COMP_GT ALL  subquery
  | COMP_GE ALL  subquery
  | COMP_NE ALL  subquery
  | COMP_LE SOME subquery
  | COMP_LT SOME subquery
  | COMP_EQ SOME subquery
  | COMP_GT SOME subquery
  | COMP_GE SOME subquery
  | COMP_NE SOME subquery
  | COMP_LE ANY  subquery
  | COMP_LT ANY  subquery
  | COMP_EQ ANY  subquery
  | COMP_GT ANY  subquery
  | COMP_GE ANY  subquery
  | COMP_NE any  subquery
  | MATCH UNIQUE SIMPLE  subquery
  | MATCH UNIQUE PARTIAL subquery
  | MATCH UNIQUE FULL    subquery
  | MATCH UNIQUE         subquery
  | MATCH        SIMPLE  subquery
  | MATCH        PARTIAL subquery
  | MATCH        FULL    subquery
  | MATCH                subquery
  | OVERLAPS case_operand
  | IS DISTINCT FROM case_operand
  | NOT MEMBER OF multiset_value_expression
  | NOT MEMBER    multiset_value_expression
  |     MEMBER OF multiset_value_expression
  |     MEMBER    multiset_value_expression
  | NOT SUBMULTISET OF multiset_value_expression
  | NOT SUBMULTISET    multiset_value_expression
  |     SUBMULTISET OF multiset_value_expression
  |     SUBMULTISET    multiset_value_expression
  | IS NOT A SET
  | IS     A SET
  | IS NOT OF '(' type_list ')'
  | IS     OF '(' type_list ')'
;


aggregate_function:
    COUNT '(' '*' ')'    opt_filter_clause
  | general_set_function opt_filter_clause
  | binary_set_function  opt_filter_clause
  | ordered_set_function opt_filter_clause
;

opt_filter_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | FILTER '(' WHERE search_condition ')'
;

general_set_function:
    set_function_type '(' opt_all_distinct value_expression ')'
;

set_function_type:
    AVG
  | MAX
  | MIN
  | SUM
  | EVERY
  | ANY
  | SOME
  | COUNT
  | STDDEV_POP
  | STDDEV_SAMP
  | VAR_SAMP
  | VAR_POP
  | COLLECT
  | FUSION
  | INTERSECTION
;

binary_set_function:
    binary_set_function_type
    '(' numeric_value_expression ',' numeric_value_expression ')'
;

binary_set_function_type:
    COVAR_POP
  | COVAR_SAMP
  | CORR
  | REGR_SLOPE
  | REGR_INTERCEPT
  | REGR_COUNT
  | REGR_R2
  | REGR_AVGX
  | REGR_AVGY
  | REGR_SXX
  | REGR_SYY
  | REGR_SXY
;

ordered_set_function:
    hypothetical_set_function
  | inverse_distribution_function
;

hypothetical_set_function:
    rank_function_type '(' value_expression_list ')'
    within_group_specification
;

rank_function_type:
    RANK
  | DENSE_RANK
  | PERCENT_RANK
  | CUME_DIST
;

within_group_specification:
    WITHIN GROUP '(' ORDER BY sort_specification_list ')'
;

inverse_distribution_function:
    inverse_distribution_function_type
    '(' numeric_value_expression ')' within_group_specification
;

inverse_distribution_function_type:
    PERCENTILE_CONT
  | PERCENTILE_DISC

unsigned_literal:
    unsigned_numeric_literal
  | general_literal
;

unsigned_numeric_literal:
    APPROXNUM
  | INTNUM
;

general_literal:
    STRING
  | NSTRING
  | BSTRING
  | datetime_literal
  | interval_literal
  | boolean_literal
;

datetime_literal:
    DATE       STRING
  | TIME       STRING
  | TIMESTAMP  STRING
;

interval_literal:
    INTERVAL '+' STRING interval_qualifier
  | INTERVAL '-' STRING interval_qualifier
  | INTERVAL     STRING interval_qualifier
;

interval_qualifier:
    start_field TO end_field
  | single_datetime_field

boolean_literal:
    TRUE
  | FALSE
  | UNKNOWN
;

start_field:
    non_second_primary_datetime_field
  | non_second_primary_datetime_field '(' INTNUM ')'
;

end_field:
    non_second_primary_datetime_field
  | SECOND '(' INTNUM ',' INTNUM ')'
  | SECOND '(' INTNUM            ')'
  | SECOND
;

non_second_primary_datetime_field:
    YEAR
  | MONTH
  | DAY
  | HOUR
  | MINUTE
;

single_datetime_field:
    non_second_primary_datetime_field
  | non_second_primary_datetime_field '(' INTNUM ')'
  | SECOND '(' INTNUM ',' INTNUM ')'
  | SECOND '(' INTNUM            ')'
  | SECOND
;

/* todo <host parameter specification> <SQL parameter reference> <embedded variable specification> */
general_value_specification:
    '?'	/* <dynamic parameter specification> */
  | CURRENT_COLLATION '(' string_value_expression ')'
  | CURRENT_DEFAULT_TRANSFORM_GROUP
  | CURRENT_PATH
  | CURRENT_ROLE
  | CURRENT_TRANSFORM_GROUP_FOR_TYPE identifier_chain	/* <path-resolved user-defined type name> */
  | CURRENT_USER
  | SESSION_USER
  | SYSTEM_USER
  | USER
  | VALUE
;

collection_value_expression:
    array_value_expression
  | multiset_value_expression
;

/* todo numeric_value_expression */
/* todo array_value_expression */
/* todo multiset_value_expression */
/* todo unsigned_value_specification */
/* todo value_expression_primary */
/* todo string_value_expression */
/* todo explicit_row_value_constructor */
/* todo target_specification */
/* todo reference_value_expression */
/* todo array_value_constructor */
/* todo multiset_value_constructor */

opt_as_clause:
    /* EMPTY */	{ $$ = nullptr; }
  | AS NAME
  |    NAME
;

qualified_asterisk:
    identifier_chain '.' '*'
  | all_fields_reference
;

identifier_chain:
    NAME
  | NAME '.' identifier_chain
;

all_fields_reference:
    value_expression_primary '.' '*' AS '(' column_name_list ')'
  | value_expression_primary '.' '*'
;

table_value_constructor:
    VALUES table_row_value_expression_list
;

table_row_value_expression_list:
    table_row_value_expression
  | table_row_value_expression ',' table_row_value_expression_list
;

table_row_value_expression:
    row_value_special_case
  | row_value_constructor
;

row_value_expression_list:
    row_value_expression
  | row_value_expression ',' row_value_expression_list
;

row_value_expression:
    row_value_special_case
  | explicit_row_value_constructor
;

row_value_special_case:
    nonparenthesized_value_expression_primary
;

row_value_constructor:
    common_value_expression
  | boolean_value_expression
  | explicit_row_value_constructor
;

boolean_value_expression:
    boolean_term
  | boolean_value_expression OR boolean_term
;

boolean_term:
    boolean_factor
  | boolean_term AND boolean_factor
;

boolean_factor:
    NOT boolean_test
  |     boolean_test
;

boolean_test:
    boolean_primary
  | boolean_primary IS NOT boolean_literal
  | boolean_primary IS     boolean_literal
;

boolean_primary:
    predicate
  | boolean_predicand
;

boolean_predicand:
    '(' boolean_value_expression ')'
  | nonparenthesized_value_expression_primary
;

predicate:
    comparison_predicate
  | between_predicate
  | in_predicate
  | like_predicate
  | similar_predicate
  | null_predicate
  | quantified_comparison_predicate
  | exists_predicate
  | unique_predicate
  | normalized_predicate
  | match_predicate
  | overlaps_predicate
  | distinct_predicate
  | member_predicate
  | submultiset_predicate
  | set_predicate
  | type_predicate
;

/* COMP_LE COMP_LT COMP_EQ COMP_GT COMP_GE COMP_NE */
comparison_predicate:
    case_operand COMP_EQ case_operand
  | case_operand COMP_NE case_operand
  | case_operand COMP_LT case_operand
  | case_operand COMP_GT case_operand
  | case_operand COMP_LE case_operand
  | case_operand COMP_GE case_operand
;

between_predicate:
    case_operand NOT BETWEEN ASYMMETRIC case_operand AND case_operand
  | case_operand NOT BETWEEN SYMMETRIC  case_operand AND case_operand
  | case_operand NOT BETWEEN            case_operand AND case_operand
  | case_operand     BETWEEN ASYMMETRIC case_operand AND case_operand
  | case_operand     BETWEEN SYMMETRIC  case_operand AND case_operand
  | case_operand     BETWEEN            case_operand AND case_operand
;

in_predicate:
    case_operand NOT IN subquery
  | case_operand NOT IN '(' row_value_expression_list ')'
  | case_operand     IN subquery
  | case_operand     IN '(' row_value_expression_list ')'
;

like_predicate:
    case_operand NOT LIKE character_value_expression
    ESCAPE character_value_expression
  | case_operand NOT LIKE character_value_expression
  | case_operand     LIKE character_value_expression
    ESCAPE character_value_expression
  | case_operand     LIKE character_value_expression
;

character_value_expression:
    character_factor
  | character_value_expression CNNOP character_factor
;

character_factor:
    value_expression_primary opt_collate_clause
  | string_value_function    opt_collate_clause
;

string_value_function:
    SUBSTRING '(' character_value_expression
    FROM numeric_value_expression FOR numeric_value_expression
    USING char_length_units ')'
  | SUBSTRING '(' character_value_expression
    FROM numeric_value_expression FOR numeric_value_expression ')'
  | SUBSTRING '(' character_value_expression
    FROM numeric_value_expression USING char_length_units ')'
  | SUBSTRING '(' character_value_expression
    FROM numeric_value_expression ')'		/* <character substring function> */
  | SUBSTRING '(' character_value_expression
    SIMILAR character_value_expression
    ESCAPE character_value_expression ')'	/* <regular expression substring function> */
  | UPPER '(' character_value_expression ')'
  | LOWER '(' character_value_expression ')'	/* <fold> */
  | CONVERT '(' character_value_expression USING identifier_chain ')'	/* <transcoding> */
  | TRANSLATE '(' character_value_expression USING identifier_chain ')'	/* <character transliteration> */
  | TRIM '(' opt_trim_specification character_value_expression FROM
    character_value_expression ')'
  | TRIM '(' opt_trim_specification                            FROM
    character_value_expression ')'
  | TRIM '(' character_value_expression ')'	/* <trim function> */
  | OVERLAY '(' character_value_expression PLACING character_value_expression
    FROM numeric_value_expression FOR numeric_value_expression USING char_length_units ')'
  | OVERLAY '(' character_value_expression PLACING character_value_expression
    FROM numeric_value_expression FOR numeric_value_expression                         ')'
  | OVERLAY '(' character_value_expression PLACING character_value_expression
    FROM numeric_value_expression                              USING char_length_units ')'
  | OVERLAY '(' character_value_expression PLACING character_value_expression
    FROM numeric_value_expression                                                      ')'	/* <character overlay function> */
  | NORMALIZE '(' character_value_expression ')'	/* <normalize function> */
  | user_defined_type_value_expression '.' SPECIFICTYPE	/* <specific type method> */
;

char_length_units:
    CHARACTERS
  | CODE_UNITS
  | OCTETS
;

opt_trim_specification:
    /* EMPTY */	{ $$ = nullptr; }
  | LEADING
  | TRAILING
  | BOTH
;

similar_predicate:
    case_operand NOT SIMILAR TO character_value_expression
    ESCAPE character_value_expression
  | case_operand NOT SIMILAR TO character_value_expression
  | case_operand     SIMILAR TO character_value_expression
    ESCAPE character_value_expression
  | case_operand     SIMILAR TO character_value_expression
;

null_predicate:
    case_operand IS NOT NULLX
  | case_operand IS     NULLX
;

/* COMP_LE COMP_LT COMP_EQ COMP_GT COMP_GE COMP_NE */
quantified_comparison_predicate:
    case_operand COMP_LE ALL  subquery
  | case_operand COMP_LT ALL  subquery
  | case_operand COMP_EQ ALL  subquery
  | case_operand COMP_GT ALL  subquery
  | case_operand COMP_GE ALL  subquery
  | case_operand COMP_NE ALL  subquery
  | case_operand COMP_LE SOME subquery
  | case_operand COMP_LT SOME subquery
  | case_operand COMP_EQ SOME subquery
  | case_operand COMP_GT SOME subquery
  | case_operand COMP_GE SOME subquery
  | case_operand COMP_NE SOME subquery
  | case_operand COMP_LE ANY  subquery
  | case_operand COMP_LT ANY  subquery
  | case_operand COMP_EQ ANY  subquery
  | case_operand COMP_GT ANY  subquery
  | case_operand COMP_GE ANY  subquery
  | case_operand COMP_NE ANY  subquery
;

exists_predicate:
    EXISTS subquery
;

unique_predicate:
    UNIQUE subquery
;

normalized_predicate:
    character_value_expression IS NOT NORMALIZED
  | character_value_expression IS     NORMALIZED
;

match_predicate:
    case_operand MATCH UNIQUE SIMPLE  subquery
  | case_operand MATCH UNIQUE PARTIAL subquery
  | case_operand MATCH UNIQUE FULL    subquery
  | case_operand MATCH UNIQUE         subquery
  | case_operand MATCH        SIMPLE  subquery
  | case_operand MATCH        PARTIAL subquery
  | case_operand MATCH        FULL    subquery
  | case_operand MATCH                subquery
;

overlaps_predicate:
    case_operand OVERLAPS case_operand
;

distinct_predicate:
    case_operand IS DISTINCT FROM case_operand
;

member_predicate:
    case_operand NOT MEMBER OF multiset_value_expression
  | case_operand NOT MEMBER    multiset_value_expression
  | case_operand     MEMBER OF multiset_value_expression
  | case_operand     MEMBER    multiset_value_expression
;

submultiset_predicate:
    case_operand NOT SUBMULTISET OF multiset_value_expression
  | case_operand NOT SUBMULTISET    multiset_value_expression
  | case_operand     SUBMULTISET OF multiset_value_expression
  | case_operand     SUBMULTISET    multiset_value_expression
;

set_predicate:
    case_operand IS NOT A SET
  | case_operand IS     A SET
;

type_predicate:
    case_operand IS NOT OF '(' type_list ')'
  | case_operand IS     OF '(' type_list ')'
;

type_list:
    user_defined_type_specification
  | user_defined_type_specification ',' type_list
;

user_defined_type_specification:
    identifier_chain
  | ONLY identifier_chain
;


explicit_table:
    TABLE local_or_schema_qualified_name
;

table_name:
    local_or_schema_qualified_name
;

local_or_schema_qualified_name:
    identifier_chain
;

opt_all_distinct:
    /* EMPTY */	{ $$ = 0; }
  | ALL		{ $$ = 1; }
  | DISTINCT	{ $$ = 2; }
;

opt_corresponding_spec:
    /* EMPTY */	{ $$ = nullptr; }

opt_with_clause:
    WITH RECURSIVE with_list
  | WITH           with_list
;

with_list:
    with_list_element
  | with_list_element ',' with_list
;

with_list_element:
    NAME opt_with_column_list AS subquery opt_search_or_cycle_clause
;

opt_with_column_list:
    /* EMPTY */	{ $$ = nullptr; }
  | '(' column_name_list ')'
;

column_name_list:
    NAME
  | NAME ',' column_name_list
;

subquery:
    '(' query_expression ')'
;

/* todo data_type */


%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
