%output  "sqlparser_bison.cpp"
%defines "sqlparser_bison.h"

%{
#include <stdint.h>
#include <stdarg.h>
#include "node.h"
#include "sqlparser_flex.h"

extern void yyerror(void* yylloc, ParseResult* p, char* s,...);
extern int yylineno;
%}

%define api.pure
%parse-param {ParseResult* result}
%locations
%no-lines
/*%verbose*/


%union
{
    struct Node* node;
    int    ival;
}

%destructor { delete($$); }<node>

%token <node> NAME
%token <node> STRING
%token <node> INTNUM
%token <node> BOOL
%token <node> APPROXNUM
%token <node> NULLX
%token <node> UNKNOWN
%token <node> QUESTIONMARK

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
       CONSISTENT COLUMN COLUMNS CREATE CREATETIME CROSS
       CURRENT_USER CHANGE_OBI SWITCH_CLUSTER
%token DATE DATETIME DEALLOCATE DECIMAL DEFAULT DELETE DESC DESCRIBE
       DISTINCT DOUBLE DROP DUAL
%token ELSE END END_P ERROR EXCEPT EXECUTE EXISTS EXPLAIN
%token FLOAT FOR FROM FULL FROZEN FORCE
%token GLOBAL GLOBAL_ALIAS GRANT GROUP
%token HAVING HINT_BEGIN HINT_END HOTSPOT
%token IDENTIFIED IF IN INNER INTEGER INTERSECT INSERT INTO IS
%token JOIN
%token KEY
%token LEADING LEFT LIMIT LIKE LOCAL LOCKED
%token MEDIUMINT MEMORY MOD MODIFYTIME MASTER
%token NATURAL NOT NUMERIC
%token OFFSET ON OR ORDER OPTION OUTER
%token PARAMETERS PASSWORD PRECISION PREPARE PRIMARY
%token READ_STATIC REAL RENAME REPLACE RESTRICT PRIVILEGES REVOKE RIGHT
       ROLLBACK KILL READ_CONSISTENCY
%token SCHEMA SCOPE SELECT SESSION SESSION_ALIAS
       SET SHOW SMALLINT SNAPSHOT SPFILE START STATIC SYSTEM STRONG SET_MASTER_CLUSTER SET_SLAVE_CLUSTER SLAVE
%token TABLE TABLES THEN TIME TIMESTAMP TINYINT TRAILING TRANSACTION TO
%token UNION UPDATE USER USING
%token VALUES VARCHAR VARBINARY
%token WHERE WHEN WITH WORK PROCESSLIST QUERY CONNECTION WEAK

%type <node> sql_stmt stmt_list stmt
%type <node> select_stmt

%type <node> from_dual from_clause table_factor_non_join data_type opt_when opt_hint
%type <node> column_name relation_name function_name column_label

%type <node> select_with_parens select_no_parens select_clause
%type <node> simple_select no_table_select select_limit select_expr_list
%type <node> opt_where opt_groupby opt_order_by order_by opt_having
%type <node> opt_select_limit limit_expr opt_for_update
%type <node> sort_list sort_key opt_asc_desc
%type <node> opt_distinct distinct_or_all projection
%type <node> from_list table_factor relation_factor joined_table
%type <node> join_type join_outer

%type <node> expr_list expr expr_const arith_expr simple_expr
%type <node> column_ref
%type <node> case_expr func_expr in_expr
%type <node> case_arg when_clause_list when_clause case_default

%start sql_stmt
%%

sql_stmt:
    stmt_list END_P
{
    $$ = $1;
    result->result_tree_ = $1;
    YYACCEPT;
}
;

stmt_list:  stmt
    |   stmt ';' stmt_list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", "; ", "{1}"};
}
;

stmt:
    select_stmt
;

/* SELECT GRAMMAR */
select_stmt:
    select_no_parens opt_when   %prec UMINUS
{
    $$ = $1;
    $$->setChild(E_SELECT_WHEN, $2);
}
    |   select_with_parens  %prec UMINUS
{
    $$ = $1;
}
;

select_with_parens:
    '(' select_no_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, $2);
    $$->serialize_format = {"( ", "{0}", " )"};
}
    |   '(' select_with_parens ')'
{
    $$ = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, $2);
    $$->serialize_format = {"( ", "{0}", " )"};
}
;

