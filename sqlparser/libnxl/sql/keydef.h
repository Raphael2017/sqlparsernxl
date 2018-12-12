#ifndef KEY_DEF_H
#define KEY_DEF_H

#include <list>
#include <string>

//  XXX_LIST
#define E_LIST_ITEM 0
#define E_LIST_NEXT 1

//  E_SELECT
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
#define E_SELECT_OPT_TOP                15

//  E_SELECT_WITH_PARENS
#define E_SELECT_WITH_PARENS_SELECT 0

//  E_FROM_CLAUSE
#define E_FROM_CLAUSE_FROM_LIST 0

//  E_WHERE_CLAUSE
#define E_WHERE_CLAUSE_EXPR 0

//  E_LIMIT_CLAUSE
#define E_LIMIT_CLAUSE_LIMIT 0
#define E_LIMIT_CLAUSE_OFFSET 1

//  E_GROUP_BY
#define E_GROUP_BY_EXPR_LIST 0

//  E_ORDER_BY
#define E_ORDER_BY_SORT_LIST 0

//  E_HAVING
#define E_HAVING_EXPR 0

//  E_WHEN
#define E_WHEN_EXPR 0

//  E_SORT_KEY
#define E_SORT_KEY_EXPR 0
#define E_SORT_KEY_OPT_ASC_DESC 1

//  E_PROJECT_STRING
#define E_PROJECT_STRING_EXPR_OR_ALIAS 0

//  E_ALIAS
#define E_ALIAS_RELATION_FACTOR_OR_SELECT_WITH_PARENS 0
#define E_ALIAS_RELATION_NAME   1

//  E_JOINED_TABLE
#define E_JOINED_TABLE_JOIN_TYPE 0
#define E_JOINED_TABLE_TABLE_FACTOR_L 1
#define E_JOINED_TABLE_TABLE_FACTOR_R 2
#define E_JOINED_TABLE_ON_EXPR 3

//  E_JOINED_TABLE_WITH_PARENS
#define E_JOINED_TABLE_WITH_PARENS_JOINED_TABLE 0

//  E_OP_NAME_FIELD
#define E_OP_NAME_FIELD_RELATION_NAME 0
#define E_OP_NAME_FIELD_COLUMN_NAME 1

//  E_OP_EXISTS
#define E_OP_EXISTS_SELECT_WITH_PARENS 0

//  E_OP_BINARY     [E_OP_ADD, E_OP_MINUS, E_OP_MUL, E_OP_DIV, E_OP_REM, E_OP_POW, E_OP_MOD,]
//                  [E_OP_LE, E_OP_EQ, E_OP_GE, E_OP_GT, E_OP_NE, E_OP_LIKE, E_OP_NOT_LIKE, E_OP_AND]
//                  [E_OP_OR, E_OP_IS, E_OP_IS_NOT, E_OP_IN, E_OP_NOT_IN, E_OP_CNN]
#define E_OP_BINARY_OPERAND_L 0
#define E_OP_BINARY_OPERAND_R 1

//  E_OP_UNARY   [E_OP_POS, E_OP_NEG, E_OP_NOT]
#define E_OP_UNARY_OPERAND 0

//  E_OP_BTW  E_OP_NOT_BTW
#define E_OP_BTW_BEFORE_BETWEEN 0
#define E_OP_BTW_LEFT_AND 1
#define E_OP_BTW_RIGHT_AND 2

//  E_EXPR_LIST_WITH_PARENS
#define E_EXPR_LIST_WITH_PARENS_EXPR_LIST 0

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
    E_QUESTIONMARK,
    E_ALL,
    E_DISTINCT,
    E_STAR,

    E_TYPE_INTEGER,
    E_TYPE_BOOLEAN,
    E_TYPE_DOUBLE,
    E_TYPE_DATETIME,

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
    E_OP_CNN,

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

    E_NODETYPE_END
};

typedef const std::list<std::string> Form;

