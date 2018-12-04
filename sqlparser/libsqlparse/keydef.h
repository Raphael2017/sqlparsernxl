#ifndef KEY_DEF_H
#define KEY_DEF_H

//E_SELECT
#define E_SELECT_DISTINCT               0
#define E_SELECT_SELECT_EXPR_LIST       1
#define E_SELECT_FROM_LIST              2
#define E_SELECT_OPT_WHERE              3
#define E_SELECT_GROUP_BY               4
#define E_SELECT_HAVING                 5
#define E_SELECT_SET_OPERATION          6
#define E_SELECT_ALL_SPECIFIED          7
#define E_SELECT_FORMER_SELECT_STMT     8
#define E_SELECT_LATER_SELECT_STMT      9
#define E_SELECT_ORDER_BY               10
#define E_SELECT_LIMIT                  11
#define E_SELECT_FOR_UPDATE             12
#define E_SELECT_HINTS                  13
#define E_SELECT_WHEN                   14

//

enum NodeType
{
    E_NODETYPE_BEGIN,

    E_NULL,
    E_INT,
    E_DOUBLE,
    E_BOOL,
    E_STRING,
    E_IDENTIFIER,
    E_QUESTIONMARK,
    E_ALL,
    E_DISTINCT,
    E_STAR,

    E_TYPE_INTEGER,
    E_TYPE_BOOLEAN,
    E_TYPE_DOUBLE,

    E_STMT_LIST,
    E_SELECT,
    E_SELECT_WITH_PARENS,


    E_FROM_CLAUSE,


    E_WHERE_CLAUSE,

    E_LIMIT_CLAUSE,

    E_GROUP_BY,

    E_ORDER_BY,
    E_HAVING,
    E_WHEN,



    E_SORT_LIST,

    E_SORT_KEY,
    E_SORT_ASC,
    E_SORT_DESC,


    E_SET_UNION,
    E_SET_INTERSECT,
    E_SET_EXCEPT,


    SELECT_EXPR_LIST,

    E_PROJECT_STRING,
    E_ALIAS,


    E_FROM_LIST,

    E_JOINED_TABLE,
    E_JOINED_TABLE_WITH_PARENS,

    E_JOIN_INNER,
    E_JOIN_FULL,
    E_JOIN_LEFT,
    E_JOIN_RIGHT,
    E_JOIN_CROSS,
    E_JOIN_NATURAL,


    E_OP_NAME_FIELD,
    E_OP_EXISTS,
    E_OP_POS,
    E_OP_NEG,
    E_OP_ADD,
    E_OP_MINUS,
    E_OP_MUL,
    E_OP_DIV,
    E_OP_REM,
    E_OP_POW,
    E_OP_MOD,

    E_OP_LE,
    E_OP_LT,
    E_OP_EQ,
    E_OP_GE,
    E_OP_GT,
    E_OP_NE,
    E_OP_LIKE,
    E_OP_NOT_LIKE,
    E_OP_AND,
    E_OP_OR,
    E_OP_NOT,
    E_OP_IS,
    E_OP_IS_NOT,
    E_OP_BTW,
    E_OP_NOT_BTW,
    E_OP_IN,
    E_OP_NOT_IN,
    E_OP_CNN,

    E_EXPR_LIST,
    E_EXPR_LIST_WITH_PARENS,

    E_CASE,
    E_CASE_DEFAULT,

    E_FUN_CALL,

    E_WHEN_LIST,


    E_NODETYPE_END
};

#define SELECT_SERIALIZE_FORMAT  {"SELECT ", "{13}", "{0}", "{1}", "{2}", "{3}", "{4}", "{5}", "{8}", "{6}", "{7}", "{9}", "{10}", "{11}", "{12}", "{14}"}

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

#define YYSTYPE HSQL_STYPE
#define YYLTYPE HSQL_LTYPE

#define HSQL_LTYPE HSQL_CUST_LTYPE
#define HSQL_LTYPE_IS_DECLARED 1

#endif