select_no_parens:
    no_table_select
    |   simple_select opt_for_update
{
    $$ = $1;
    $1->setChild(E_SELECT_FOR_UPDATE, $2);
}
    |   select_clause order_by opt_for_update
{
    $$ = $1;
    $$->setChild(E_SELECT_ORDER_BY, $2);
    $$->setChild(E_SELECT_FOR_UPDATE, $3);
}
    |   select_clause opt_order_by select_limit opt_for_update
{
    $$ = $1;
    $$->setChild(E_SELECT_ORDER_BY, $2);
    $$->setChild(E_SELECT_LIMIT, $3);
    $$->setChild(E_SELECT_FOR_UPDATE, $4);
}
;

no_table_select:
    SELECT opt_hint opt_distinct select_expr_list opt_select_limit
{
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
            $3,             /* E_SELECT_DISTINCT 0 */
            $4,             /* E_SELECT_SELECT_EXPR_LIST 1 */
            nullptr,        /* E_SELECT_FROM_LIST 2 */
            nullptr,        /* E_SELECT_OPT_WHERE 3 */
            nullptr,        /* E_SELECT_GROUP_BY 4 */
            nullptr,        /* E_SELECT_HAVING 5 */
            nullptr,        /* E_SELECT_SET_OPERATION 6 */
            nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
            nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
            nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
            nullptr,        /* E_SELECT_ORDER_BY 10 */
            $5,             /* E_SELECT_LIMIT 11 */
            nullptr,        /* E_SELECT_FOR_UPDATE 12 */
            $2,             /* E_SELECT_HINTS 13 */
            nullptr         /* E_SELECT_WHEN 14 */
            );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
    |   SELECT opt_hint opt_distinct select_expr_list
            from_dual opt_where opt_select_limit
{
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
                $3,             /* E_SELECT_DISTINCT 0 */
                $4,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                $5,             /* E_SELECT_FROM_LIST 2 */
                $6,             /* E_SELECT_OPT_WHERE 3 */
                nullptr,        /* E_SELECT_GROUP_BY 4 */
                nullptr,        /* E_SELECT_HAVING 5 */
                nullptr,        /* E_SELECT_SET_OPERATION 6 */
                nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                nullptr,        /* E_SELECT_ORDER_BY 10 */
                $7,             /* E_SELECT_LIMIT 11 */
                nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                $2,             /* E_SELECT_HINTS 13 */
                nullptr         /* E_SELECT_WHEN 14 */
                );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
;

select_clause:
    simple_select
  | select_with_parens
;

simple_select:
    SELECT opt_hint opt_distinct select_expr_list
    from_clause
    opt_where opt_groupby opt_having
{
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
                    $3,             /* E_SELECT_DISTINCT 0 */
                    $4,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                    $5,             /* E_SELECT_FROM_LIST 2 */
                    $6,             /* E_SELECT_OPT_WHERE 3 */
                    $7,             /* E_SELECT_GROUP_BY 4 */
                    $8,             /* E_SELECT_HAVING 5 */
                    nullptr,        /* E_SELECT_SET_OPERATION 6 */
                    nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                    nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                    nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                    nullptr,        /* E_SELECT_ORDER_BY 10 */
                    nullptr,        /* E_SELECT_LIMIT 11 */
                    nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                    $2,             /* E_SELECT_HINTS 13 */
                    nullptr         /* E_SELECT_WHEN 14 */
                    );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
    |   select_clause UNION opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
    | select_clause INTERSECT opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
    | select_clause EXCEPT opt_distinct select_clause
{
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
;

opt_where:
    /* EMPTY */
{
    $$ = nullptr;
}
    | WHERE expr
{
    $$ = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, $2);
    $$->serialize_format = {"WHERE", "{0}"};
}
;

from_dual:
    FROM DUAL
{
    $$ = Node::makeNonTerminalNode(E_FROM_CLAUSE, 0);
    $$->serialize_format = {"FROM", "DUAL"};
}
;

from_clause:
    FROM from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, $2);
    $$->serialize_format = {"FROM", "{0}"};
}
;

select_limit:
    LIMIT limit_expr OFFSET limit_expr
{
    $$ = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, $2, $4);
    $$->serialize_format = {"LIMIT", "{0}", "OFFSET", "{1}"};
}
    |   OFFSET limit_expr LIMIT limit_expr
{
    $$ = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, $4, $2);
    $$->serialize_format = {"OFFSET", "{1}", "LIMIT", "{0}"};
}
    |   LIMIT limit_expr
{
    $$ = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, $2, nullptr);
    $$->serialize_format = {"LIMIT", "{0}"};
}
    |   OFFSET limit_expr
{
    $$ = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, $2);
    $$->serialize_format = {"OFFSET", "{1}"};
}
    |   LIMIT limit_expr ',' limit_expr
{
    $$ = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, $4, $2);
    $$->serialize_format = {"LIMIT", "{1}", ",", "{0}"};
}
;

