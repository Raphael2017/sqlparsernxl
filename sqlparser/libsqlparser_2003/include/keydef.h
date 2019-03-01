#ifndef KEY_DEF_H
#define KEY_DEF_H

#include <list>
#include <string>
#include <set>
#include "serialize_format.h"
#include "node_struct.h"

enum NodeType
{
    E_NODETYPE_BEGIN = 0,

    /* terminal */
    E_NULL,
    E_INT,
    E_DOUBLE,
    E_BOOL,
    E_STRING,
    E_IDENTIFIER,
    E_TEMP_VARIABLE,
    E_QUESTIONMARK,
    E_ALL,
    E_DISTINCT,
    E_STAR,

    E_DATA_TYPE,

    E_SET_UNION,
    E_SET_INTERSECT,
    E_SET_EXCEPT,

    E_SORT_ASC,
    E_SORT_DESC,

    E_JOIN_INNER,
    E_JOIN_FULL,
    E_JOIN_LEFT,
    E_JOIN_RIGHT,
    E_JOIN_CROSS,
    E_JOIN_NATURAL,


    /* nonterminal */

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

    E_SELECT_EXPR_LIST,

    E_PROJECT_STRING,
    E_ALIAS,


    E_FROM_LIST,

    E_JOINED_TABLE,
    E_JOINED_TABLE_WITH_PARENS,




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
    E_OP_CNN,               // STRING CONNECTOR

    E_OP_ASS,
    E_OP_ASS_ADD,
    E_OP_ASS_MINUS,
    E_OP_ASS_MUL,
    E_OP_ASS_DIV,
    E_OP_ASS_REM,
    E_OP_ASS_BIT_AND,
    E_OP_ASS_BIT_OR,
    E_OP_ASS_BIT_XOR,

    E_OP_COLLATE,

    E_EXPR_LIST,
    E_EXPR_LIST_WITH_PARENS,

    E_CASE,
    E_CASE_DEFAULT,

    E_FUN_CALL,

    E_WHEN_LIST,

    E_TOP_CNT,
    E_TOP_PCT,
    E_TOP_CNT_TIES,
    E_TOP_PCT_TIES,

    E_SIMPLE_IDENT_LIST,
    E_SIMPLE_IDENT_LIST_WITH_PARENS,
    E_OPT_DERIVED_COLUMN_LIST,
    E_COMMON_TABLE_EXPR,
    E_WITH_LIST,
    E_OPT_WITH_CLAUSE,

    E_TABLE_IDENT,
    E_OFFSET_FETCH,
    E_FOR_CLAUSE,
    E_WITH_TABLE_HINT,
    E_TABLE_HINT_LIST,
    E_TABLE_HINT_NOEXPAND,
    E_OPTION_CLAUSE,
    E_QUERY_HINT_LIST,
    E_QUERY_HINT,

    E_PROC_IDENT,
    E_OVER_CLAUSE,
    E_ROWS_CLAUSE,
    E_RANGE_CLAUSE,

    E_EXPR_LIST_PARENS,
    E_EXPR_LIST_PARENS_LIST,
    E_TABLE_VALUE_CTOR,
    E_TABLE_VALUE_CTOR_PARENS,

    E_FOR_SYSTEM_TIME,
    E_PIVOT_TABLE,
    E_UNPIVOT_TABLE,
    E_PIVOT_CLAUSE,
    E_UNPIVOT_CLAUSE,

    E_TEMP_VAR_FUN_CALL,
    E_INTO_CLAUSE,

    E_UPDATE,
    E_UPDATE_ELEM_LIST,
    E_UPDATE_ELEM,
    E_DML_SELECT_LIST,
    E_DML_SELECT_ITEM,
    E_OUTPUT_CLAUSE,

    E_USE,

    E_DELETE,

    E_NODETYPE_END
};

enum StmtType
{
    E_NONE,
    E_STMT_TYPE_SELECT,
    E_STMT_TYPE_UPDATE,
    E_STMT_TYPE_DELETE,
    E_STMT_TYPE_USE,
};

enum TableItemType
{
    E_UNKNOWN,
    E_BASIC_TABLE,
    E_BASIC_TABLE_WITH_ALIAS,
    E_DERIVED_TABLE,
    E_CTE_TABLE,
};

#define OB_INVALID_ID  0
#define OB_APP_MIN_COLUMN_ID  500

const std::set<std::string> FUNCTION_CAN_WITH_PARAM_STAR{
    "COUNT", "COUNT_BIG"
};

const std::set<std::string> AGGREGATE_FUNCTIONS{
        "COUNT", "SUM", "MAX", "MIN", "AVG", "STDEV",
        "STDEVP", "VAR", "VARP", "CHECKSUM_AGG", "COUNT_BIG"
};

const std::set<std::string> FUNCTIONS_ONLY_CAN_WITH_ONE_PARAM{
    "COUNT", "SUM", "MAX", "MIN", "AVG"
};

const std::set<std::string> FUNCTIONS_CAN_WITH_OPTION_AS{
    "CAST"
};

const std::set<std::string> TABLE_HINT_WORDS{
    "INDEX", "FORCESEEK", "FORCESCAN", "HOLDLOCK", "NOLOCK",
    "NOWAIT", "PAGLOCK", "READCOMMITTED", "READCOMMITTEDLOCK",
    "READPAST", "READUNCOMMITTED", "REPEATABLEREAD", "ROWLOCK",
    "SERIALIZABLE", "SNAPSHOT", "SPATIAL_WINDOW_MAX_CELLS",
    "TABLOCK", "TABLOCKX", "UPDLOCK", "XLOCK"
};

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif



#endif