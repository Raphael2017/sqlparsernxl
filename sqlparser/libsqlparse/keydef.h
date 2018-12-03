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

    E_STMT_LIST,
    E_SELECT;
    E_SELECT_WITH_PARENS,


    E_FROM_CLAUSE,


    E_WHERE_CLAUSE,

    E_LIMIT_CLAUSE,

    E_GROUP_BY,

    E_ORDER_BY,
    E_HAVING,
    E_WHEN,

    E_ALL,
    E_DISTINCT,

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
    E_STAR,

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




    E_NODETYPE_END
};

#define SELECT_SERIALIZE_FORMAT  {"SELECT ", "{13}", "{0}", "{1}", "{2}", "{3}", "{4}", "{5}", "{8}", "{6}", "{7}", "{9}", "{10}", "{11}", "{12}", "{14}"}

#endif