opt_hint:
    /* EMPTY */
{
    $$ = nullptr;
}
;

limit_expr:
    INTNUM
{
    $$ = $1;
}
  | QUESTIONMARK
{
    $$ = $1;
}
;

opt_select_limit:
    /* EMPTY */
{ $$ = nullptr; }
  | select_limit
{ $$ = $1; }
;

opt_for_update:
    /* EMPTY */
{ $$ = nullptr; }
  | FOR UPDATE
{
    $$ = Node::makeTerminalNode(E_BOOL, "FOR UPDATE");
    $$->terminalToken_.i = 1;
}
;

opt_groupby:
    /* EMPTY */
{ $$ = nullptr; }
  | GROUP BY expr_list
{
    $$ = Node::makeNonTerminalNode(E_GROUP_BY, 1, $3);
    $$->serialize_format = {"GROUP", "BY", "{0}"};
}
;

opt_order_by:
  	order_by	              { $$ = $1;}
  | /*EMPTY*/             { $$ = nullptr; }
;

order_by:
  	ORDER BY sort_list
{
    $$ = Node::makeNonTerminalNode(E_ORDER_BY, 1, $3);
    $$->serialize_format = {"ORDER", "BY", "{0}"};
}
;

sort_list:
  	sort_key
{ $$ = $1; }
  | sort_key ',' sort_list
{
    $$ = Node::makeNonTerminalNode(E_SORT_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ",", "{1}"};
}
;

sort_key:
    expr opt_asc_desc
{
    $$ = Node::makeNonTerminalNode(E_SORT_KEY, 2, $1, $2);
    $$->serialize_format = {"{0}", "{1}"};
}
;

opt_asc_desc:
    /* EMPTY */
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
    /* EMPTY */
{ $$ = nullptr; }
  | HAVING expr
{
  $$ = Node::makeNonTerminalNode(E_HAVING, 1, $2);
  $$->serialize_format = {"HAVING", "{0}"};
}
;

opt_distinct:
    /* EMPTY */
{
    $$ = nullptr;
}
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
    |   projection ',' select_expr_list
{
    $$ = Node::makeNonTerminalNode(SELECT_EXPR_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ",", "{1}"};
}
;

projection:
    expr
{
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, $1);
    $$->serialize_format = {"{0}"};
}
  | expr column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $2);
    alias_node->serialize_format = {"{0}", "{1}"};

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    $$->serialize_format = {"{0}"};
}
  | expr AS column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $3);
    alias_node->serialize_format = {"{0}", "AS", "{1}"};

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    $$->serialize_format = {"{0}"};
}
  | '*'
{
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    $$->serialize_format = {"{0}"};
}
;

from_list:
  	table_factor
{ $$ = $1; }
  | table_factor ',' from_list
{
    $$ = Node::makeNonTerminalNode(E_FROM_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ",", "{1}"};
}
;

table_factor:   table_factor_non_join
  | joined_table
{
    $$ = $1;
}
;

table_factor_non_join:
    relation_factor
{
    $$ = $1;
}
  | relation_factor AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $3);
    $$->serialize_format = {"{0}", "AS", "{1}"};
}
  | relation_factor relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $2);
    $$->serialize_format = {"{0}", "{1}"};
}
  | select_with_parens AS relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $3);
    $$->serialize_format = {"{0}", "AS", "{1}"};
}
  | select_with_parens relation_name
{
    $$ = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $2);
    $$->serialize_format = {"{0}", "{1}"};
}

relation_factor:
    relation_name
{ $$ = $1; }
;

joined_table:
    '(' joined_table ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, $2);
    $$->serialize_format = {"(", "{0}", ")"};
}
  | table_factor join_type JOIN table_factor ON expr
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, $2, $1, $4, $6);
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "ON", "{3}"};
}
  | table_factor JOIN table_factor ON expr
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $3, $5);
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "ON", "{3}"};
}
  | table_factor NATURAL JOIN table_factor_non_join
{
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $4, nullptr);
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}"};
}
  | table_factor join_type JOIN table_factor USING '(' column_ref ')'
{
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, $2, $1, $4, $7);
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "USING", "(", "{3}", ")"};
}
  | table_factor JOIN table_factor USING '(' column_ref ')'
{
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    $$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $3, $6);
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "USING", "(", "{3}", ")"};
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
  | CROSS
{
    $$ = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
;

join_outer:
    OUTER                       { $$ = (Node*)1; /*this is a flag*/}
  | /* EMPTY */                 { $$ = nullptr; }
;

opt_when:
    /* EMPTY */
    { $$ = NULL; }
  | WHEN expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, 1, $2);
    $$->serialize_format = {"WHEN", "{0}"};
}
;

