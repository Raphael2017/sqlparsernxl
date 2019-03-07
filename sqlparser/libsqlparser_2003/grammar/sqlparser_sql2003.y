%{
/**
 * This Grammar is designed for sql2003.
 * https://github.com/Raphael2017/SQL/blob/master/sql-2003-2.bnf
 * sqlparser.y
 * defines sqlparser_sql2003_bison.h
 * outputs sqlparser_sql2003_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"

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
%output  "sqlparser_sql2003_bison.cpp"
%defines "sqlparser_sql2003_bison.h"

// Tell bison to create a reentrant parser
%define api.pure full

// Prefix the parser
%define api.prefix {sql2003_}
%define api.token.prefix {SQL2003_}

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

%right 	COLLATE
%left	CROSS FULL INNER JOIN LEFT NATURAL RIGHT
%left	UNION EXCEPT
%left	INTERSECT
%left	OR
%left	AND
%right 	NOT
%left 	COMP_LE COMP_LT COMP_EQ COMP_GT COMP_GE COMP_NE
%left 	CNNOP
%left 	LIKE
%nonassoc BETWEEN
%nonassoc IN
%nonassoc IS NULLX BOOL UNKNOWN
%left 	'+' '-'
%left 	'*' '/' '%' MOD
%left 	'^'
%right 	UMINUS
%left 	'(' ')'
%left '.'


%token ALL AND ANY ARRAY AS ASC
       AVG
%token BETWEEN BIGINT BINARY BLOB BOOLEAN BY
%token CASE CAST CHAR CHARACTER CHARACTERS CLOB
       CNNOP COALESCE CODE_UNITS COLLATE COMP_EQ
       COMP_GE COMP_GT COMP_LE COMP_LT COMP_NE
       CONVERT CORRESPONDING COUNT CROSS CURRENT
       CURRENT_TIMESTAMP CURRENT_USER
%token DATE DAY DEC DECIMAL DEFAULT DELETE
       DENSE_RANK DESC DISTINCT DOUBLE
%token ELSE END END_P ERROR EXCEPT EXISTS
%token FLOAT FOLLOWING FOR FROM FULL
%token G GROUP GROUPING
%token HAVING HOUR
%token IN INNER INT INTEGER INTERSECT INTERVAL
       IS
%token JOIN
%token K
%token LARGE LEFT LIKE
%token M MAX MIN MINUTE MOD MONTH
       MULTISET
%token NATIONAL NATURAL NCHAR NCLOB NOT NULLIF
       NUMERIC
%token OBJECT OCTETS OF ON ONLY OR
       ORDER OUTER OVER
%token PARTITION PRECEDING PRECISION
%token RANGE RANK READ REAL RECURSIVE REF
       RIGHT ROW ROWS ROW_NUMBER
%token SCOPE SECOND SELECT SESSION_USER SET SMALLINT
       SOME STDDEV_POP STDDEV_SAMP SUM SYSTEM_USER
%token THEN TIME TIMESTAMP TO
%token UNBOUNDED UNION UPDATE USING
%token VARCHAR VARYING VAR_POP VAR_SAMP
%token WHEN WHERE WITH WITHOUT
%token YEAR
%token ZONE


%type <node> sql_stmt
%type <node> stmt_list
%type <node> stmt
%type <node> dql_stmt
%type <node> dml_stmt
%type <node> select_stmt
%type <node> update_stmt
%type <node> delete_stmt
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
%type <node> case_expr func_expr in_expr function_call_keyword
%type <node> case_arg when_clause_list when_clause case_default
%type <node> with_clause with_list common_table_expr opt_derived_column_list
%type <node> simple_ident_list simple_ident_list_with_parens opt_simple_ident_list_with_parens
%type <node> opt_for_clause opt_with_table_hint
%type <ival> join_hint
%type <node> over_clause row_or_range_clause window_frame_extent
%type <node> aggregate_windowed_function ranking_windowed_function scalar_function
%type <node> opt_for_system_time
%type <node> update_elem_list update_elem
%type <node> collate_clause
%type <ival> all_some_any
%type <node> user_defined_type_name reference_type collection_type predefined_type boolean_type
%type <node> datetime_type numeric_type exact_numeric_type approximate_numeric_type character_string_type
%type <node> binary_large_object_string_type national_character_string_type
%type <node> large_object_length multiplier char_length_units
%type <node> interval_type interval_qualifier start_field end_field
%type <node> single_datetime_field non_second_primary_datetime_field
%type <node> opt_corresponding_spec name_chain

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
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
;

stmt:
    /*EMPTY*/	{ $$ = nullptr; } /*EMPTY STATEMENT*/
  | dql_stmt
  | dml_stmt
;

dql_stmt:
    select_stmt
;

dml_stmt:
    update_stmt
  | delete_stmt
;

/* sql2003 support <delete statement: searched> */
delete_stmt:
    DELETE FROM relation_factor opt_where
{
    $$ = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		nullptr,	/* E_DELETE_OPT_TOP 1 */
    		$3,		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		nullptr,        /* E_DELETE_OPT_OUTPUT 4 */
    		nullptr,	/* E_DELETE_FROM_LIST 5 */
    		$4,		/* E_DELETE_OPT_WHERE 6 */
    		nullptr 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    $$->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
;

/* sql2003 support <update statement: searched> */
update_stmt:
    UPDATE relation_factor SET update_elem_list opt_where
{
    $$ = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		nullptr,	/* E_UPDATE_OPT_TOP 1 */
    		$2,		/* E_UPDATE_UPDATE_RELATION 2 */
    		nullptr,	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		$4,		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		nullptr,	/* E_UPDATE_OPT_OUTPUT 5 */
    		nullptr,	/* E_UPDATE_FROM_LIST 6 */
    		$5,		/* E_UPDATE_OPT_WHERE 7 */
    		nullptr		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    $$->serialize_format = &UPDATE_SERIALIZE_FORMAT;
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

/* sql2003 support <direct select statement: multiple rows> */
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
    select_clause opt_order_by opt_for_clause
{
    $$ = $1;
    $$->setChild(E_SELECT_ORDER_BY, $2);
    $$->setChild(E_SELECT_FOR_CLAUSE, $3);
}
  | with_clause select_clause opt_order_by opt_for_clause
{
    $$ = $2;
    $$->setChild(E_SELECT_ORDER_BY, $3);
    $$->setChild(E_SELECT_FOR_CLAUSE, $4);
    $$->setChild(E_SELECT_OPT_WITH, $1);
}
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
  | select_clause UNION opt_distinct opt_corresponding_spec select_clause
{
    if ($4)
    {
        $3->set_text($3->text() + " " + $4->text());
        delete($4);
    }
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
                        $5,                  /* E_SELECT_LATER_SELECT_STMT 9 */
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
  | select_clause INTERSECT opt_distinct opt_corresponding_spec select_clause
{
    if ($4)
    {
        $3->set_text($3->text() + " " + $4->text());
        delete($4);
    }
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
                        $5,                  /* E_SELECT_LATER_SELECT_STMT 9 */
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
  | select_clause EXCEPT opt_distinct opt_corresponding_spec select_clause
{
    if ($4)
    {
        $3->set_text($3->text() + " " + $4->text());
        delete($4);
    }
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
                        $5,                  /* E_SELECT_LATER_SELECT_STMT 9 */
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

opt_corresponding_spec:
    /* EMPTY */	 { $$ = nullptr; }
  | CORRESPONDING
{
    $$ = Node::makeTerminalNode(E_STRING, "CORRESPONDING");
}
  | CORRESPONDING BY '(' simple_ident_list ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CORRESPONDING BY ("+$4->text()+")");
}
;

opt_into_clause:
    /*EMPTY*/	{ $$ = nullptr; }
;

/* sql2003 */
opt_top:
    /*EMPTY*/	{ $$ = nullptr; }
;

opt_for_clause:
    /*EMPTY*/	{ $$ = nullptr; }
  | FOR UPDATE
{
    $$ = Node::makeTerminalNode(E_STRING, "FOR UPDATE");
}
  | FOR UPDATE OF simple_ident_list
{
    $$ = Node::makeTerminalNode(E_STRING, "FOR UPDATE OF "+$4->text());
}
  | FOR READ ONLY
{
    $$ = Node::makeTerminalNode(E_STRING, "FOR READ ONLY");
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

/* sql2003 not allow tableless */
opt_from_clause:
    FROM from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &FROM_SERIALIZE_FORMAT;
}
;

/* sql2003 support opt_distinct */
/* sql2003 support <ordinary grouping set> */
/* todo sql2003 support <rollup list> */
/* todo sql2003 support <cube list> */
/* todo sql2003 support <grouping sets specification> */
/* todo sql2003 support <empty grouping set> */
opt_groupby:
    /*EMPTY*/	{ $$ = nullptr; }
  | GROUP BY opt_distinct expr_list
{
    $$ = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, $4, $3);
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


/* sql2003 support RECURSIVE common table expression */
with_clause:
    WITH with_list
{
    $$ = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, $2);
    $$->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
  | WITH RECURSIVE with_list
{
    $$ = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, $3);
    $$->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
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

/*todo sql2003 support <search or cycle clause> */
common_table_expr:
    NAME opt_derived_column_list AS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, $1, $2, $4);
    $$->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
;

opt_derived_column_list:
    /*EMPTY*/	{ $$ = nullptr; }
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
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, $1);
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

/* todo sql2003 support LATERAL subquery */
/* todo sql2003 support <collection derived table> */
/* todo sql2003 support <table function derived table> */
/* todo sql2003 support <only spec> */
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
;

/* sql2003 not support this */
opt_for_system_time:
    /*EMPTY*/	{ $$ = nullptr; }
;

/* sql2003 not support this */
opt_with_table_hint:
    /*EMPTY*/	{ $$ = nullptr; }
;

opt_simple_ident_list_with_parens:
    /*EMPTY*/	{ $$ = nullptr; }
  | simple_ident_list_with_parens
;

/* keep these that can solve <identifier chain> in sql2003 */
column_ref:
		 			    NAME
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
    |   		           NAME '.' NAME
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
    |		          NAME '.' NAME '.' NAME
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
    |	         NAME '.' NAME '.' NAME '.' NAME
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


/* keep these that can solve <identifier chain> in sql2003 */

relation_factor:
    	                         NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                     NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $3, $1, nullptr, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
  |            NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $5, $3, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |            NAME '.'      '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $4, nullptr, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |   NAME '.' NAME '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $7, $5, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.'      '.' NAME '.' NAME
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $6, $4, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   NAME '.' NAME '.'      '.' NAME
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

/*
relation_factor:
    name_chain
{
    $$ = Node::NAME_CHAIN_TO_TABLE_IDENT($1);
    if (!$$)
    {
        yyerror(&@1, result, scanner, "Illegal reference table ");
        YYABORT;
    }
}
;

column_ref:
    name_chain '.' '*'
{
    $$ = Node::NAME_CHAIN_STAR_TO_NAME_FIELD($1);
    if (!$$)
    {
        yyerror(&@1, result, scanner, "Illegal reference column ");
        YYABORT;
    }
}
  | name_chain
{
    $$ = Node::NAME_CHAIN_TO_NAME_FIELD($1);
    if (!$$)
    {
        yyerror(&@1, result, scanner, "Illegal reference column ");
        YYABORT;
    }
}
;*/

name_chain:
    NAME	%prec UMINUS
  | NAME '.' name_chain
{
    $$ = Node::makeNonTerminalNode(E_NAME_CHAIN, 2, $1, $3);
    /* do not use this directly */
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
  | table_factor join_type JOIN table_factor USING simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, $2, $1, $4, $6);
    $$->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_factor USING simple_ident_list_with_parens
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $3, $5);
    $$->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
  | table_factor CROSS JOIN table_factor
{
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $4, nullptr);
    $$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
  | table_factor NATURAL join_type JOIN table_factor
{
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + $3->text());
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $5, nullptr);
    $$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
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

/* sql2003 not support this */
join_hint:
    /*EMPTY*/	{ $$ = 0; }
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



expr_const:
    STRING
  | INTNUM
  | APPROXNUM
  | BOOL
  | NULLX
  | QUESTIONMARK
  | DEFAULT		{ $$ = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
;

simple_expr:
    column_ref
  | expr_const
  | '(' expr_list ')'
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
  | expr collate_clause
{
    $$ = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
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

/* sql2003 support <simple case> <searched case> */
case_expr:
    CASE case_arg when_clause_list case_default END
{
    $$ = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, $2, $3, $4);
    $$->serialize_format = &CASE_SERIALIZE_FORMAT;
}
;

case_arg:
    /*EMPTY*/	{ $$ = nullptr; }	/* sql2003 support <searched case> */
  | expr				/* sql2003 support <simple case> */
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

/* todo */
func_expr:
    function_call_keyword
  | scalar_function
  | ranking_windowed_function
  | aggregate_windowed_function
  |                            CAST '('    expr AS data_type ')'	/* sql2003 support <cast specification> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, $5);
    $$->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
  |                         CONVERT '(' expr USING relation_factor ')'	/* sql2003 support <transcoding> */
{
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, $5->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete($5);
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, $3, nullptr, nullptr, transcoding_name);
    $$->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
  |                        COALESCE '('            expr_list ')'	/* sql2003 support <case abbreviation> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |               CURRENT_TIMESTAMP					/* sql2003 support <current timestamp value function> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |               CURRENT_TIMESTAMP '('            INTNUM    ')'	/* sql2003 support <current timestamp value function> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                    CURRENT_USER					/* sql2003 support <general value specification> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                        NULLIF '('          expr ',' expr ')'	/* sql2003 support <case abbreviation> */
{
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $3, $5);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                  SESSION_USER					/* sql2003 support <general value specification> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                   SYSTEM_USER					/* sql2003 support <general value specification> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
;

/* todo */
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
  |                      STDDEV_POP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      STDDEV_POP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                      STDDEV_POP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                      STDDEV_POP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                          STDDEV_SAMP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                          STDDEV_SAMP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                          STDDEV_SAMP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                          STDDEV_SAMP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             VAR_POP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             VAR_POP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                             VAR_POP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                             VAR_POP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                            VAR_SAMP '('                 expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, $5, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            VAR_SAMP '('                 expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            VAR_SAMP '(' distinct_or_all expr ')' over_clause
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  |                            VAR_SAMP '(' distinct_or_all expr ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP");
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
  |                           COUNT '('                 '*'  ')'	/* sql2003 support <window function>::<aggregate function> AVG | MAX | MIN | SUM | COUNT | STDDEV_POP | STDDEV_SAMP | VAR_SAMP | VAR_POP */
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                        GROUPING '('                 expr ')'	/* sql2003 support <grouping operation> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

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
  |                      ROW_NUMBER '('                      ')' over_clause	/* sql2003 support <window function type> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, $4, nullptr, nullptr);
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
;

/* todo function_call_keyword with sql2003 keyword */
/* Function call syntax using official SQL 2003 keywords.
     Because the function name is an official token */
function_call_keyword:
    non_second_primary_datetime_field '(' expr ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

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

/* todo sql2003 support <row type> */
data_type:
    predefined_type
  | user_defined_type_name
  | reference_type
  | collection_type
;

user_defined_type_name:
    relation_factor
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text());
    delete($1);
}
;

