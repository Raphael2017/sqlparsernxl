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
%token BETWEEN BEGI BIGINT BINARY BOOLEAN BOTH BROWSE BY
%token CASCADE CASE CHARACTER CLUSTER CNNOP COMMENT COMMIT
       CONSISTENT COLUMN COLUMNS CREATE CREATETIME
       CURRENT_USER CHANGE_OBI SWITCH_CLUSTER
%token DATE DATETIME DEALLOCATE DECIMAL DEFAULT DELETE DESC DESCRIBE
       DISTINCT DOUBLE DROP DUAL
%token ELSE END END_P ERROR EXCEPT EXECUTE EXISTS EXPLAIN
%token FETCH FIRST FLOAT FOR FROM FROZEN FORCE
%token GLOBAL GLOBAL_ALIAS GRANT GROUP
%token HAVING HINT_BEGIN HINT_END HOTSPOT
%token IDENTIFIED IF IN INTEGER INTERSECT INSERT INTO IS
%token KEY
%token LEADING LIMIT LIKE LOCAL LOCKED
%token MEDIUMINT MEMORY MOD MODIFYTIME MASTER
%token NEXT NOEXPAND NOT NUMERIC
%token OFFSET ONLY OR ORDER OPTION OUTER
%token PARAMETERS PERCENT PASSWORD PRECISION PREPARE PRIMARY
%token READ_STATIC REAL RENAME REPLACE RESTRICT PRIVILEGES REVOKE
       ROLLBACK ROW ROWS KILL READ_CONSISTENCY
%token SCHEMA SCOPE SELECT SESSION SESSION_ALIAS
       SET SHOW SMALLINT SNAPSHOT SPFILE START STATIC SYSTEM STRONG SET_MASTER_CLUSTER SET_SLAVE_CLUSTER SLAVE
%token TABLE TABLES THEN TIES TIME TIMESTAMP TINYINT TRAILING TRANSACTION TO TOP
%token UNION UPDATE USER
%token VALUES VARCHAR VARBINARY
%token WHERE WHEN WITH WORK PROCESSLIST QUERY CONNECTION WEAK
%token LOOP HASH MERGE REMOTE CONCAT OPTIMIZE EXPAND VIEWS
%token FAST DISABLE EXTERNALPUSHDOWN
%token IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX KEEP PLAN KEEPFIXED
%token MAX_GRANT_PERCENT MIN_GRANT_PERCENT MAXDOP MAXRECURSION NO_PERFORMANCE_SPOOL
%token PARAMETERIZATION SIMPLE FORCED RECOMPILE ROBUST

%type <node> sql_stmt stmt_list stmt
%type <node> select_stmt

%type <node> opt_from_clause table_factor_non_join data_type opt_hint
%type <node> relation_name function_name column_label

%type <node> select_with_parens select_no_parens select_clause
%type <node> simple_select select_expr_list
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
%type <node> opt_option_query_hint query_hint query_hint_list

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
  | stmt ';' stmt_list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, 2, $1, $3);
    $$->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
;

stmt:
    /*EMPTY*/	{ $$ = nullptr; }
  | select_stmt
;

/* SELECT GRAMMAR */
select_stmt:
    select_no_parens
;

select_with_parens:
    '(' select_no_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, $2);
    $$->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
  | '(' select_with_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, $2);
    $$->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
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
    $$ = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, $3);
    $$->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
;

query_hint_list:
    query_hint
  | query_hint ',' query_hint_list
{
    $$ = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, $1, $3);
    $$->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
;