Form SELECT_SERIALIZE_FORMAT                    {"SELECT ", "{13}", " ", "{0}", " ", "{15}", " ", "{1}", " ", "{2}", " ", "{3}",  " ",  \
    "{4}", " ", "{5}", " ", "{8}", " ", "{6}", " ", "{7}", " ", "{9}", " ", "{10}", " ", "{11}", " ", "{12}", " ", "{14}"};
Form STMT_LIST_SERIALIZE_FORMAT                 {"{0}", "; ", "{1}"};
Form SELECT_WITH_PARENS_SERIALIZE_FORMAT        {"( ", "{0}", " )"};
Form SELECT_UNION_SERIALIZE_FORMAT              {"{8}", " UNION ", "{7}", " ", "{9}"};
Form SELECT_INTERSECT_SERIALIZE_FORMAT          {"{8}", " INTERSECT ", "{7}", " ", "{9}"};
Form SELECT_EXCEPT_SERIALIZE_FORMAT             {"{8}", " EXCEPT ", "{7}", " ", "{9}"};
Form TOP_SERIALIZE_FORMAT                       {"TOP ", "{0}"};
Form TOP_TIES_SERIALIZE_FORMAT                  {"TOP ", "{0}", " WITH TIES"};
Form TOP_PCT_SERIALIZE_FORMAT                   {"TOP ", "{0}", " PERCENT"};
Form TOP_PCT_TIES_SERIALIZE_FORMAT              {"TOP ", "{0}", " PERCENT WITH TIES"};
Form EXPR_WITH_PARENS_SERIALIZE_FORMAT          {"(", "{0}", ")"};
Form WHERE_SERIALIZE_FORMAT                     {"WHERE ", "{0}"};
Form FROM_DUAL_SERIALIZE_FORMAT                 {"FROM ", "DUAL"};
Form FROM_SERIALIZE_FORMAT                      {"FROM ", "{0}"};
Form LIMIT_1_SERIALIZE_FORMAT                   {"LIMIT ", "{0}", " OFFSET ", "{1}"};
Form LIMIT_2_SERIALIZE_FORMAT                   {"OFFSET ", "{1}", " LIMIT ", "{0}"};
Form LIMIT_3_SERIALIZE_FORMAT                   {"LIMIT ", "{0}"};
Form LIMIT_4_SERIALIZE_FORMAT                   {"OFFSET ", "{1}"};
Form LIMIT_5_SERIALIZE_FORMAT                   {"LIMIT ", "{1}", ", ", "{0}"};
Form GROUP_BY_SERIALIZE_FORMAT                  {"GROUP", " BY ", "{0}"};
Form ORDER_BY_SERIALIZE_FORMAT                  {"ORDER", " BY ", "{0}"};
Form SORT_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form SORT_KEY_SERIALIZE_FORMAT                  {"{0}", " ", "{1}"};
Form HAVING_SERIALIZE_FORMAT                    {"HAVING ", "{0}"};
Form SELECT_EXPR_LIST_SERIALIZE_FORMAT          {"{0}", ", ", "{1}"};
Form PROJECTION_SERIALIZE_FORMAT                {"{0}"};
Form ALIAS_1_SERIALIZE_FORMAT                   {"{0}", " ", "{1}"};
Form ALIAS_2_SERIALIZE_FORMAT                   {"{0}", " AS ", "{1}"};
Form FORM_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form JOINED_TB_1_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
Form JOINED_TB_2_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}"};
Form JOINED_TB_3_SERIALIZE_FORMAT               {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
Form EXPR_LIST_SERIALIZE_FORMAT                 {"{0}", ", ", "{1}"};
Form NAME_FIELD_SERIALIZE_FORMAT                {"{0}", ".", "{1}"};
Form EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT     {"(", "{0}", ")"};
Form OP_EXISTS_SERIALIZE_FORMAT                 {"EXISTS ", "{0}"};
Form OP_POS_SERIALIZE_FORMAT                    {"+", "{0}"};
Form OP_NEG_SERIALIZE_FORMAT                    {"-", "{0}"};
Form OP_ADD_SERIALIZE_FORMAT                    {"{0}", " + ", "{1}"};
Form OP_MINUS_SERIALIZE_FORMAT                  {"{0}", " - ", "{1}"};
Form OP_MUL_SERIALIZE_FORMAT                    {"{0}", " * ", "{1}"};
Form OP_DIV_SERIALIZE_FORMAT                    {"{0}", " / ", "{1}"};
Form OP_REM_SERIALIZE_FORMAT                    {"{0}", " % ", "{1}"};
Form OP_POW_SERIALIZE_FORMAT                    {"{0}", " ^ ", "{1}"};
Form OP_MOD_SERIALIZE_FORMAT                    {"{0}", " MOD ", "{1}"};
Form OP_LE_SERIALIZE_FORMAT                     {"{0}", " <= ", "{1}"};
Form OP_LT_SERIALIZE_FORMAT                     {"{0}", " < ", "{1}"};
Form OP_EQ_SERIALIZE_FORMAT                     {"{0}", " = ", "{1}"};
Form OP_GE_SERIALIZE_FORMAT                     {"{0}", " >= ", "{1}"};
Form OP_GT_SERIALIZE_FORMAT                     {"{0}", " > ", "{1}"};
Form OP_NE_SERIALIZE_FORMAT                     {"{0}", " <> ", "{1}"};
Form OP_LIKE_SERIALIZE_FORMAT                   {"{0}", " LIKE ", "{1}"};
Form OP_NOT_LIKE_SERIALIZE_FORMAT               {"{0}", " NOT LIKE ", "{1}"};
Form OP_AND_SERIALIZE_FORMAT                    {"{0}", " AND ", "{1}"};
Form OP_OR_SERIALIZE_FORMAT                     {"{0}", " OR ", "{1}"};
Form OP_NOT_SERIALIZE_FORMAT                    {"NOT ", "{0}"};
Form OP_IS_SERIALIZE_FORMAT                     {"{0}", " IS ", "{1}"};
Form OP_IS_NOT_SERIALIZE_FORMAT                 {"{0}", " IS NOT ", "{1}"};
Form OP_BETWEEN_SERIALIZE_FORMAT                {"{0}", " BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_NOT_BETWEEN_SERIALIZE_FORMAT            {"{0}", " NOT BETWEEN ", "{1}", " AND ", "{2}"};
Form OP_IN_SERIALIZE_FORMAT                     {"{0}", " IN ", "{1}"};
Form OP_NOT_IN_SERIALIZE_FORMAT                 {"{0}", " NOT IN ", "{1}"};
Form OP_CNN_SERIALIZE_FORMAT                    {"{0}", " || ", "{1}"};
Form CASE_SERIALIZE_FORMAT                      {"CASE ", "{0}", " ", "{1}", " ", "{2}", " END"};
Form WHEN_LIST_SERIALIZE_FORMAT                 {"{0}", " ", "{1}"};
Form WHEN_SERIALIZE_FORMAT                      {"WHEN ", "{0}", " THEN ", "{1}"};
Form ELSE_SERIALIZE_FORMAT                      {"ELSE ", "{0}"};
Form FUN_CALL_1_SERIALIZE_FORMAT                {"{0}", "(", "{1}", ")"};
Form FUN_CALL_2_SERIALIZE_FORMAT                {"{0}", "(", "{2}", " ", "{1}", ")"};
Form FUN_CALL_3_SERIALIZE_FORMAT                {"{0}", "(", "{1}", " AS ", "{2}", ")"};
Form FUN_CALL_4_SERIALIZE_FORMAT                {"{0}", "()"};

#ifndef YYtypeDEF_YY_SCANNER_T
#define YYtypeDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif



#endif