reference_type:
    REF '(' relation_factor ')' SCOPE relation_factor
{
    $$ = Node::makeTerminalNode(E_STRING, "REF("+$3->text()+")SCOPE "+$6->text());
    delete($3);delete($6);
}
;

collection_type:
    data_type ARRAY '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" ARRAY("+$4->text()+")");
    delete($1);
    delete($4);
}
  | data_type ARRAY
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" ARRAY");
    delete($1);
}
  | data_type MULTISET
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" MULTISET");
    delete($1);
}
;

predefined_type:
    character_string_type CHARACTER SET relation_factor collate_clause
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" CHARACTER SET "+$4->text()+$5->text());
    delete($1);delete($4);delete($5);
}
  | character_string_type CHARACTER SET relation_factor
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" CHARACTER SET "+$4->text());
    delete($1);delete($4);
}
  | character_string_type                               collate_clause
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+$2->text());
    delete($1);delete($2);
}
  | character_string_type
  | national_character_string_type collate_clause
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+$2->text());
    delete($1);delete($2);
}
  | national_character_string_type
  | binary_large_object_string_type
  | numeric_type
  | boolean_type
  | datetime_type
  | interval_type
;

interval_type:
    INTERVAL interval_qualifier
{
    $$ = Node::makeTerminalNode(E_STRING, "INTERVAL "+$2->text());
    delete($2);
}
;