/* todo wtf */
query_hint:
    HASH GROUP			{ $$ = Node::make_query_hint("HASH GROUP"); }
  | ORDER GROUP			{ $$ = Node::make_query_hint("ORDER GROUP"); }
  | CONCAT UNION		{ $$ = Node::make_query_hint("CONCAT UNION"); }
  | HASH UNION			{ $$ = Node::make_query_hint("HASH UNION"); }
  | MERGE UNION			{ $$ = Node::make_query_hint("MERGE UNION"); }
  | LOOP JOIN			{ $$ = Node::make_query_hint("LOOP JOIN"); }
  | MERGE JOIN			{ $$ = Node::make_query_hint("MERGE JOIN"); }
  | HASH JOIN			{ $$ = Node::make_query_hint("HASH JOIN"); }
  | EXPAND VIEWS		{ $$ = Node::make_query_hint("EXPAND VIEWS"); }
  | FAST INTNUM			{ $$ = Node::make_query_hint("FAST", $2); }
  | FORCE ORDER			{ $$ = Node::make_query_hint("FORCE ORDER"); }
  | FORCE EXTERNALPUSHDOWN	{ $$ = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
  | IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX	{ $$ = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
  | KEEP PLAN			{ $$ = Node::make_query_hint("KEEP PLAN"); }
  | KEEPFIXED PLAN		{ $$ = Node::make_query_hint("KEEP PLAN"); }
  | MAX_GRANT_PERCENT COMP_EQ APPROXNUM		{ $$ = Node::make_query_hint("MAX_GRANT_PERCENT =", $3); }
  | MAX_GRANT_PERCENT COMP_EQ INTNUM		{ $$ = Node::make_query_hint("MAX_GRANT_PERCENT =", $3); }
  | MIN_GRANT_PERCENT COMP_EQ APPROXNUM		{ $$ = Node::make_query_hint("MIN_GRANT_PERCENT =", $3); }
  | MIN_GRANT_PERCENT COMP_EQ INTNUM		{ $$ = Node::make_query_hint("MIN_GRANT_PERCENT =", $3); }
  | MAXDOP INTNUM		{ $$ = Node::make_query_hint("MAXDOP", $2); }
  | MAXRECURSION INTNUM		{ $$ = Node::make_query_hint("MAXRECURSION", $2); }
  | NO_PERFORMANCE_SPOOL	{ $$ = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
  | OPTIMIZE FOR UNKNOWN	{ $$ = Node::make_query_hint("OPTIMIZE FOR", $3); }
  | PARAMETERIZATION SIMPLE	{ $$ = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
  | PARAMETERIZATION FORCED	{ $$ = Node::make_query_hint("PARAMETERIZATION FORCED"); }
  | RECOMPILE			{ $$ = Node::make_query_hint("RECOMPILE"); }
  | ROBUST PLAN			{ $$ = Node::make_query_hint("ROBUST PLAN"); }
;


select_clause:
    simple_select
  | select_with_parens	%prec UMINUS
;

simple_select:
    SELECT opt_hint opt_distinct opt_top select_expr_list
    opt_from_clause opt_where opt_groupby opt_having
{
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    $3,             /* E_SELECT_DISTINCT 0 */
                    $5,             /* E_SELECT_SELECT_EXPR_LIST 1 */
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
                    $2,             /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    $4,             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr	    /* E_SELECT_OPT_OPTION 17 */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
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
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    $$->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
;

/*https://docs.microsoft.com/zh-cn/sql/t-sql/queries/top-transact-sql?view=sql-server-2017*/
opt_top:
    /*EMPTY*/	{ $$ = nullptr; }
  | TOP top_count
{
    $$ = Node::makeNonTerminalNode(E_TOP_CNT, 1, $2);
    $$->serialize_format = &TOP_SERIALIZE_FORMAT;
}
  | TOP top_count WITH TIES
{
    $$ = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, $2);
    $$->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
  | TOP top_percent PERCENT
{
    $$ = Node::makeNonTerminalNode(E_TOP_PCT, 1, $2);
    $$->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
  | TOP top_percent PERCENT WITH TIES
{
    $$ = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, $2);
    $$->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
;

top_count:
    INTNUM
  | '(' expr ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
;

top_percent:
    APPROXNUM
  | INTNUM
  | '(' expr ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
;

/*todo JSON XML*/
opt_for_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | FOR BROWSE
{
    $$ = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    $$->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
;

opt_where:
    /*EMPTY*/	{ $$ = nullptr; }
  | WHERE expr
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, $2);
    $$->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
;

opt_from_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | FROM from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, $2);
    $$->serialize_format = &FROM_SERIALIZE_FORMAT;
}
;

opt_hint:
    /*EMPTY*/	{ $$ = nullptr; }
;

opt_groupby:
    /*EMPTY*/	{ $$ = nullptr; }
  | GROUP BY expr_list
{
    $$ = Node::makeNonTerminalNode(E_GROUP_BY, 1, $3);
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
    $$ = Node::makeNonTerminalNode(E_ORDER_BY, 1, $3);
    $$->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
  | ORDER BY sort_list offset_fetch
{
    $$ = Node::makeNonTerminalNode(E_ORDER_BY, 2, $3, $4);
    $$->serialize_format = &ORDER_BY_SERIALIZE_FORMAT_0;
}
;

/*https://docs.microsoft.com/zh-cn/sql/t-sql/queries/select-order-by-clause-transact-sql?view=sql-server-2017*/
offset_fetch:
    OFFSET expr ROW
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, $2);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
  | OFFSET expr ROWS
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, $2);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
  | OFFSET expr ROW FETCH FIRST expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
  | OFFSET expr ROW FETCH NEXT expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
  | OFFSET expr ROW FETCH FIRST expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
  | OFFSET expr ROW FETCH NEXT expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
  | OFFSET expr ROWS FETCH FIRST expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
  | OFFSET expr ROWS FETCH NEXT expr ROW ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
  | OFFSET expr ROWS FETCH FIRST expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
  | OFFSET expr ROWS FETCH NEXT expr ROWS ONLY
{
    $$ = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, $2, $6);
    $$->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
;

sort_list:
    sort_key
  | sort_key ',' sort_list
{
    $$ = Node::makeNonTerminalNode(E_SORT_LIST, 2, $1, $3);
    $$->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
;

sort_key:
    expr opt_asc_desc
{
    $$ = Node::makeNonTerminalNode(E_SORT_KEY, 2, $1, $2);
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
  $$ = Node::makeNonTerminalNode(E_HAVING, 1, $2);
  $$->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
;

with_clause:
    WITH with_list
{
    $$ = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, $2);
    $$->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
;

with_list:
    common_table_expr
  | common_table_expr ',' with_list
{
    $$ = Node::makeNonTerminalNode(E_WITH_LIST, 2, $1, $3);
    $$->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
;

common_table_expr:
    NAME opt_derived_column_list AS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, $1, $2, $4);
    $$->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
;

opt_derived_column_list:
    /*EMPTY*/ { $$ = nullptr; }
  | simple_ident_list_with_parens
;

simple_ident_list_with_parens:
    '(' simple_ident_list ')'
{
    $$ = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
;

simple_ident_list:
    NAME
  | NAME ',' simple_ident_list
{
    $$ = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, $1, $3);
    $$->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
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
    $$ = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, $1, $3);
    $$->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
;

projection:
    expr
{
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias($1);
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    $$->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
  | expr column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $2);
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    $$->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
  | expr AS column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $3);
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    $$->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
  | '*'
{
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    $$->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
;

from_list:
    table_factor
  | table_factor ',' from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_LIST, 2, $1, $3);
    $$->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
;

table_factor:
    table_factor_non_join
  | joined_table
;

table_factor_non_join:
    relation_factor opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 4, $1, nullptr, nullptr, $2);
    $$->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
  | relation_factor AS relation_name opt_simple_ident_list_with_parens opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 4, $1, $3, $4, $5);
    $$->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
  | select_with_parens AS relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 4, $1, $3, $4, nullptr);
    $$->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
  | relation_factor relation_name opt_simple_ident_list_with_parens opt_with_table_hint
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 4, $1, $2, $3, $4);
    $$->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
  | select_with_parens relation_name opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 4, $1, $2, $3, nullptr);
    $$->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
