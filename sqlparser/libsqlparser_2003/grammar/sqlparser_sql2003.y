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
#include "serialize_format.h"

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
    NodeType nodetype;
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

//%right 	COLLATE
//%left	OR
//%left	AND
//%right 	NOT
//%left 	COMP_LE COMP_LT COMP_EQ COMP_GT COMP_GE COMP_NE
//%left 	CNNOP
//%left 	LIKE
//%nonassoc BETWEEN
//%nonassoc IN
//%nonassoc IS NULLX BOOL UNKNOWN
//%left 	'+' '-'
//%left 	'*' '/' '%' MOD
//%left 	'^'
%right 	UMINUS
%left 	'(' ')'
//%left '.'


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
%token IN INNER INSERT INT INTEGER INTERSECT INTERVAL
       INTO IS
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
%token VALUES VARCHAR VARYING VAR_POP VAR_SAMP
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
%type <node> insert_stmt
%type <node> insert_columns_and_source from_constructor
%type <node> opt_from_clause table_factor_non_join data_type
%type <node> label opt_as_label as_label
%type <node> select_with_parens query_expression query_expression_body
%type <node> query_term query_primary simple_table
%type <node> select_expr_list
%type <node> opt_where opt_groupby opt_order_by order_by opt_having
%type <node> sort_list sort_key opt_asc_desc
%type <node> opt_distinct distinct_or_all projection
%type <node> from_list table_factor table_term relation_factor joined_table
%type <node> join_type
%type <ival> join_outer
%type <node> expr_const
%type <node> search_condition boolean_term boolean_factor boolean_test boolean_primary truth_value
%type <node> predicate row_expr row_expr_list factor0 factor1 factor2 factor3 factor4
%type <nodetype> comp_op plus_minus_op star_div_percent_mod_op comp_all_some_any_op
%type <node> column_ref
%type <node> case_expr func_expr in_expr function_call_keyword
%type <node> case_arg when_clause_list when_clause case_default
%type <node> with_clause with_list common_table_expr opt_derived_column_list
%type <node> simple_ident_list simple_ident_list_with_parens opt_simple_ident_list_with_parens
%type <node> over_clause row_or_range_clause window_frame_extent
%type <node> aggregate_windowed_function ranking_windowed_function scalar_function
%type <node> aggregate_function_name ranking_function_name
%type <node> update_elem_list update_elem
%type <node> collate_clause
%type <ival> all_some_any
%type <node> user_defined_type_name reference_type collection_type predefined_type boolean_type
%type <node> datetime_type numeric_type exact_numeric_type approximate_numeric_type character_string_type
%type <node> binary_large_object_string_type national_character_string_type
%type <node> large_object_length multiplier char_length_units
%type <node> interval_type interval_qualifier start_field end_field
%type <node> single_datetime_field non_second_primary_datetime_field
%type <node> name_r

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
  | insert_stmt
;

insert_stmt:
    INSERT INTO relation_factor insert_columns_and_source
{
    $$ = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, $3, $4);
    $$->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
;