interval_qualifier:
    start_field TO end_field
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" TO "+$3->text());
    delete($1);delete($3);
}
  | single_datetime_field
;

start_field:
    non_second_primary_datetime_field '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+"("+$3->text()+")");
    delete($3);
}
  | non_second_primary_datetime_field
;

end_field:
    non_second_primary_datetime_field
  | SECOND '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "SECOND("+$3->text()+")");
    delete($3);
}
  | SECOND
{
    $$ = Node::makeTerminalNode(E_STRING, "SECOND");
}
;

single_datetime_field:
    non_second_primary_datetime_field '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+"("+$3->text()+")");
    delete($1);delete($3);
}
  | non_second_primary_datetime_field
  | SECOND '(' INTNUM ',' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "SECOND("+$3->text()+","+$5->text()+")");
    delete($3);delete($5);
}
  | SECOND '(' INTNUM            ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "SECOND("+$3->text()+")");
    delete($3);
}
  | SECOND
{
    $$ = Node::makeTerminalNode(E_STRING, "SECOND");
}
;

non_second_primary_datetime_field:
    YEAR
{
    $$ = Node::makeTerminalNode(E_STRING, "YEAR");
}
  | MONTH
{
    $$ = Node::makeTerminalNode(E_STRING, "MONTH");
}
  | DAY
{
    $$ = Node::makeTerminalNode(E_STRING, "DAY");
}
  | HOUR
{
    $$ = Node::makeTerminalNode(E_STRING, "HOUR");
}
  | MINUTE
{
    $$ = Node::makeTerminalNode(E_STRING, "MINUTE");
}
;