/* expression grammar */
expr_list:  expr
    |   expr ',' expr_list
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ",", "{1}"};
}
;

column_ref: column_name
    |   relation_name '.' column_name
{
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, $1, $3);
    $$->serialize_format = {"{0}", ".", "{1}"};
}
    |   relation_name '.' '*'
{
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, $1, nd);
    $$->serialize_format = {"{0}", ".", "{1}"};
}
;

expr_const: STRING
    |   INTNUM
    |   APPROXNUM
    |   BOOL
    |   NULLX
    |   QUESTIONMARK
;

/* todo when_func */
simple_expr:    column_ref
    |   expr_const
    |   '('  expr_list ')'
{
    // expect cover '(' expr ')'
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = {"(", "{0}", ")"};
}
    |   case_expr
    |   func_expr
    |   select_with_parens  %prec UMINUS
    |   EXISTS select_with_parens
{
    $$ = Node::makeNonTerminalNode(E_OP_EXISTS, 1, $2);
    $$->serialize_format = {"EXISTS", "{0}"};
}
;

/* used by the expression that use range value, e.g. between and */
arith_expr: simple_expr
    |   '+' arith_expr %prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_POS, 1, $2);
    $$->serialize_format = {"+", "{0}"};
}
    |   '-' arith_expr %prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OP_NEG, 1, $2);
    $$->serialize_format = {"-", "{0}"};
}
    |   arith_expr '+' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_ADD, 2, $1, $3);
    $$->serialize_format = {"{0}", "+", "{1}"};
}
    |   arith_expr '-' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MINUS, 2, $1, $3);
    $$->serialize_format = {"{0}", "-", "{1}"};
}
    |   arith_expr '*' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MUL, 2, $1, $3);
    $$->serialize_format = {"{0}", "*", "{1}"};
}
    |   arith_expr '/' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_DIV, 2, $1, $3);
    $$->serialize_format = {"{0}", "/", "{1}"};
}
    |   arith_expr '%' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_REM, 2, $1, $3);
    $$->serialize_format = {"{0}", "%", "{1}"};
}
    |   arith_expr '^' arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_POW, 2, $1, $3);
    $$->serialize_format = {"{0}", "^", "{1}"};
}
    |   arith_expr MOD arith_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_MOD, 2, $1, $3);
    $$->serialize_format = {"{0}", "MOD", "{1}"};
}
;

expr:   arith_expr
    |   expr COMP_LE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LE, 2, $1, $3);
    $$->serialize_format = {"{0}", "<=", "{1}"};
}
    |   expr COMP_LT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LT, 2, $1, $3);
    $$->serialize_format = {"{0}", "<", "{1}"};
}
    |   expr COMP_EQ expr
{
    $$ = Node::makeNonTerminalNode(E_OP_EQ, 2, $1, $3);
    $$->serialize_format = {"{0}", "=", "{1}"};
}
    |   expr COMP_GE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GE, 2, $1, $3);
    $$->serialize_format = {"{0}", ">=", "{1}"};
}
    |   expr COMP_GT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_GT, 2, $1, $3);
    $$->serialize_format = {"{0}", ">", "{1}"};
}
    |   expr COMP_NE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NE, 2, $1, $3);
    $$->serialize_format = {"{0}", "<>", "{1}"};
}
    |   expr LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_LIKE, 2, $1, $3);
    $$->serialize_format = {"{0}", "LIKE", "{1}"};
}
    |   expr NOT LIKE expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, $1, $4);
    $$->serialize_format = {"{0}", "NOT LIKE", "{1}"};
}
    |   expr AND expr %prec AND
{
    $$ = Node::makeNonTerminalNode(E_OP_AND, 2, $1, $3);
    $$->serialize_format = {"{0}", "AND", "{1}"};
}
    |   expr OR expr %prec OR
{
    $$ = Node::makeNonTerminalNode(E_OP_OR, 2, $1, $3);
    $$->serialize_format = {"{0}", "OR", "{1}"};
}
    |   NOT expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT, 1, $2);
    $$->serialize_format = {"NOT", "{0}"};
}
    |   expr IS NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = {"{0}", "IS", "{1}"};
}
    |   expr IS NOT NULLX
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = {"{0}", "IS NOT", "{1}"};
}
    |   expr IS BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = {"{0}", "IS", "{1}"};
}
    |   expr IS NOT BOOL
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = {"{0}", "IS NOT", "{1}"};
}
    |   expr IS UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS, 2, $1, $3);
    $$->serialize_format = {"{0}", "IS", "{1}"};
}
    |   expr IS NOT UNKNOWN
{
    $$ = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, $1, $4);
    $$->serialize_format = {"{0}", "IS NOT", "{1}"};
}
    |   expr BETWEEN arith_expr AND arith_expr	    %prec BETWEEN
{
    $$ = Node::makeNonTerminalNode(E_OP_BTW, 3, $1, $3, $5);
    $$->serialize_format = {"{0}", "BETWEEN", "{1}", "AND", "{2}"};
}
    |   expr NOT BETWEEN arith_expr AND arith_expr	  %prec BETWEEN
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, $1, $4, $6);
    $$->serialize_format = {"{0}", "NOT BETWEEN", "{1}", "AND", "{2}"};
}
    |   expr IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_IN, 2, $1, $3);
    $$->serialize_format = {"{0}", "IN", "{1}"};
}
    |   expr NOT IN in_expr
{
    $$ = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, $1, $4);
    $$->serialize_format = {"{0}", "NOT IN", "{1}"};
}
    |   expr CNNOP expr
{
    $$ = Node::makeNonTerminalNode(E_OP_CNN, 2, $1, $3);
    $$->serialize_format = {"{0}", "||", "{1}"};
}
;