insert_columns_and_source:
    				  select_stmt
{
    $$ = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, $1);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
  | simple_ident_list_with_parens select_stmt
{
    $$ = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
  | simple_ident_list_with_parens from_constructor
{
    $$ = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
  |                               from_constructor
{
    $$ = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, $1);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
  | DEFAULT VALUES
{
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    $$ = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    $$->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
;

from_constructor:
    VALUES row_expr_list
{
    $$ = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, $2);
    $$->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
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
    row_expr COMP_EQ row_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
;

/* sql2003 support <direct select statement: multiple rows> */
select_stmt:
    query_expression opt_order_by
{
    $$ = $1;
    $$->setChild(E_DIRECT_SELECT_ORDER, $2);
}
;

query_expression:
    query_expression_body %prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, $1, nullptr, nullptr);
    $$->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
  | with_clause query_expression_body
{
    $$ = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, $1, $2, nullptr, nullptr);
    $$->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}

query_expression_body:
    query_term
  | query_expression_body UNION opt_distinct query_term
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
  | query_expression_body EXCEPT opt_distinct query_term
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

query_term:
    query_primary
  | query_term INTERSECT opt_distinct query_primary
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
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    $$->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
;

query_primary:
    simple_table
  | '(' query_expression_body ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

select_with_parens:
    '(' query_expression ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

simple_table:
    SELECT opt_distinct select_expr_list opt_from_clause opt_where opt_groupby opt_having
{
    $$ = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    $2,             /* E_SELECT_DISTINCT 0 */
                    $3,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                    $4,             /* E_SELECT_FROM_LIST 2 */
                    $5,             /* E_SELECT_OPT_WHERE 3 */
                    $6,             /* E_SELECT_GROUP_BY 4 */
                    $7,             /* E_SELECT_HAVING 5 */
                    nullptr,        /* E_SELECT_SET_OPERATION 6 */
                    nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                    nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                    nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                    nullptr,        /* E_SELECT_ORDER_BY 10 */
                    nullptr,        /* E_SELECT_LIMIT 11 */
                    nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    nullptr,        /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            nullptr         /* E_SELECT_OPT_INTO 18 */
                    );
    $$->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
;

opt_where:
    /*EMPTY*/	{ $$ = nullptr; }
  | WHERE search_condition
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
  | GROUP BY opt_distinct row_expr_list
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
    row_expr opt_asc_desc
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
  | HAVING search_condition
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
    name_r opt_derived_column_list AS select_with_parens
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
    name_r
  | name_r ',' simple_ident_list
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
    row_expr opt_as_label
{
    if (!$2) {
    	$$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, $1);
    	$$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
    else {
	Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, nullptr, nullptr, nullptr);
        alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

        $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
        $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
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
    table_term
  | joined_table
;

table_term:
    table_factor_non_join
  | '(' joined_table ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

/* todo sql2003 support LATERAL subquery */
/* todo sql2003 support <collection derived table> */
/* todo sql2003 support <table function derived table> */
/* todo sql2003 support <only spec> */
table_factor_non_join:
    relation_factor opt_as_label
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, nullptr, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
  | select_with_parens as_label opt_simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, $1, $2, $3, nullptr, nullptr);
    $$->serialize_format = &AS_SERIALIZE_FORMAT;
}
;

opt_simple_ident_list_with_parens:
    /*EMPTY*/	{ $$ = nullptr; }
  | simple_ident_list_with_parens
;

/* keep these that can solve <identifier chain> in sql2003 */
column_ref:
		 			    name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
    |   		           name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$3, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |   			   name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
    |		          name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$5, $3, $1, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |		          name_r '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $3, $1, nullptr, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
    |	         name_r '.' name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$7, $5, $3, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            name_r '.' name_r '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $5, $3, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |	         name_r '.'      '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$6, $4, nullptr, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |            name_r '.'      '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $4, nullptr, $1, nullptr);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
    |   name_r '.' name_r '.' name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$9, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.' name_r '.' name_r '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $7, $5, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.'      '.' name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$8, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.'      '.' name_r '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $6, $4, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.' name_r '.'      '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$8, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.' name_r '.'      '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $6, nullptr, $3, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.'      '.'      '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			$7, $5, nullptr, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
    |   name_r '.'      '.'      '.' name_r '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, $5, nullptr, nullptr, $1);
    $$->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
;

/* keep these that can solve <identifier chain> in sql2003 */
relation_factor:
    	                         name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $1, nullptr, nullptr, nullptr);
    $$->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
  |                     name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $3, $1, nullptr, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
  |            name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $5, $3, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |            name_r '.'      '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $4, nullptr, $1, nullptr);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
  |   name_r '.' name_r '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $7, $5, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   name_r '.'      '.' name_r '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $6, $4, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   name_r '.' name_r '.'      '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $6, nullptr, $3, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
  |   name_r '.'      '.'      '.' name_r
{
    $$ = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, $5, nullptr, nullptr, $1);
    $$->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
;

joined_table:
    table_factor join_type JOIN table_term ON search_condition
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, $2, $1, $4, $6);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_term ON search_condition
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $3, $5);
    $$->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
  | table_factor join_type JOIN table_term USING simple_ident_list_with_parens
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, $2, $1, $4, $6);
    $$->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
  | table_factor JOIN table_term USING simple_ident_list_with_parens
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $3, $5);
    $$->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
  | table_factor CROSS JOIN table_term
{
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $4, nullptr);
    $$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
  | table_factor NATURAL join_type JOIN table_term
{
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + $3->text());
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, $1, $5, nullptr);
    $$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
;