boolean_type:
    BOOLEAN
{
    $$ = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
;

datetime_type:
    DATE
{
    $$ = Node::makeTerminalNode(E_STRING, "DATE");
}
  | TIME '(' INTNUM ')' WITH TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME("+$3->text()+") WITH TIME ZONE");
    delete($3);
}
  | TIME '(' INTNUM ')' WITHOUT TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME("+$3->text()+") WITHOUT TIME ZONE");
    delete($3);
}
  | TIME '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME("+$3->text()+")");
    delete($3);
}
  | TIME                WITH TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
  | TIME                WITHOUT TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
  | TIME
{
    $$ = Node::makeTerminalNode(E_STRING, "TIME");
}
  | TIMESTAMP '(' INTNUM ')' WITH TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+$3->text()+") WITH TIME ZONE");
    delete($3);
}
  | TIMESTAMP '(' INTNUM ')' WITHOUT TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+$3->text()+") WITHOUT TIME ZONE");
    delete($3);
}
  | TIMESTAMP '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+$3->text()+")");
    delete($3);
}
  | TIMESTAMP                WITH TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
  | TIMESTAMP                WITHOUT TIME ZONE
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
  | TIMESTAMP
{
    $$ = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
;

numeric_type:
    exact_numeric_type
  | approximate_numeric_type
;

exact_numeric_type:
    NUMERIC '(' INTNUM ',' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NUMERIC("+$3->text()+","+$5->text()+")");
    delete($3);delete($5);
}
  | NUMERIC '(' INTNUM            ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NUMERIC("+$3->text()+")");
    delete($3);
}
  | NUMERIC
{
    $$ = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
  | DECIMAL '(' INTNUM ',' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "DECIMAL("+$3->text()+","+$5->text()+")");
    delete($3);delete($5);
}
  | DECIMAL '(' INTNUM            ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "DECIMAL("+$3->text()+")");
    delete($3);
}
  | DECIMAL
{
    $$ = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
  | DEC '(' INTNUM ',' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "DEC("+$3->text()+","+$5->text()+")");
    delete($3);delete($5);
}
  | DEC '(' INTNUM            ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "DEC("+$3->text()+")");
    delete($3);
}
  | DEC
{
    $$ = Node::makeTerminalNode(E_STRING, "DEC");
}
  | SMALLINT
{
    $$ = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
  | INTEGER
{
    $$ = Node::makeTerminalNode(E_STRING, "INTEGER");
}
  | INT
{
    $$ = Node::makeTerminalNode(E_STRING, "INT");
}
  | BIGINT
{
    $$ = Node::makeTerminalNode(E_STRING, "BIGINT");
}
;

approximate_numeric_type:
    FLOAT '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "FLOAT("+$3->text()+")");
    delete($3);
}
  | FLOAT
{
    $$ = Node::makeTerminalNode(E_STRING, "FLOAT");
}
  | REAL
{
    $$ = Node::makeTerminalNode(E_STRING, "REAL");
}
  | DOUBLE PRECISION
{
    $$ = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
;

character_string_type:
    CHARACTER '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTER("+$3->text()+")");
    delete($3);
}
  | CHARACTER
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
  | CHAR '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHAR("+$3->text()+")");
    delete($3);
}
  | CHAR
{
    $$ = Node::makeTerminalNode(E_STRING, "CHAR");
}
  | CHARACTER VARYING '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+$4->text()+")");
    delete($4);
}
  | CHAR VARYING '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+$4->text()+")");
    delete($4);
}
  | VARCHAR '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "VARCHAR("+$3->text()+")");
    delete($3);
}
  | CHARACTER LARGE OBJECT '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+$5->text()+")");
    delete($5);
}
  | CHARACTER LARGE OBJECT
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
  | CHAR LARGE OBJECT '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+$5->text()+")");
    delete($5);
}
  | CHAR LARGE OBJECT
{
    $$ = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
  | CLOB '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "CLOB("+$3->text()+")");
    delete($3);
}
  | CLOB
{
    $$ = Node::makeTerminalNode(E_STRING, "CLOB");
}
;

