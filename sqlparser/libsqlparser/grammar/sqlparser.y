%{
/**
 * This Grammar is designed for Transact-SQL.
 * Most grammar rules refer to Microsoft's official documents.
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
%token <node> INTNUM
%token <node> BOOL
%token <node> APPROXNUM
%token <node> NULLX
%token <node> UNKNOWN
%token <node> QUESTIONMARK
%token <node> TEMP_VARIABLE

%right COLLATE
%left	CONDITIONLESS_JOIN
%left	CROSS FULL INNER JOIN LEFT NATURAL RIGHT ON USING OUTER PIVOT UNPIVOT
%left	UNION EXCEPT
%left	INTERSECT

%right ASSIGN ASSIGN_ADD ASSGIN_MINUS ASSIGN_MUL ASSIGN_DIV ASSIGN_REM ASSIGN_BITWISE_AND ASSIGN_BITWISE_OR ASSIGN_BITWISE_XOR

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



%token ADD AND ANY ALL ALTER AS ASC
%token BETWEEN BEGI BIGINT BINARY BOTH BROWSE BY
%token CASCADE CASE CHARACTER CLUSTER CNNOP COMMENT COMMIT
       CONSISTENT COLUMN COLUMNS CREATE CREATETIME
       CURRENT_USER CHANGE_OBI SWITCH_CLUSTER
%token DATE DATETIME DEALLOCATE DECIMAL DEFAULT DELETE DESC DESCRIBE
       DISTINCT DOUBLE DROP DUAL
%token ELSE END END_P ERROR EXCEPT EXECUTE EXISTS EXPLAIN
%token FETCH FIRST FLOAT FOR FROM FROZEN FORCE
%token GLOBAL GLOBAL_ALIAS GRANT GROUP
%token HAVING HINT_BEGIN HINT_END HOTSPOT
%token IDENTIFIED IF IN INTERSECT INSERT INTO IS
%token KEY
%token LEADING LIMIT LIKE LOCAL LOCKED
%token MEMORY MOD MODIFYTIME MASTER
%token NEXT NOEXPAND NOT NUMERIC
%token OFFSET ONLY OR ORDER OPTION OUTER
%token PARAMETERS PERCENT PASSWORD PRECISION PREPARE PRIMARY
%token READ_STATIC REAL RENAME REPLACE RESTRICT PRIVILEGES REVOKE
       ROLLBACK ROW ROWS KILL READ_CONSISTENCY
%token SCHEMA SCOPE SELECT SESSION SESSION_ALIAS
       SET SHOW SMALLINT SNAPSHOT SPFILE START STATIC SYSTEM STRONG SET_MASTER_CLUSTER SET_SLAVE_CLUSTER SLAVE
%token TABLE TABLES THEN TIES TIME TIMESTAMP TINYINT TRAILING TRANSACTION TO TOP
%token UNION UPDATE
%token VALUES VARCHAR VARBINARY
%token WHERE WHEN WITH WORK PROCESSLIST QUERY CONNECTION WEAK
%token LOOP HASH MERGE REMOTE CONCAT OPTIMIZE EXPAND VIEWS
%token FAST DISABLE EXTERNALPUSHDOWN
%token IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX KEEP PLAN KEEPFIXED
%token MAX_GRANT_PERCENT MIN_GRANT_PERCENT MAXDOP MAXRECURSION NO_PERFORMANCE_SPOOL
%token PARAMETERIZATION SIMPLE FORCED RECOMPILE ROBUST
%token CHECKSUM BINARY_CHECKSUM RANK DENSE_RANK ROW_NUMBER NTILE
%token PARTITION RANGE UNBOUNDED PRECEDING CURRENT FOLLOWING OVER
%token VARP VAR SUM STDEVP STDEV MIN MAX LEAD LAST_VALUE LAG GROUPING_ID
%token GROUPING FIRST_VALUE COUNT_BIG COUNT CHECKSUM_AGG AVG
%token SYSTEM_USER STUFF SESSION_USER NULLIF MIN_ACTIVE_ROWVERSION
%token ISNULL IDENTITY GETUTCDATE GETDATE DATEPART DATENAME DATEDIFF DATEADD
%token CURRENT_TIMESTAMP CONVERT COALESCE CAST
%token BIT CHAR DATETIME2 DATETIMEOFFSET INT MONEY NCHAR NVARCHAR SMALLDATETIME SMALLMONEY TEXT
%token COLLATE APPLY SYSTEM_TIME OF CONTAINED PIVOT UNPIVOT
%token OUTPUT DELETED INSERTED DOLLAR_ACTION SOME
%token USE

%type <node> sql_stmt stmt_list stmt
%type <node> dml_stmt

%type <node> select_stmt

%type <node> opt_from_clause table_factor_non_join data_type
%type <node> relation_name column_label

%type <node> select_with_parens select_no_parens select_clause
%type <node> simple_select select_expr_list opt_into_clause
%type <node> opt_where opt_groupby opt_order_by order_by opt_having opt_top
%type <node> sort_list sort_key opt_asc_desc
%type <node> opt_distinct distinct_or_all projection
%type <node> from_list table_factor relation_factor joined_table
%type <node> join_type
%type <ival> join_outer
%type <node> expr_list expr expr_const arith_expr simple_expr
%type <node> column_ref
%type <node> case_expr func_expr in_expr
%type <node> case_arg when_clause_list when_clause case_default
%type <node> top_count top_percent
%type <node> with_clause with_list common_table_expr opt_derived_column_list
%type <node> simple_ident_list simple_ident_list_with_parens opt_simple_ident_list_with_parens
%type <node> offset_fetch opt_for_clause opt_with_table_hint table_hint_list table_hint table_hint_expr
%type <ival> join_hint
%type <node> opt_option_query_hint query_hint query_hint_list over_clause row_or_range_clause window_frame_extent
%type <node> aggregate_windowed_function ranking_windowed_function analytic_windowed_function scalar_function
%type <node> table_value_constructor table_value_constructor_parens row_value_expression_list_parens_list
%type <node> system_time opt_for_system_time pivot_clause unpivot_clause

%type <node> update_stmt
%type <node> opt_output_clause update_elem_list update_elem opt_update_where
%type <node> dml_select_list dml_select_item
%type <ival> all_some_any

%type <node> another_stmt use_stmt
%type <node> delete_stmt

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

stmt_list:
    stmt
  | stmt  stmt_list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
;

/* https://docs.microsoft.com/zh-cn/sql/t-sql/language-elements/transact-sql-syntax-conventions-transact-sql?view=sql-server-2017
 * Statement terminator is actually not optional at all.
 * Although the semicolon is not required for most statements in this version of SQL Server, it will be required in a future version
 */
stmt:
    ';'	{ $$ = nullptr; } /*EMPTY STATEMENT*/
  | dml_stmt ';'
  | dml_stmt %prec UMINUS
  | another_stmt ';'
  | another_stmt %prec UMINUS
;

dml_stmt:
    select_stmt
  | update_stmt
  | delete_stmt
;

another_stmt:
    use_stmt
;

use_stmt:
    USE NAME
{
    $$ = Node::makeNonTerminalNode(E_USE, E_USE_PROPERTY_CNT, $2);
    $$->serialize_format = &E_USE_SERIALIZE_FORMAT;
}

/* DELETE GRAMMAR */
delete_stmt:
    with_clause DELETE opt_top FROM relation_factor opt_with_table_hint
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		$1,	/* E_DELETE_OPT_WITH 0 */
    		$3,	/* E_DELETE_OPT_TOP 1 */
    		$5,	/* E_DELETE_DELETE_RELATION 2 */
    		$6,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$7,	/* E_DELETE_OPT_OUTPUT 4 */
    		$8,	/* E_DELETE_FROM_LIST 5 */
    		$9,	/* E_DELETE_OPT_WHERE 6 */
    		$10 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  | with_clause DELETE opt_top FROM TEMP_VARIABLE
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		$1,		/* E_DELETE_OPT_WITH 0 */
    		$3,		/* E_DELETE_OPT_TOP 1 */
    		$5,		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$6,		/* E_DELETE_OPT_OUTPUT 4 */
    		$7,		/* E_DELETE_FROM_LIST 5 */
    		$8,		/* E_DELETE_OPT_WHERE 6 */
    		$9 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  |             DELETE opt_top FROM relation_factor opt_with_table_hint
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		$2,		/* E_DELETE_OPT_TOP 1 */
    		$4,		/* E_DELETE_DELETE_RELATION 2 */
    		$5,		/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$6,		/* E_DELETE_OPT_OUTPUT 4 */
    		$7,		/* E_DELETE_FROM_LIST 5 */
    		$8,		/* E_DELETE_OPT_WHERE 6 */
    		$9 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  |             DELETE opt_top FROM TEMP_VARIABLE
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		$2,		/* E_DELETE_OPT_TOP 1 */
    		$4,		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$5,		/* E_DELETE_OPT_OUTPUT 4 */
    		$6,		/* E_DELETE_FROM_LIST 5 */
    		$7,		/* E_DELETE_OPT_WHERE 6 */
    		$8 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  | with_clause DELETE opt_top      relation_factor opt_with_table_hint
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		$1,	/* E_DELETE_OPT_WITH 0 */
    		$3,	/* E_DELETE_OPT_TOP 1 */
    		$4,	/* E_DELETE_DELETE_RELATION 2 */
    		$5,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$6,	/* E_DELETE_OPT_OUTPUT 4 */
    		$7,	/* E_DELETE_FROM_LIST 5 */
    		$8,	/* E_DELETE_OPT_WHERE 6 */
    		$9 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  | with_clause DELETE opt_top      TEMP_VARIABLE
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		$1,		/* E_DELETE_OPT_WITH 0 */
    		$3,		/* E_DELETE_OPT_TOP 1 */
    		$4,		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$5,		/* E_DELETE_OPT_OUTPUT 4 */
    		$6,		/* E_DELETE_FROM_LIST 5 */
    		$7,		/* E_DELETE_OPT_WHERE 6 */
    		$8 		/* E_DELETE_OPT_QUERY_HINT */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  |             DELETE opt_top      relation_factor opt_with_table_hint
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		$2,		/* E_DELETE_OPT_TOP 1 */
    		$3,		/* E_DELETE_DELETE_RELATION 2 */
    		$4,		/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$5,		/* E_DELETE_OPT_OUTPUT 4 */
    		$6,		/* E_DELETE_FROM_LIST 5 */
    		$7,		/* E_DELETE_OPT_WHERE 6 */
    		$8 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
  |             DELETE opt_top      TEMP_VARIABLE
    opt_output_clause opt_from_clause opt_update_where opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		$2,		/* E_DELETE_OPT_TOP 1 */
    		$3,		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		$4,		/* E_DELETE_OPT_OUTPUT 4 */
    		$5,		/* E_DELETE_FROM_LIST 5 */
    		$6,		/* E_DELETE_OPT_WHERE 6 */
    		$7 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
;

/* UPDATE GRAMMAR */
update_stmt:
    with_clause UPDATE opt_top relation_factor opt_with_table_hint
    SET update_elem_list opt_output_clause opt_from_clause opt_update_where
    opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		$1,	/* E_UPDATE_OPT_WITH 0 */
    		$3,	/* E_UPDATE_OPT_TOP 1 */
    		$4,	/* E_UPDATE_UPDATE_RELATION 2 */
    		$5,	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		$7,	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		$8,	/* E_UPDATE_OPT_OUTPUT 5 */
    		$9,	/* E_UPDATE_FROM_LIST 6 */
    		$10,	/* E_UPDATE_OPT_WHERE 7 */
    		$11	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    $$->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
  | with_clause UPDATE opt_top TEMP_VARIABLE opt_with_table_hint
    SET update_elem_list opt_output_clause opt_from_clause opt_update_where
    opt_option_query_hint
{
    if ($5)
    {
        std::string err = "TABLE_VARIABLE " + $4->text() + " could not have table hint";
        yyerror(&@1, result, scanner, err.c_str());
	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		$1,	/* E_UPDATE_OPT_WITH 0 */
    		$3,	/* E_UPDATE_OPT_TOP 1 */
    		$4,	/* E_UPDATE_UPDATE_RELATION 2 */
    		$5,	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		$7,	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		$8,	/* E_UPDATE_OPT_OUTPUT 5 */
    		$9,	/* E_UPDATE_FROM_LIST 6 */
    		$10,	/* E_UPDATE_OPT_WHERE 7 */
    		$11	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    $$->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
  |             UPDATE opt_top relation_factor opt_with_table_hint
    SET update_elem_list opt_output_clause opt_from_clause opt_update_where
    opt_option_query_hint
{
    $$ = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		$2,		/* E_UPDATE_OPT_TOP 1 */
    		$3,		/* E_UPDATE_UPDATE_RELATION 2 */
    		$4,		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		$6,		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		$7,		/* E_UPDATE_OPT_OUTPUT 5 */
    		$8,		/* E_UPDATE_FROM_LIST 6 */
    		$9,		/* E_UPDATE_OPT_WHERE 7 */
    		$10		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    $$->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
  |             UPDATE opt_top TEMP_VARIABLE opt_with_table_hint
    SET update_elem_list opt_output_clause opt_from_clause opt_update_where
    opt_option_query_hint
{
    if ($4)
    {
        std::string err = "TABLE_VARIABLE " + $3->text() + " could not have table hint";
        yyerror(&@1, result, scanner, err.c_str());
	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		$2,		/* E_UPDATE_OPT_TOP 1 */
    		$3,		/* E_UPDATE_UPDATE_RELATION 2 */
    		$4,		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		$6,		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		$7,		/* E_UPDATE_OPT_OUTPUT 5 */
    		$8,		/* E_UPDATE_FROM_LIST 6 */
    		$9,		/* E_UPDATE_OPT_WHERE 7 */
    		$10		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    $$->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
;

opt_update_where:
    opt_where
  | WHERE CURRENT OF GLOBAL NAME
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, $5);
    $$->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
  | WHERE CURRENT OF GLOBAL TEMP_VARIABLE
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, $5);
    $$->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
  | WHERE CURRENT OF        NAME
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, $4);
    $$->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
  | WHERE CURRENT OF        TEMP_VARIABLE
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, $4);
    $$->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
;

update_elem_list:
    update_elem
  | update_elem ',' update_elem_list
{
    $$ = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

update_elem:
    expr
{
    Node* t = nullptr;
    if (!Node::check_update_item($1, t))
    {
        yyerror(&@1, result, scanner, "update element format error");
    	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_UPDATE_ELEM, E_UPDATE_ELEM_PROPERTY_CNT, $1);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
;

opt_output_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | OUTPUT dml_select_list
{
    $$ = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, $2, nullptr, nullptr);
    $$->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
  | OUTPUT dml_select_list INTO relation_factor opt_derived_column_list
{
    $$ = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, $2, $4, $5);
    $$->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
  | OUTPUT dml_select_list INTO TEMP_VARIABLE opt_derived_column_list
{
    $$ = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, $2, $4, $5);
    $$->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
;

dml_select_list:
    dml_select_item
  | dml_select_item ',' dml_select_list
{
    $$ = Node::makeNonTerminalNode(E_DML_SELECT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

dml_select_item:
    DELETED         '.' projection
{
    $$ = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, $3);
    $$->serialize_format = &DELETED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
  | INSERTED 	    '.' projection
{
    $$ = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, $3);
    $$->serialize_format = &INSERTED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
  | projection
{
    $$ = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, $1);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
;

/* SELECT GRAMMAR */
select_stmt:
    select_no_parens
;

select_with_parens:
    '(' select_no_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
  | '(' select_with_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

select_no_parens:
    select_clause opt_order_by opt_for_clause opt_option_query_hint
{
    $$ = $1;
    $$->setChild(E_SELECT_ORDER_BY, $2);
    $$->setChild(E_SELECT_FOR_CLAUSE, $3);
    $$->setChild(E_SELECT_OPT_OPTION, $4);
}
  | with_clause select_clause opt_order_by opt_for_clause opt_option_query_hint
{
    $$ = $2;
    $$->setChild(E_SELECT_ORDER_BY, $3);
    $$->setChild(E_SELECT_FOR_CLAUSE, $4);
    $$->setChild(E_SELECT_OPT_WITH, $1);
    $$->setChild(E_SELECT_OPT_OPTION, $5);
}
;

/*https://docs.microsoft.com/zh-cn/sql/t-sql/queries/hints-transact-sql-query?view=sql-server-2017*/
opt_option_query_hint:
    /*EMPTY*/	{ $$ = nullptr; }
  | OPTION '(' query_hint_list ')'
{
    $$ = Node::makeNonTerminalNode(E_OPTION_CLAUSE, E_OPTION_CLAUSE_PROPERTY_CNT, $3);
    $$->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
;

query_hint_list:
    query_hint
  | query_hint ',' query_hint_list
{
    $$ = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

/* todo */
query_hint:
    HASH GROUP					{ $$ = Node::make_query_hint("HASH GROUP"); }
  | ORDER GROUP					{ $$ = Node::make_query_hint("ORDER GROUP"); }
  | CONCAT UNION				{ $$ = Node::make_query_hint("CONCAT UNION"); }
  | HASH UNION					{ $$ = Node::make_query_hint("HASH UNION"); }
  | MERGE UNION					{ $$ = Node::make_query_hint("MERGE UNION"); }
  | LOOP JOIN					{ $$ = Node::make_query_hint("LOOP JOIN"); }
  | MERGE JOIN					{ $$ = Node::make_query_hint("MERGE JOIN"); }
  | HASH JOIN					{ $$ = Node::make_query_hint("HASH JOIN"); }
  | EXPAND VIEWS				{ $$ = Node::make_query_hint("EXPAND VIEWS"); }
  | FAST INTNUM					{ $$ = Node::make_query_hint("FAST", $2); }
  | FORCE ORDER					{ $$ = Node::make_query_hint("FORCE ORDER"); }
  | FORCE EXTERNALPUSHDOWN			{ $$ = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
  | IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX	{ $$ = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
  | KEEP PLAN					{ $$ = Node::make_query_hint("KEEP PLAN"); }
  | KEEPFIXED PLAN				{ $$ = Node::make_query_hint("KEEP PLAN"); }
  | MAX_GRANT_PERCENT COMP_EQ APPROXNUM		{ $$ = Node::make_query_hint("MAX_GRANT_PERCENT =", $3); }
  | MAX_GRANT_PERCENT COMP_EQ INTNUM		{ $$ = Node::make_query_hint("MAX_GRANT_PERCENT =", $3); }
  | MIN_GRANT_PERCENT COMP_EQ APPROXNUM		{ $$ = Node::make_query_hint("MIN_GRANT_PERCENT =", $3); }
  | MIN_GRANT_PERCENT COMP_EQ INTNUM		{ $$ = Node::make_query_hint("MIN_GRANT_PERCENT =", $3); }
  | MAXDOP INTNUM				{ $$ = Node::make_query_hint("MAXDOP", $2); }
  | MAXRECURSION INTNUM				{ $$ = Node::make_query_hint("MAXRECURSION", $2); }
  | NO_PERFORMANCE_SPOOL			{ $$ = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
  | OPTIMIZE FOR expr				{ $$ = Node::make_query_hint("OPTIMIZE FOR", $3); }
  | PARAMETERIZATION SIMPLE			{ $$ = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
  | PARAMETERIZATION FORCED			{ $$ = Node::make_query_hint("PARAMETERIZATION FORCED"); }
  | RECOMPILE					{ $$ = Node::make_query_hint("RECOMPILE"); }
  | ROBUST PLAN					{ $$ = Node::make_query_hint("ROBUST PLAN"); }
;

select_clause:
    simple_select
  | select_with_parens	%prec UMINUS
;

simple_select:
    SELECT opt_distinct opt_top select_expr_list opt_into_clause
    opt_from_clause opt_where opt_groupby opt_having
{
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    $2,             /* E_SELECT_DISTINCT 0 */
                    $4,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                    $6,             /* E_SELECT_FROM_LIST 2 */
                    $7,             /* E_SELECT_OPT_WHERE 3 */
                    $8,             /* E_SELECT_GROUP_BY 4 */
                    $9,             /* E_SELECT_HAVING 5 */
                    nullptr,        /* E_SELECT_SET_OPERATION 6 */
                    nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                    nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                    nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                    nullptr,        /* E_SELECT_ORDER_BY 10 */
                    nullptr,        /* E_SELECT_LIMIT 11 */
                    nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    $3,             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            $5              /* E_SELECT_OPT_INTO 18 */
                    );
    $$->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
  | select_clause UNION opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        $3,                  /* E_SELECT_ALL_SPECIFIED 7 */
                        $1,                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        $4,                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    $$->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
  | select_clause INTERSECT opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        $3,                  /* E_SELECT_ALL_SPECIFIED 7 */
                        $1,                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        $4,                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,            /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    $$->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
  | select_clause EXCEPT opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        $3,                  /* E_SELECT_ALL_SPECIFIED 7 */
                        $1,                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        $4,                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    $$->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
;

opt_into_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | INTO relation_factor
{
    $$ = Node::makeNonTerminalNode(E_INTO_CLAUSE, E_INTO_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
;

/*https://docs.microsoft.com/zh-cn/sql/t-sql/queries/top-transact-sql?view=sql-server-2017*/
opt_top:
    /*EMPTY*/	{ $$ = nullptr; }
  | TOP top_count
{
    $$ = Node::makeNonTerminalNode(E_TOP_CNT, E_TOP_CNT_PROPERTY_CNT, $2);
    $$->serialize_format = &TOP_SERIALIZE_FORMAT;
}
  | TOP top_count WITH TIES
{
    $$ = Node::makeNonTerminalNode(E_TOP_CNT_TIES, E_TOP_CNT_TIES_PROPERTY_CNT, $2);
    $$->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
  | TOP top_percent PERCENT
{
    $$ = Node::makeNonTerminalNode(E_TOP_PCT, E_TOP_PCT_PROPERTY_CNT, $2);
    $$->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
  | TOP top_percent PERCENT WITH TIES
{
    $$ = Node::makeNonTerminalNode(E_TOP_PCT_TIES, E_TOP_PCT_TIES_PROPERTY_CNT, $2);
    $$->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
;

top_count:
    INTNUM
  | '(' expr ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

top_percent:
    APPROXNUM
  | INTNUM
  | '(' expr ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

/*todo JSON XML*/
opt_for_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | FOR BROWSE
{
    $$ = Node::makeNonTerminalNode(E_FOR_CLAUSE, E_FOR_CLAUSE_PROPERTY_CNT, nullptr);
    $$->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
;

opt_where:
    /*EMPTY*/	{ $$ = nullptr; }
  | WHERE expr
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
;

opt_from_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | FROM from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &FROM_SERIALIZE_FORMAT;
}
;

opt_groupby:
    /*EMPTY*/	{ $$ = nullptr; }
  | GROUP BY expr_list
{
    $$ = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, $3);
    $$->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
;

opt_order_by:
    /*EMPTY*/	{ $$ = nullptr; }
  | order_by
;

order_by:
    ORDER BY sort_list
{
    $$ = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, $3, nullptr);
    $$->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
  | ORDER BY sort_list offset_fetch
{
    $$ = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, $3, $4);
    $$->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
;

/*https://docs.microsoft.com/zh-cn/sql/t-sql/queries/select-order-by-clause-transact-sql?view=sql-server-2017*/
offset_fetch:
    OFFSET expr ROW
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, nullptr);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
  | OFFSET expr ROWS
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, nullptr);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
  | OFFSET expr ROW FETCH FIRST expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
  | OFFSET expr ROW FETCH NEXT expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
  | OFFSET expr ROW FETCH FIRST expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
  | OFFSET expr ROW FETCH NEXT expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
  | OFFSET expr ROWS FETCH FIRST expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
  | OFFSET expr ROWS FETCH NEXT expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
  | OFFSET expr ROWS FETCH FIRST expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
  | OFFSET expr ROWS FETCH NEXT expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
;

sort_list:
    sort_key
  | sort_key ',' sort_list
{
    $$ = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

sort_key:
    expr opt_asc_desc
{
    $$ = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
;

opt_asc_desc:
    /*EMPTY*/
{
    $$ = Node::makeTerminalNode(E_SORT_ASC, "");
}
  | ASC
{
    $$ = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
  | DESC
{
    $$ = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
;

opt_having:
    /*EMPTY*/	{ $$ = nullptr; }
  | HAVING expr
{
  $$ = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, $2);
  $$->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
;

with_clause:
    WITH with_list
{
    $$ = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
;

with_list:
    common_table_expr
  | common_table_expr ',' with_list
{
    $$ = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

common_table_expr:
    NAME opt_derived_column_list AS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, $1, $2, $4);
    $$->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
;

opt_derived_column_list:
    /*EMPTY*/  %prec UMINUS { $$ = nullptr; }
  | simple_ident_list_with_parens
;

simple_ident_list_with_parens:
    '(' simple_ident_list ')'
{
    $$ = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

simple_ident_list:
    NAME
  | NAME ',' simple_ident_list
{
    $$ = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

opt_distinct:
    /*EMPTY*/	{ $$ = nullptr; }
  | ALL
{
    $$ = Node::makeTerminalNode(E_ALL, "ALL");
}
  | DISTINCT
{
    $$ = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
;

select_expr_list:
    projection
  | projection ',' select_expr_list
{
    $$ = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

projection:
    expr
{
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias($1);
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, nd);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  | expr column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  | expr AS column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  | '*'
{
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
;

from_list:
    table_factor
  | table_factor ',' from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

table_factor:
    table_factor_non_join
  | joined_table
;

/* todo */
table_factor_non_join:
    relation_factor opt_for_system_time opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, nullptr, nullptr, $3, $2);
    $$->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
  | relation_factor opt_for_system_time AS relation_name opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $4, nullptr, $5, $2);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | relation_factor opt_for_system_time relation_name  opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, nullptr, $4, $2);
    $$->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
  | select_with_parens AS relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, $4, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | select_with_parens relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, $3, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | select_with_parens opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, nullptr, $2, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | table_value_constructor_parens AS relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, $4, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | table_value_constructor_parens relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, $3, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | table_value_constructor_parens opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, nullptr, $2, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | func_expr AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | func_expr relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, nullptr, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | func_expr
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, nullptr, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE '.' func_expr AS relation_name opt_simple_ident_list_with_parens
{
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, $3, $1);
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, $5, $6, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE '.' func_expr relation_name opt_simple_ident_list_with_parens
{
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, $3, $1);
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, $4, $5, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
  | TEMP_VARIABLE '.' func_expr opt_simple_ident_list_with_parens
{
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, $3, $1);
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, nullptr, $4, nullptr, nullptr);
    $$->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
;

opt_for_system_time:
    /*EMPTY*/	%prec UMINUS	{ $$ = nullptr; }
  | FOR SYSTEM_TIME system_time
{
    $$ = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, E_FOR_SYSTEM_TIME_PROPERTY_CNT, $3);
    $$->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
;

system_time:
    AS OF STRING
{
    $$ = Node::makeTerminalNode(E_STRING, "AS OF "+$3->text());
    delete($3);
}
  | FROM STRING TO STRING
{
    $$ = Node::makeTerminalNode(E_STRING, "FROM "+$2->text()+" TO "+$4->text());
    delete($2);
    delete($4);
}
  | BETWEEN STRING AND STRING
{
    $$ = Node::makeTerminalNode(E_STRING, "BETWEEN "+$2->text()+" AND "+$4->text());
    delete($2);
    delete($4);
}
  | CONTAINED IN '(' STRING ',' STRING ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+$4->text()+","+$6->text()+")");
    delete($4);
    delete($6);
}
  | ALL
{ $$ = Node::makeTerminalNode(E_STRING, "ALL"); }
;

table_value_constructor_parens:
    '(' table_value_constructor ')'
{
    $$ = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

table_value_constructor:
    VALUES row_value_expression_list_parens_list
{
    $$ = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, E_TABLE_VALUE_CTOR_PROPERTY_CNT, $2);
    $$->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
;

row_value_expression_list_parens_list:
    '(' expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
  | '(' expr_list ')' ',' row_value_expression_list_parens_list
{
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, $2);
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, E_LIST_PROPERTY_CNT, nd, $5);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

opt_with_table_hint:
    /*EMPTY*/ %prec UMINUS	{ $$ = nullptr; }
  | WITH '(' table_hint_list ')'
{
    $$ = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, E_WITH_TABLE_HINT_PROPERTY_CNT, $3);
    $$->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
;

table_hint_list:
    table_hint
  | table_hint ',' table_hint_list
{
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
  | table_hint  table_hint_list
{
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

/* https://docs.microsoft.com/zh-cn/sql/t-sql/queries/hints-transact-sql-table?view=sql-server-2017 */
// todo
table_hint:
    table_hint_expr
{
    if (!Node::check_expr_table_hint($1))
    {
        yyerror(&@1, result, scanner, "table hint format error");
        YYABORT;
    }
    $$ = $1;
}
  | NOEXPAND table_hint_expr
{
    if (!Node::check_expr_table_hint($2))
    {
        yyerror(&@1, result, scanner, "table hint format error");
        YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, E_TABLE_HINT_NOEXPAND_PROPERTY_CNT, $2);
    $$->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
;

table_hint_expr:
    func_expr
  | NAME
  | NAME COMP_EQ expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
;

opt_simple_ident_list_with_parens:
    /*EMPTY*/ %prec UMINUS	{ $$ = nullptr; }
  | simple_ident_list_with_parens
;

/* https://docs.microsoft.com/zh-cn/sql/t-sql/language-elements/transact-sql-syntax-conventions-transact-sql?view=sql-server-2017 */
relation_factor:
    	                         NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                     NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $3, $1, nullptr, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
  |            NAME '.' NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $5, $3, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |            NAME '.'      '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $4, nullptr, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |   NAME '.' NAME '.' NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $7, $5, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $6, $4, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.' NAME '.'      '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $6, nullptr, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.'      '.'      '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $5, nullptr, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
;

joined_table:
    '(' joined_table ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
  | table_factor join_type JOIN table_factor ON expr
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, $2, $1, $4, $6);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_factor ON expr
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $3, $5);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor CROSS JOIN table_factor
{
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $4, nullptr);
    $$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
  | table_factor CROSS APPLY table_factor  %prec UMINUS
{
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $4, nullptr);
    $$->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
  | table_factor OUTER APPLY table_factor %prec UMINUS
{
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $4, nullptr);
    $$->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
  | table_factor PIVOT pivot_clause AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, $1, $3, $5);
    $$->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
  | table_factor PIVOT pivot_clause relation_name
{
    $$ = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, $1, $3, $4);
    $$->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
  | table_factor PIVOT pivot_clause
{
    $$ = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, $1, $3, nullptr);
    $$->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
  | table_factor UNPIVOT unpivot_clause AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, $1, $3, $5);
    $$->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
  | table_factor UNPIVOT unpivot_clause relation_name
{
    $$ = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, $1, $3, $4);
    $$->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
  | table_factor UNPIVOT unpivot_clause
{
    $$ = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, $1, $3, nullptr);
    $$->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
;

pivot_clause:
    '(' aggregate_windowed_function FOR column_ref IN simple_ident_list_with_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, E_PIVOT_CLAUSE_PROPERTY_CNT, $2, $4, $6);
    $$->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
;

unpivot_clause:
    '(' expr FOR column_ref IN simple_ident_list_with_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, E_UNPIVOT_CLAUSE_PROPERTY_CNT, $2, $4, $6);
    $$->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
;

join_type:
    FULL join_outer join_hint
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER"+Node::convert_join_hint($3));
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_FULL, "FULL"+Node::convert_join_hint($3));
    }
}
  | LEFT join_outer join_hint
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER"+Node::convert_join_hint($3));
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT"+Node::convert_join_hint($3));
    }
}
  | RIGHT join_outer join_hint
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER"+Node::convert_join_hint($3));
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT"+Node::convert_join_hint($3));
    }
}
  | INNER join_hint
{
    $$ = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint($2));
}
;

join_hint:
    /*EMPTY*/	{ $$ = 0; }
  | LOOP	{ $$ = 1; }
  | HASH	{ $$ = 2; }
  | MERGE	{ $$ = 3; }
  | REMOTE	{ $$ = 4; }
;

join_outer:
    /* EMPTY */                 { $$ = 0; }
  | OUTER                       { $$ = 1; /*this is a flag*/}
;

/* expression grammar */
expr_list:
    expr
  | expr ',' expr_list
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

column_ref:
		 			    NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
    |   		           NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$3, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |   			   NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |		          NAME '.' NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$5, $3, $1, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |		          NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $3, $1, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |	         NAME '.' NAME '.' NAME '.' NAME	%prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$7, $5, $3, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            NAME '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $5, $3, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |	         NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$6, $4, nullptr, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            NAME '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $4, nullptr, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |   NAME '.' NAME '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$9, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$8, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$8, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$7, $5, nullptr, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $5, nullptr, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
;

expr_const:
    STRING
  | INTNUM
  | APPROXNUM
  | BOOL
  | NULLX
  | QUESTIONMARK
  | DEFAULT		{ $$ = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
  | '$' INTNUM		{ $$ = Node::makeTerminalNode(E_STRING, "$"+$2->text()); delete($2); }
  | '$' APPROXNUM	{ $$ = Node::makeTerminalNode(E_STRING, "$"+$2->text()); delete($2); }
;

simple_expr:
    column_ref
  | TEMP_VARIABLE
  | expr_const
  | '('  expr_list ')'
{
    // expect cover '(' expr ')'
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
  | case_expr
  | func_expr
  | select_with_parens  %prec UMINUS
  | EXISTS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
;

/* used by the expression that use range value, e.g. between and */
arith_expr:
    simple_expr
  | '+' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
  | '-' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
  | arith_expr '+' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
  | arith_expr '-' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
  | arith_expr '*' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
  | arith_expr '/' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
  | arith_expr '%' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
  | arith_expr '^' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
  | arith_expr MOD arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
;

expr:
    arith_expr
  | over_clause
  | expr COLLATE NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
  | expr COMP_LE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
  | expr COMP_LE all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_LE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_LE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_LE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr COMP_LT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
  | expr COMP_LT all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_LT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_LT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_LT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr COMP_EQ expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
  | expr COMP_EQ all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_EQ_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_EQ_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_EQ_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr COMP_GE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
  | expr COMP_GE all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_GE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_GE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_GE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr COMP_GT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
  | expr COMP_GT all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_GT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_GT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_GT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr COMP_NE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
  | expr COMP_NE all_some_any select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    switch ($3)
    {
        case 0:
        {
            $$->serialize_format = &OP_NE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            $$->serialize_format = &OP_NE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            $$->serialize_format = &OP_NE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
  | expr LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
  | expr NOT LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
  | expr AND expr
{
    $$ = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
  | expr OR expr
{
    $$ = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
  | expr ASSIGN_ADD expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_ADD, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_ADD_SERIALIZE_FORMAT;
}
  | expr ASSGIN_MINUS expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_MINUS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_MINUS_SERIALIZE_FORMAT;
}
  | expr ASSIGN_MUL expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_MUL, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_MUL_SERIALIZE_FORMAT;
}
  | expr ASSIGN_DIV expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_DIV, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_DIV_SERIALIZE_FORMAT;
}
  | expr ASSIGN_REM expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_REM, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_REM_SERIALIZE_FORMAT;
}
  | expr ASSIGN_BITWISE_AND expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_BIT_AND, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_BIT_AND_SERIALIZE_FORMAT;
}
  | expr ASSIGN_BITWISE_OR expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_BIT_OR, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_BIT_OR_SERIALIZE_FORMAT;
}
  | expr ASSIGN_BITWISE_XOR expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ASS_BIT_XOR, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_ASS_BIT_XOR_SERIALIZE_FORMAT;
}
  | NOT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
  | expr IS NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr IS BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr IS UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr BETWEEN arith_expr AND arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, $1, $3, $5);
    $$->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
  | expr NOT BETWEEN arith_expr AND arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, $1, $4, $6);
    $$->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
  | expr IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
  | expr NOT IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
  | expr CNNOP expr
{
    $$ = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
;

in_expr:
    select_with_parens
  | '(' expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

case_expr:
    CASE case_arg when_clause_list case_default END
{
    $$ = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, $2, $3, $4);
    $$->serialize_format = &CASE_SERIALIZE_FORMAT;
}
;

case_arg:
    /*EMPTY*/	{ $$ = nullptr; }
  | expr
;

when_clause_list:
    when_clause
  | when_clause when_clause_list
{
    $$ = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
;

when_clause:
    WHEN expr THEN expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, $2, $4);
    $$->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
;

case_default:
    /*EMPTY*/	{ $$ = nullptr; }
  | ELSE expr
{
    $$ = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, $2);
    $$->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
;

/*https://github.com/Raphael2017/grammars-v4/blob/master/tsql/TSqlParser.g4*/
func_expr:
    scalar_function
  | ranking_windowed_function
  | aggregate_windowed_function
  | analytic_windowed_function
  |                 BINARY_CHECKSUM '('                  '*' ')'
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            CAST '('    expr AS data_type ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, $5);
    $$->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
  |                         CONVERT '(' data_type   ',' expr ')'
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                  CONVERT '(' data_type ',' expr ',' expr ')'
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                        CHECKSUM '('                  '*' ')'
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                        COALESCE '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |               CURRENT_TIMESTAMP
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                    CURRENT_USER
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                       DATEADD '(' NAME ',' expr ',' expr ')'
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      DATEDIFF '(' NAME ',' expr ',' expr ')'
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      DATENAME '(' NAME ',' expr          ')'
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      DATEPART '(' NAME ',' expr          ')'
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                       GETDATE '('                        ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                    GETUTCDATE '('                        ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |             IDENTITY '(' data_type ',' INTNUM ',' INTNUM ')'
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |             IDENTITY '(' data_type                       ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |         MIN_ACTIVE_ROWVERSION
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                        NULLIF '('          expr ',' expr ')'
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |            STUFF '(' expr ',' INTNUM ',' INTNUM ',' expr ')'
{
    Node* expr_list2 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $7, $9);
    expr_list2->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, expr_list2);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STUFF");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                  SESSION_USER
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                   SYSTEM_USER
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                        ISNULL '('          expr ',' expr ')'
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

aggregate_windowed_function:
                                AVG '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             AVG '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             AVG '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             AVG '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             MAX '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             MAX '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             MAX '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             MAX '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             MIN '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             MIN '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             MIN '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             MIN '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             SUM '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             SUM '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             SUM '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             SUM '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                           STDEV '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           STDEV '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           STDEV '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                           STDEV '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                          STDEVP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                          STDEVP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                          STDEVP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                          STDEVP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             VAR '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             VAR '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             VAR '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             VAR '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                            VARP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            VARP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            VARP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                            VARP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '('                 '*'  ')' over_clause
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           COUNT '('                 '*'  ')'
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '('                 '*'  ')' over_clause
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                       COUNT_BIG '('                 '*'  ')'
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                    CHECKSUM_AGG '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                    CHECKSUM_AGG '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                        GROUPING '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                     GROUPING_ID '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

analytic_windowed_function:
                        FIRST_VALUE '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      LAST_VALUE '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             LAG '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             LAG '('        expr ',' expr ')' over_clause
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, $7, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           LAG '(' expr ',' expr ',' expr ')' over_clause
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, $9, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            LEAD '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            LEAD '('        expr ',' expr ')' over_clause
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, $7, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                          LEAD '(' expr ',' expr ',' expr ')' over_clause
{
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $5, $7);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, $9, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}

ranking_windowed_function:
                               RANK '('                      ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, $4, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      DENSE_RANK '('                      ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, $4, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      ROW_NUMBER '('                      ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, $4, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           NTILE '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

scalar_function:
    NAME '.' NAME '.' NAME '.' NAME '('                      ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $7, $5, $3, $1);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | NAME '.' NAME '.'      '.' NAME '('                      ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $6, nullptr, $3, $1);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |          NAME '.' NAME '.' NAME '('                      ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $5, $3, $1, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |          NAME '.'      '.' NAME '('                      ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $4, nullptr, $1, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                   NAME '.' NAME '('                      ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $3, $1, nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            NAME '('                      ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           RIGHT '('                      ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            LEFT '('                      ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                 BINARY_CHECKSUM '('                      ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                        CHECKSUM '('                      ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | NAME '.' NAME '.' NAME '.' NAME '('            expr_list ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $7, $5, $3, $1);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $9, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | NAME '.' NAME '.'      '.' NAME '('            expr_list ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $6, nullptr, $3, $1);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $8, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |          NAME '.' NAME '.' NAME '('            expr_list ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $5, $3, $1, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $7, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |          NAME '.'      '.' NAME '('            expr_list ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $4, nullptr, $1, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $6, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                   NAME '.' NAME '('            expr_list ')'
{
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, $3, $1, nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $5, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            NAME '('            expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                           RIGHT '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            LEFT '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                 BINARY_CHECKSUM '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                        CHECKSUM '('            expr_list ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}

over_clause:
    OVER '(' PARTITION BY expr_list order_by row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, $6, $7);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '('                        order_by row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, $3, $4);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY expr_list          row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, nullptr, $6);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY expr_list order_by                     ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, $6, nullptr);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY expr_list                              ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, nullptr, nullptr);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '('                        order_by                     ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, $3, nullptr);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '('                                 row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, $3);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '('                                                     ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