join_type:
    FULL join_outer
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER");
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_FULL, "FULL");
    }
}
  | LEFT join_outer
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER");
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT");
    }
}
  | RIGHT join_outer
{
    if ($2)
    {
        $$ = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER");
    }
    else
    {
        $$ = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT");
    }
}
  | INNER
{
    $$ = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
;

join_outer:
    /* EMPTY */                 { $$ = 0; }
  | OUTER                       { $$ = 1; /*this is a flag*/}
;

/* <search condition> grammar */
search_condition:
    boolean_term
  | search_condition OR boolean_term
{
    $$ = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_OR);
}
;

boolean_term:
    boolean_factor
  | boolean_term AND boolean_factor
{
    $$ = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_AND);
}
;

boolean_factor:
    boolean_test
  | NOT boolean_factor
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
;

boolean_test:
    boolean_primary
  | boolean_primary IS truth_value
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_IS);
}
  | boolean_primary IS NOT truth_value
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
;

boolean_primary:
    predicate
  | '(' search_condition ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

predicate:
    row_expr comp_op row_expr
{
    $$ = Node::makeNonTerminalNode($2, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format($2);
}
  | row_expr comp_all_some_any_op select_with_parens
{
    $$ = Node::makeNonTerminalNode($2, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format($2);
}
  | row_expr BETWEEN row_expr AND row_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, $1, $3, $5);
    $$->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
  | row_expr NOT BETWEEN row_expr AND row_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, $1, $4, $6);
    $$->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
  | row_expr LIKE row_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
  | row_expr NOT LIKE row_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
  | row_expr IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_IN);
}
  | row_expr NOT IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
  | row_expr IS NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_IS);
}
  | row_expr IS NOT NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, $1, $4);
    $$->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
  | EXISTS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
;

/* <row value ctor> */
row_expr:
    factor0
  | row_expr collate_clause
{
    $$ = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
  | row_expr CNNOP factor0
{
    $$ = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_CNN);
}
;

factor0:
    factor1
  | factor0 plus_minus_op factor1
{
    $$ = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format($2);
}
;

factor1:
    factor2
  | factor1 star_div_percent_mod_op factor2
{
    $$ = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format($2);
}
;

factor2:
    factor3
  | factor2 '^' factor3
{
    $$ = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, $1, $3);
    $$->serialize_format = Node::op_serialize_format(E_OP_POW);
}
;

factor3:
    factor4
  | '+' factor3
{
    $$ = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = Node::op_serialize_format(E_OP_POS);
}
  | '-' factor3
{
    $$ = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, $2);
    $$->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
;

factor4:
    column_ref
  | expr_const
  | '(' row_expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
  | case_expr
  | func_expr
  | select_with_parens
;

row_expr_list:
    row_expr
  | row_expr ',' row_expr_list
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, $1, $3);
    $$->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
;

in_expr:
    select_with_parens
  | '(' row_expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, $2);
    $$->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
;

truth_value: BOOL | UNKNOWN
;

comp_op:
    COMP_LE	{ $$ = E_OP_LE; }
  | COMP_LT	{ $$ = E_OP_LT; }
  | COMP_GE	{ $$ = E_OP_GE; }
  | COMP_GT	{ $$ = E_OP_GT; }
  | COMP_EQ	{ $$ = E_OP_EQ; }
  | COMP_NE	{ $$ = E_OP_NE; }
;

comp_all_some_any_op:
    comp_op all_some_any
{
    $$ = Node::comp_all_some_any_op_form($1, $2);
}
;

plus_minus_op:
    '+'		{ $$ = E_OP_ADD; }
  | '-'		{ $$ = E_OP_MINUS; }
;

star_div_percent_mod_op:
    '*'		{ $$ = E_OP_MUL; }
  | '/'		{ $$ = E_OP_DIV; }
  | '%'		{ $$ = E_OP_REM; }
  | MOD		{ $$ = E_OP_MOD; }
;

expr_const:
    STRING
  | BOOL
  | NULLX
  | INTNUM
  | APPROXNUM
  | QUESTIONMARK
  | DEFAULT		{ $$ = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
;

/* sql2003 support <simple case> <searched case> */
case_expr:
    CASE case_arg when_clause_list case_default END
{
    $$ = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, $2, $3, $4);
    $$->serialize_format = Node::op_serialize_format(E_CASE);
}
;