;

opt_with_table_hint:
    /*EMPTY*/	{ $$ = nullptr; }
  | WITH '(' table_hint_list ')'
{
    $$ = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, $3);
    $$->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
;

table_hint_list:
    table_hint
  | table_hint ',' table_hint_list
{
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, $1, $3);
    $$->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
  | table_hint  table_hint_list
{
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, $1, $2);
    $$->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
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
    $$ = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, $2);
    $$->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
;

table_hint_expr:
    func_expr
  | NAME
  | NAME COMP_EQ expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, 2, $1, $3);
    $$->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
;

opt_simple_ident_list_with_parens:
    /*EMPTY*/	{ $$ = nullptr; }
  | simple_ident_list_with_parens
;

/* https://docs.microsoft.com/zh-cn/sql/t-sql/language-elements/transact-sql-syntax-conventions-transact-sql?view=sql-server-2017 */
relation_factor:
    	                         NAME
  |                     NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $3, $1, nullptr, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
  |            NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $5, $3, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |            NAME '.'      '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $4, nullptr, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |   NAME '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $7, $5, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $6, $4, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.' NAME '.'      '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $6, nullptr, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.'      '.'      '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, $5, nullptr, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
;

joined_table:
    '(' joined_table ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, $2);
    $$->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
  | table_factor join_type JOIN table_factor ON expr
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, $2, $1, $4, $6);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_factor ON expr
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $3, $5);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor join_type JOIN table_factor USING '(' simple_ident_list ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, $2, $1, $4, $7);
    $$->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_factor USING '(' simple_ident_list ')'
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $3, $6);
    $$->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
  | table_factor CROSS JOIN table_factor
{
    //Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    //$$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $4, nullptr);
    //$$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    Node* cj = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, nullptr, nullptr);
    cj->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    $$ = Node::addjust_cross_join($4, cj);
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
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST, 2, $1, $3);
    $$->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
;

column_ref:
		 			    NAME
    |   		           NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |   			   NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |		          NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |		          NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |	         NAME '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            NAME '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |	         NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            NAME '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |   NAME '.' NAME '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, $9, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, $8, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.' NAME '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, $8, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.' NAME '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, $7, $5, nullptr, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   NAME '.'      '.'      '.' NAME '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, $5, nullptr, nullptr, $1);
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
;

/* todo when_func */
simple_expr:
    column_ref
  | expr_const
  | '('  expr_list ')'
{
    // expect cover '(' expr ')'
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
  | case_expr
  | func_expr
  | select_with_parens  %prec UMINUS
  | EXISTS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_EXISTS, 1, $2);
    $$->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
