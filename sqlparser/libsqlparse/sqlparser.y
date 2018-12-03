%define api.pure
%parse-param {ParseResult* result}
%locations
%no-lines
%verbose
%{
#include <stdint.h>
#include "flex_lexer.h"
#define YYDEBUG 1
%}

%union
{
    struct Node* nd;
    int    ival;
}

%destructor { delete($$); }<nd>

%token <node> NAME
%token <node> STRING
%token <node> INTNUM
%token <node> DATE_VALUE
%token <node> HINT_VALUE
%token <node> BOOL
%token <node> APPROXNUM
%token <node> NULLX
%token <node> UNKNOWN
%token <node> QUESTIONMARK
%token <node> SYSTEM_VARIABLE
%token <node> TEMP_VARIABLE

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
%type <node> select_stmt insert_stmt update_stmt delete_stmt
%type <node> create_table_stmt opt_table_option_list table_option
%type <node> drop_table_stmt table_list
%type <node> explain_stmt explainable_stmt kill_stmt
%type <node> expr_list expr expr_const arith_expr simple_expr
%type <node> column_ref
%type <node> case_expr func_expr in_expr
%type <node> case_arg when_clause_list when_clause case_default
%type <node> update_asgn_list update_asgn_factor
%type <node> table_element_list table_element column_definition
%type <node> data_type opt_if_not_exists opt_if_exists
%type <node> replace_or_insert opt_insert_columns column_list
%type <node> insert_vals_list insert_vals
%type <node> select_with_parens select_no_parens select_clause
%type <node> simple_select no_table_select select_limit select_expr_list
%type <node> opt_where opt_groupby opt_order_by order_by opt_having
%type <node> opt_select_limit limit_expr opt_for_update
%type <node> sort_list sort_key opt_asc_desc
%type <node> opt_distinct distinct_or_all projection
%type <node> from_list table_factor relation_factor joined_table
%type <node> join_type join_outer
%type <node> opt_float opt_time_precision opt_char_length opt_decimal
%type <node> opt_equal_mark opt_precision opt_verbose
%type <node> opt_column_attribute_list column_attribute
%type <node> show_stmt opt_show_condition opt_like_condition
%type <node> prepare_stmt stmt_name preparable_stmt
%type <node> variable_set_stmt var_and_val_list var_and_val to_or_eq
%type <node> execute_stmt argument_list argument opt_using_args
%type <node> deallocate_prepare_stmt deallocate_or_drop
%type <ival> opt_scope opt_drop_behavior opt_full
%type <node> create_user_stmt user_specification user_specification_list user password
%type <node> drop_user_stmt user_list
%type <node> set_password_stmt opt_for_user
%type <node> rename_user_stmt rename_info rename_list
%type <node> lock_user_stmt lock_spec
%type <node> grant_stmt priv_type_list priv_type priv_level opt_privilege
%type <node> revoke_stmt opt_on_priv_level
%type <node> opt_limit opt_for_grant_user opt_flag opt_is_global
%type <node> parameterized_trim
%type <ival> opt_with_consistent_snapshot opt_config_scope
%type <node> opt_work begin_stmt commit_stmt rollback_stmt
%type <node> alter_table_stmt alter_column_actions alter_column_action
%type <node> opt_column alter_column_behavior
%type <node> alter_system_stmt alter_system_actions alter_system_action
%type <node> server_type opt_cluster_or_address opt_comment
%type <node> column_name relation_name function_name column_label
%type <node> opt_hint opt_hint_list hint_option opt_force
%type <node> when_func when_func_stmt opt_when when_func_name
%type <non_reserved_keyword> unreserved_keyword
%type <ival> consistency_level
%type <node> opt_comma_list hint_options

%type <node> from_dual from_clause

%start sql_stmt
%%

sql_stmt:
    stmt_list END_P
{
    result->result_tree_ = $$;
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
            nullptr,        /* E_SELECT_WHEN 14 */
            );
    $$->serialize_format = SELECT_SERIALIZE_FORMAT;
}
    |   SELECT opt_hint opt_distinct select_expr_list
            from_dual opt_where opt_select_limit
{
    $$ = Node::makeNonTerminalNode(E_SELECT, 15,
                $3,             /* E_SELECT_DISTINCT 0 */
                $4,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                $5,        /* E_SELECT_FROM_LIST 2 */
                $7,             /* E_SELECT_OPT_WHERE 3 */
                nullptr,        /* E_SELECT_GROUP_BY 4 */
                nullptr,        /* E_SELECT_HAVING 5 */
                nullptr,        /* E_SELECT_SET_OPERATION 6 */
                nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                nullptr,        /* E_SELECT_ORDER_BY 10 */
                $8,             /* E_SELECT_LIMIT 11 */
                nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                $2,             /* E_SELECT_HINTS 13 */
                nullptr,        /* E_SELECT_WHEN 14 */
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
                    nullptr,        /* E_SELECT_WHEN 14 */
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
                        nullptr,        /* E_SELECT_ORDER_BY 10 */
                        nullptr,        /* E_SELECT_LIMIT 11 */
                        nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,        /* E_SELECT_WHEN 14 */
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
                        nullptr,        /* E_SELECT_ORDER_BY 10 */
                        nullptr,        /* E_SELECT_LIMIT 11 */
                        nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,        /* E_SELECT_WHEN 14 */
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
                        nullptr,        /* E_SELECT_ORDER_BY 10 */
                        nullptr,        /* E_SELECT_LIMIT 11 */
                        nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,        /* E_SELECT_WHEN 14 */
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

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1 alias_node);
    $$->serialize_format = {"{0}"};
}
  | expr AS column_label
{
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, $1, $3);
    alias_node->serialize_format = {"{0}", "AS", "{1}"};

    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1 alias_node);
    $$->serialize_format = {"{0}"};
}
  | '*'
{
    ParseNode* star_node = Node::makeTerminalNode(E_STAR, "*");
    $$ = Node::makeNonTerminalNode(E_PROJECT_STRING, 1 star_node);
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
  | '(' joined_table ')' AS relation_name
{
    YYABORT;
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
  /* we do not support cross join and natural join
    * using clause is not supported either
    */
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
    $$->serialize_format = {"{1}", "{0}", "JOIN", "{2}"
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
    OUTER                       { $$ = 1; /*this is a flag*/}
  | /* EMPTY */                 { $$ = nullptr; }
;