case_arg:
    /*EMPTY*/	{ $$ = nullptr; }	/* sql2003 support <searched case> */
  | row_expr				/* sql2003 support <simple case> */
;

when_clause_list:
    when_clause
  | when_clause when_clause_list
{
    $$ = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, $1, $2);
    $$->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
;

when_clause:
    WHEN search_condition THEN row_expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, $2, $4);
    $$->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
  | WHEN row_expr THEN row_expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, $2, $4);
    $$->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
;

case_default:
    /*EMPTY*/	{ $$ = nullptr; }
  | ELSE row_expr
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
;

/* todo */
aggregate_windowed_function:
    aggregate_function_name '('                 row_expr ')' over_clause
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $3, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | aggregate_function_name '('                 row_expr ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | aggregate_function_name '(' distinct_or_all row_expr ')' over_clause
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $4, $6, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  | aggregate_function_name '(' distinct_or_all row_expr ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $4, nullptr, $3, nullptr);
    $$->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
  | aggregate_function_name '('                 '*'  ')' over_clause
{
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR($1))
    {
        yyerror(&@1, result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, star, $5, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | aggregate_function_name '('                 '*'  ')'
{
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR($1))
    {
        yyerror(&@1, result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, star, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

aggregate_function_name:
    AVG			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
  | MAX			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
  | MIN			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
  | SUM			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
  | STDDEV_POP		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
  | STDDEV_SAMP		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
  | VAR_POP		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
  | VAR_SAMP		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
  | COUNT		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
  | GROUPING		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
;

ranking_windowed_function:
    ranking_function_name '('                      ')' over_clause
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, nullptr, $4, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
;

ranking_function_name:
    RANK		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
  | DENSE_RANK		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
  | ROW_NUMBER		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
;

scalar_function:
    relation_factor '('                      ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | relation_factor '('            row_expr_list ')'
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
    non_second_primary_datetime_field '(' row_expr ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		$1, $3, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | RIGHT '(' ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  | LEFT '(' ')'
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    $$->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
  |                            CAST '('    row_expr AS data_type ')'	/* sql2003 support <cast specification> */
{
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, $3, nullptr, nullptr, $5);
    $$->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
  |                         CONVERT '(' row_expr USING relation_factor ')'	/* sql2003 support <transcoding> */
{
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, $5->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete($5);
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, $3, nullptr, nullptr, transcoding_name);
    $$->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
  |                        COALESCE '('            row_expr_list ')'	/* sql2003 support <case abbreviation> */
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
  |                        NULLIF '('          row_expr ',' row_expr ')'	/* sql2003 support <case abbreviation> */
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

over_clause:
    OVER '(' PARTITION BY row_expr_list order_by row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, $6, $7);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '('                        order_by row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, $3, $4);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY row_expr_list          row_or_range_clause ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, nullptr, $6);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY row_expr_list order_by                     ')'
{
    $$ = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, $5, $6, nullptr);
    $$->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
  | OVER '(' PARTITION BY row_expr_list                              ')'
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
;

opt_as_label:
    /* EMPTY */	{ $$ = nullptr; }
  | as_label
;

as_label:
    AS label	{ $$ = $2; }
  | label
;

label:
    name_r
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


/* NAME with some non-reserved words tested in sqlserver */
name_r:
    NAME
  | aggregate_function_name	%prec UMINUS
  | ranking_function_name	%prec UMINUS
  | non_second_primary_datetime_field	%prec UMINUS
  | K			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
  | M			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
  | G			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
  | ARRAY		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
  | BINARY		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
  | CAST %prec UMINUS	{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
  | CHARACTERS		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
  | CODE_UNITS		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
  | CORRESPONDING	{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
  | FOLLOWING		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
  | INTERVAL		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
  | LARGE		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
  | MULTISET		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
  | OBJECT		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
  | OCTETS		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
  | ONLY		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
  | PARTITION		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
  | PRECEDING		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
  | PRECISION		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
  | RANGE		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
  | RECURSIVE		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
  | REF			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
  | ROW			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
  | ROWS		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
  | SCOPE		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
  | SECOND		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
  | UNBOUNDED		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
  | VARCHAR		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
  | WITHOUT		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
  | ZONE		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
  | ERROR		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "ERROR"); }
  | FOR			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
  | OF			{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
  | READ		{ $$ = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
;

%%
/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