;

/* used by the expression that use range value, e.g. between and */
arith_expr:
    simple_expr
  | '+' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_POS, 1, $2);
    $$->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
  | '-' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NEG, 1, $2);
    $$->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
  | arith_expr '+' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ADD, 2, $1, $3);
    $$->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
  | arith_expr '-' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MINUS, 2, $1, $3);
    $$->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
  | arith_expr '*' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MUL, 2, $1, $3);
    $$->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
  | arith_expr '/' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_DIV, 2, $1, $3);
    $$->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
  | arith_expr '%' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_REM, 2, $1, $3);
    $$->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
  | arith_expr '^' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_POW, 2, $1, $3);
    $$->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
  | arith_expr MOD arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MOD, 2, $1, $3);
    $$->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
;

expr:
    arith_expr
  | expr COMP_LE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LE, 2, $1, $3);
    $$->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
  | expr COMP_LT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LT, 2, $1, $3);
    $$->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
  | expr COMP_EQ expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, 2, $1, $3);
    $$->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
  | expr COMP_GE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GE, 2, $1, $3);
    $$->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
  | expr COMP_GT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GT, 2, $1, $3);
    $$->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
  | expr COMP_NE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NE, 2, $1, $3);
    $$->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
  | expr LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LIKE, 2, $1, $3);
    $$->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
  | expr NOT LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, $1, $4);
    $$->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
  | expr AND expr
{
    $$ = Node::makeNonTerminalNode(E_OP_AND, 2, $1, $3);
    $$->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
  | expr OR expr
{
    $$ = Node::makeNonTerminalNode(E_OP_OR, 2, $1, $3);
    $$->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
  | NOT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT, 1, $2);
    $$->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
  | expr IS NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr IS BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr IS UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
  | expr IS NOT UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
  | expr BETWEEN arith_expr AND arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_BTW, 3, $1, $3, $5);
    $$->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
  | expr NOT BETWEEN arith_expr AND arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, $1, $4, $6);
    $$->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
  | expr IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_IN, 2, $1, $3);
    $$->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
  | expr NOT IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, $1, $4);
    $$->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
  | expr CNNOP expr
{
    $$ = Node::makeNonTerminalNode(E_OP_CNN, 2, $1, $3);
    $$->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
;

in_expr:
    select_with_parens
  | '(' expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
;

case_expr:
    CASE case_arg when_clause_list case_default END
{
    $$ = Node::makeNonTerminalNode(E_CASE, 3, $2, $3, $4);
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
    $$ = Node::makeNonTerminalNode(E_WHEN_LIST, 2, $1, $2);
    $$->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
;

when_clause:
    WHEN expr THEN expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, 2, $2, $4);
    $$->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
;

case_default:
    /*EMPTY*/	{ $$ = nullptr; }
  | ELSE expr
{
    $$ = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, $2);
    $$->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
;

func_expr:
    function_name '(' '*' ')'
{
    if (!Node::IS_CAN_WITH_STAR_FUNCTION($1->terminalToken_.str))
    {
    	yyerror(&@1, result, scanner, "Only COUNT function can be with parameter '*'");
    	YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 2, $1, star);
    $$->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
  | function_name '(' distinct_or_all expr ')'
{
    if (!Node::IS_AGGREGATE_FUNCTION($1->terminalToken_.str))
    {
    	yyerror(&@1, result, scanner, "Only aggregate function can be with option distinct, all");
    	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 3, $1, $4, $3);
    $$->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
  | function_name '(' expr_list ')'
{
    if (Node::ListLength($3) > 1 &&
    	Node::IS_ONE_PARAM_FUNCTION($1->terminalToken_.str))
    {
    	std::string err = $1->terminalToken_.str;
    	err += " function only support 1 parameter";
	yyerror(&@1, result, scanner, err.c_str());
	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 2, $1, $3);
    $$->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
  | function_name '(' expr AS data_type ')'
{
    if (!Node::IS_CAN_WITH_AS_FUNCTION($1->terminalToken_.str))
    {
    	std::string err = $1->terminalToken_.str;
	err += " function not support as option";
	yyerror(&@1, result, scanner, err.c_str());
	YYABORT;
    }
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 3, $1, $3, $5);
    $$->serialize_format = &FUN_CALL_3_SERIALIZE_FORMAT;
}
  | function_name '(' ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 1, $1);
    $$->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
;

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

function_name:
    NAME
;

column_label:
    NAME
;

data_type:
    TINYINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
  | SMALLINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
  | MEDIUMINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
  | INTEGER
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
  | BIGINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
  | BOOLEAN
{ $$ = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
  | REAL
{ $$ = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
  | DATETIME
{ $$ = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
;

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