;

row_or_range_clause:
    ROWS window_frame_extent
{
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    $$ = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, $2);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
  | RANGE window_frame_extent
{
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    $$ = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, $2);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
;

window_frame_extent:
    UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
  | INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, $1->text()+"PRECEDING"); delete($1); }
  | CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
  | BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
  | BETWEEN INTNUM PRECEDING   AND UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete($2); }
  | BETWEEN CURRENT ROW         AND UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
  | BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
  | BETWEEN INTNUM FOLLOWING   AND UNBOUNDED PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete($2); }
  | BETWEEN UNBOUNDED PRECEDING AND INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+$5->text()+" PRECEDING"); delete($5);}
  | BETWEEN INTNUM PRECEDING   AND INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" PRECEDING AND "+$5->text()+" PRECEDING"); delete($2); delete($5); }
  | BETWEEN CURRENT ROW         AND INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+$5->text()+" PRECEDING"); delete($5); }
  | BETWEEN UNBOUNDED FOLLOWING AND INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+$5->text()+" PRECEDING"); delete($5); }
  | BETWEEN INTNUM FOLLOWING   AND INTNUM PRECEDING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" FOLLOWING AND "+$5->text()+" PRECEDING"); delete($2); delete($5); }
  | BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
  | BETWEEN INTNUM PRECEDING   AND CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" PRECEDING AND CURRENT ROW"); delete($2); }
  | BETWEEN CURRENT ROW         AND CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
  | BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
  | BETWEEN INTNUM FOLLOWING   AND CURRENT ROW
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" FOLLOWING AND CURRENT ROW"); delete($2); }
  | BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
  | BETWEEN INTNUM PRECEDING   AND UNBOUNDED FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete($2); }
  | BETWEEN CURRENT ROW         AND UNBOUNDED FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
  | BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
  | BETWEEN INTNUM FOLLOWING   AND UNBOUNDED FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete($2); }
  | BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
  | BETWEEN INTNUM PRECEDING   AND INTNUM FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" PRECEDING AND "+$5->text()+" FOLLOWING"); delete($2); delete($5); }
  | BETWEEN CURRENT ROW         AND INTNUM FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+$5->text()+" FOLLOWING"); delete($5); }
  | BETWEEN UNBOUNDED FOLLOWING AND INTNUM FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+$5->text()+" FOLLOWING"); delete($5); }
  | BETWEEN INTNUM FOLLOWING   AND INTNUM FOLLOWING
{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+$2->text()+" FOLLOWING AND "+$5->text()+" FOLLOWING"); delete($2); delete($5); }