binary_large_object_string_type:
    BINARY LARGE OBJECT '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+$5->text()+")");
    delete($5);
}
  | BINARY LARGE OBJECT
{
    $$ = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
  | BLOB '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "BLOB("+$3->text()+")");
    delete($3);
}
  | BLOB
{
    $$ = Node::makeTerminalNode(E_STRING, "BLOB");
}
;

national_character_string_type:
    NATIONAL CHARACTER '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+$4->text()+")");
    delete($4);
}
  | NATIONAL CHARACTER
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
  | NATIONAL CHAR '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+$4->text()+")");
    delete($4);
}
  | NATIONAL CHAR
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
  | NCHAR '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NCHAR("+$3->text()+")");
    delete($3);
}
  | NCHAR
{
    $$ = Node::makeTerminalNode(E_STRING, "NCHAR");
}
  | NATIONAL CHARACTER VARYING '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+$5->text()+")");
    delete($5);
}
  | NATIONAL CHAR VARYING '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+$5->text()+")");
    delete($5);
}
  | NCHAR VARYING '(' INTNUM ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+$4->text()+")");
    delete($4);
}
  | NATIONAL CHARACTER LARGE OBJECT '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+$6->text()+")");
    delete($6);
}
  | NATIONAL CHARACTER LARGE OBJECT
{
    $$ = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
  | NCHAR LARGE OBJECT '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+$5->text()+")");
    delete($5);
}
  | NCHAR LARGE OBJECT
{
    $$ = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
  | NCLOB '(' large_object_length ')'
{
    $$ = Node::makeTerminalNode(E_STRING, "NCLOB("+$3->text()+")");
    delete($3);
}
  | NCLOB
{
    $$ = Node::makeTerminalNode(E_STRING, "NCLOB");
}
;

large_object_length:
    INTNUM multiplier char_length_units
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" "+$2->text()+" "+$3->text());
    delete($1);delete($2);delete($3);
}
  | INTNUM multiplier
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" "+$2->text());
    delete($1);delete($2);
}
  | INTNUM            char_length_units
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text()+" "+$2->text());
    delete($1);delete($2);
}
  | INTNUM
{
    $$ = Node::makeTerminalNode(E_STRING, $1->text());
    delete($1);
}
;

char_length_units:
    CHARACTERS
{
    $$ = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
  | CODE_UNITS
{
    $$ = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
  | OCTETS
{
    $$ = Node::makeTerminalNode(E_STRING, "OCTETS");
}
;

multiplier:
    K
{
    $$ = Node::makeTerminalNode(E_STRING, "K");
}
  | M
{
    $$ = Node::makeTerminalNode(E_STRING, "M");
}
  | G
{
    $$ = Node::makeTerminalNode(E_STRING, "G");
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

all_some_any:
    ALL		{ $$ = 0; }
  | SOME	{ $$ = 1; }
  | ANY		{ $$ = 2; }

relation_name:
    NAME
;

column_label:
    NAME
  | STRING
;

/*  */
collate_clause:
    COLLATE relation_factor
{
    $$ = Node::makeTerminalNode(E_STRING, "COLLATE "+$2->text());
    delete($2);
}
;

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