in_expr:    select_with_parens
    |   '(' expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, $2);
    $$->serialize_format = {"(", "{0}", ")"};
}
;

case_expr:  CASE case_arg when_clause_list case_default END
{
    $$ = Node::makeNonTerminalNode(E_CASE, 3, $2, $3, $4);
    $$->serialize_format = {"CASE", "{0}", "{1}", "{2}", "END"};
}
;

case_arg:   expr
    |   /*EMPTY*/
{
    $$ = nullptr;
}
;

when_clause_list:   when_clause
    |   when_clause when_clause_list
{
    $$ = Node::makeNonTerminalNode(E_WHEN_LIST, 2, $1, $2);
    $$->serialize_format = {"{0}", "{1}"};
}
;

when_clause:    WHEN expr THEN expr
{
    $$ = Node::makeNonTerminalNode(E_WHEN, 2, $2, $4);
    $$->serialize_format = {"WHEN", "{0}", "THEN", "{1}"};
}
;

case_default:   ELSE expr
{
    $$ = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, $2);
    $$->serialize_format = {"ELSE", "{0}"};
}
    |   /*EMPTY*/
{
    $$ = nullptr;
}
;

func_expr:  function_name '(' '*' ')'
{
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 2, $1, star);
    $$->serialize_format = {"{0}", "(", "{1}", ")"};
}
    |   function_name '(' distinct_or_all expr ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 3, $1, $4, $3);
    $$->serialize_format = {"{0}", "(", "{2}", "{1}", ")"};
}
    |   function_name '(' expr_list ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 2, $1, $3);
    $$->serialize_format = {"{0}", "(", "{1}", ")"};
}
    |   function_name '(' expr AS data_type ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 3, $1, $3, $5);
    $$->serialize_format = {"{0}", "(", "{1}", "AS", "{2}", ")"};
}
    |   function_name '(' ')'
{
    $$ = Node::makeNonTerminalNode(E_FUN_CALL, 1, $1);
    $$->serialize_format = {"{0}", "()"};
}
;

distinct_or_all:    ALL
{
    $$ = Node::makeTerminalNode(E_ALL, "ALL");
}
    |   DISTINCT
{
    $$ = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
;

/* Name classification */
column_name:    NAME
;

relation_name:  NAME
;

function_name:  NAME
;

column_label:   NAME
;

data_type:  TINYINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
    |   SMALLINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
    |   MEDIUMINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
    |   INTEGER
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
    |   BIGINT
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
    |   BOOLEAN
{ $$ = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
    |   REAL
{ $$ = Node::makeTerminalNode(E_TYPE_INTEGER, "E_TYPE_DOUBLE"); }
;

%%

void yyerror(void* yylloc, ParseResult* p, char* s, ...)
{
    va_list ap;
    va_start(ap, s);
    fprintf(stderr, "%d: error: ", yylineno);
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");
}