distinct_or_all:
    ALL
{
    $$ = Node::makeTerminalNode(E_ALL, "ALL");
}
  | DISTINCT
{
    $$ = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
;

/* Name classification */
relation_name:
    NAME
;

column_label:
    NAME
  | STRING
;

/*https://docs.microsoft.com/en-us/sql/t-sql/data-types/data-types-transact-sql?view=sql-server-2017#approximate-numerics*/
data_type:
    BIGINT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
  | INT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
  | SMALLINT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
  | TINYINT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
  | DECIMAL '(' INTNUM ',' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+$3->text()+","+$5->text()+")"); delete($3); delete($5); }
  | DECIMAL '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+$3->text()+")"); delete($3); }
  | DECIMAL
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
  | NUMERIC '(' INTNUM ',' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+$3->text()+","+$5->text()+")"); delete($3); delete($5); }
  | NUMERIC '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+$3->text()+")"); delete($3); }
  | NUMERIC
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
  | BIT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
  | MONEY
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
  | SMALLMONEY
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
  | REAL
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
  | FLOAT '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+$3->text()+")"); delete($3); }
  | DATE
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
  | DATETIMEOFFSET '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+$3->text()+")"); delete($3); }
  | DATETIMEOFFSET
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
  | DATETIME2 '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+$3->text()+")"); delete($3); }
  | DATETIME2
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
  | SMALLDATETIME
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
  | DATETIME
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
  | TIME '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+$3->text()+")"); delete($3); }
  | TIME
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
  | CHAR '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+$3->text()+")"); delete($3); }
  | CHAR
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
  | VARCHAR '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+$3->text()+")"); delete($3); }
  | VARCHAR '(' MAX ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
  | VARCHAR
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
  | TEXT
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
  | NCHAR '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+$3->text()+")"); delete($3); }
  | NCHAR
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
  | NVARCHAR '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+$3->text()+")"); delete($3); }
  | NVARCHAR '(' MAX ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
  | NVARCHAR
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
  | BINARY '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+$3->text()+")"); delete($3); }
  | BINARY
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
  | VARBINARY '(' INTNUM ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+$3->text()+")"); delete($3); }
  | VARBINARY '(' MAX ')'
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
  | VARBINARY
{ $$ = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
;

all_some_any:
    ALL		{ $$ = 0; }
  | SOME	{ $$ = 1; }
  | ANY		{ $$ = 2; }

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
