#ifndef NODE_STRUCT_H
#define NODE_STRUCT_H

/*
 * DEFINITION OF DIFFERENT TYPE OF NODE
 * */

/*
 * E_STMT_LIST, E_SORT_LIST, E_SELECT_EXPR_LIST
 * E_FROM_LIST, E_EXPR_LIST, E_WHEN_LIST,
 * E_SIMPLE_IDENT_LIST, E_WITH_LIST, E_TABLE_HINT_LIST
 * E_QUERY_HINT_LIST, E_EXPR_LIST_PARENS_LIST,
 * E_UPDATE_ELEM_LIST, E_DML_SELECT_LIST
 * */
#define E_LIST_PROPERTY_CNT             2

#define E_LIST_ITEM                     0
#define E_LIST_NEXT                     1
//////////////////////////////////////////

/*
 * E_SELECT_WITH_PARENS, E_JOINED_TABLE_WITH_PARENS
 * E_EXPR_LIST_WITH_PARENS, E_SIMPLE_IDENT_LIST_WITH_PARENS
 * E_EXPR_LIST_PARENS, E_TABLE_VALUE_CTOR_PARENS
 * */
#define E_PARENS_PROPERTY_CNT           1

#define E_PARENS_ELEMENT                0
//////////////////////////////////////////

/*
 * E_FROM_CLAUSE
 * */
#define E_FROM_CLAUSE_PROPERTY_CNT      1

#define E_FROM_CLAUSE_FROM_LIST         0
//////////////////////////////////////////

/*
 * E_WHERE_CLAUSE
 * */
#define E_WHERE_CLAUSE_PROPERTY_CNT     1

#define E_WHERE_CLAUSE_EXPR             0
//////////////////////////////////////////

/*
 * E_GROUP_BY
 * */
#define E_GROUP_BY_PROPERTY_CNT         1

#define E_GROUP_BY_EXPR_LIST            0
//////////////////////////////////////////

/*
 * E_ORDER_BY
 * */
#define E_ORDER_BY_PROPERTY_CNT         2

#define E_ORDER_BY_SORT_LIST            0
#define E_ORDER_BY_OFFSET_FETCH         1
//////////////////////////////////////////

/*
 * E_HAVING
 * */
#define E_HAVING_PROPERTY_CNT           1

#define E_HAVING_EXPR                   0
//////////////////////////////////////////

/*
 * E_WHEN
 * */
#define E_WHEN_PROPERTY_CNT             2

#define E_WHEN_WHEN_EXPR                0
#define E_WHEN_THEN_EXPR                1
//////////////////////////////////////////

/*
 * E_SORT_KEY
 * */
#define E_SORT_KEY_PROPERTY_CNT         2

#define E_SORT_KEY_EXPR                 0
#define E_SORT_KEY_OPT_ASC_DESC         1
//////////////////////////////////////////

/*
 * E_PROJECT_STRING
 * */
#define E_PROJECT_STRING_PROPERTY_CNT   1

#define E_PROJECT_STRING_EXPR_OR_ALIAS  0
//////////////////////////////////////////

/*
 * E_ALIAS
 * */
#define E_ALIAS_PROPERTY_CNT            5

#define E_ALIAS_ORIGN                   0
#define E_ALIAS_ALIAS                   1
#define E_ALIAS_COLUMN_ALIAS_LIST       2
#define E_ALIAS_TABLE_HINTS             3
#define E_ALIAS_FOR_SYS_TIME			4
//////////////////////////////////////////

/*
 * E_JOINED_TABLE
 * */
#define E_JOINED_TABLE_PROPERTY_CNT     4

#define E_JOINED_TABLE_JOIN_TYPE        0
#define E_JOINED_TABLE_TABLE_FACTOR_L   1
#define E_JOINED_TABLE_TABLE_FACTOR_R   2
#define E_JOINED_TABLE_ON_EXPR          3
//////////////////////////////////////////

/*
 * E_OP_NAME_FIELD
 * */
#define E_OP_NAME_FIELD_PROPERTY_CNT    5

#define E_OP_NAME_FIELD_COLUMN_NAME     0
#define E_OP_NAME_FIELD_RELATION_NAME   1
#define E_OP_NAME_FIELD_SCHEMA_NAME     2
#define E_OP_NAME_FIELD_DATABASE_NAME   3
#define E_OP_NAME_FIELD_SERVER_NAME     4
//////////////////////////////////////////

/*
 * E_OP_ADD, E_OP_MINUS, E_OP_MUL, E_OP_DIV
 * E_OP_REM, E_OP_POW, E_OP_MOD, E_OP_LE
 * E_OP_LT, E_OP_EQ, E_OP_GE, E_OP_GT, E_OP_NE
 * E_OP_LIKE, E_OP_NOT_LIKE, E_OP_AND, E_OP_OR
 * E_OP_IS, E_OP_IS_NOT, E_OP_IN, E_OP_NOT_IN
 * E_OP_CNN, E_OP_ASS, E_OP_ASS_ADD, E_OP_ASS_MINUS
 * E_OP_ASS_MUL, E_OP_ASS_DIV, E_OP_ASS_REM,
 * E_OP_ASS_BIT_AND, E_OP_ASS_BIT_OR, E_OP_ASS_BIT_XOR
 * E_OP_COLLATE
 * */
#define E_OP_BINARY_PROPERTY_CNT        2

#define E_OP_BINARY_OPERAND_L           0
#define E_OP_BINARY_OPERAND_R           1
//////////////////////////////////////////

/*
 * E_OP_NOT, E_OP_EXISTS, E_OP_POS, E_OP_NEG
 * */
#define E_OP_UNARY_PROPERTY_CNT         1

#define E_OP_UNARY_OPERAND              0
//////////////////////////////////////////

/*
 * E_OP_BTW, E_OP_NOT_BTW
 * */
#define E_OP_TERNARY_PROPERTY_CNT       3

#define E_OP_TERNARY_OPERAND_1          0
#define E_OP_TERNARY_OPERAND_2          1
#define E_OP_TERNARY_OPERAND_3          2
//////////////////////////////////////////

/*
 * E_CASE
 * */
#define E_CASE_PROPERTY_CNT             3

#define E_CASE_ARG                      0
#define E_CASE_WHEN_CLAUSE_LIST         1
#define E_CASE_ELSE                     2
//////////////////////////////////////////

/*
 * E_CASE_DEFAULT
 * */
#define E_CASE_DEFAULT_PROPERTY_CNT     1

#define E_CASE_DEFAULT_EXPR             0
//////////////////////////////////////////

/*
 * E_FUN_CALL
 * */
#define E_FUN_CALL_PROPERTY_CNT         5

#define E_FUN_CALL_FUNC_NAME            0
#define E_FUN_CALL_PARAMS               1
#define E_FUN_CALL_OVER_CLAUSE          2
#define E_FUN_CALL_DISTINCT_OR_ALL      3
#define E_FUN_CALL_AS_TYPE              4
//////////////////////////////////////////

/*
 * E_TOP_CNT
 * */
#define E_TOP_CNT_PROPERTY_CNT          1

#define E_TOP_CNT_COUNT                 0
//////////////////////////////////////////

/*
 * E_TOP_PCT
 * */
#define E_TOP_PCT_PROPERTY_CNT          1

#define E_TOP_PCT_PERCENT               0
//////////////////////////////////////////

/*
 * E_TOP_CNT_TIES
 * */
#define E_TOP_CNT_TIES_PROPERTY_CNT     1

#define E_TOP_CNT_TIES_COUNT            0
//////////////////////////////////////////

/*
 * E_TOP_PCT_TIES
 * */
#define E_TOP_PCT_TIES_PROPERTY_CNT     1

#define E_TOP_PCT_TIES_PERCENT          0
//////////////////////////////////////////

/*
 * E_COMMON_TABLE_EXPR
 * */
#define E_COMMON_TABLE_EXPR_PROPERTY_CNT    3

#define E_COMMON_TABLE_EXPR_TABLE       0
#define E_COMMON_TABLE_EXPR_COLUMNS     1
#define E_COMMON_TABLE_EXPR_SUBQUERY    2
//////////////////////////////////////////

/*
 * E_OPT_WITH_CLAUSE
 * */
#define E_OPT_WITH_CLAUSE_PROPERTY_CNT  1

#define E_OPT_WITH_CLAUSE_CTE_LIST      0
//////////////////////////////////////////

/*
 * E_TABLE_IDENT
 * */
#define E_TABLE_IDENT_PROPERTY_CNT      4

#define E_TABLE_IDENT_OBJECT            0
#define E_TABLE_IDENT_SCHEMA            1
#define E_TABLE_IDENT_DATABASE          2
#define E_TABLE_IDENT_SERVER            3
//////////////////////////////////////////

/*
 * E_OFFSET_FETCH
 * */
#define E_OFFSET_FETCH_PROPERTY_CNT     2

#define E_OFFSET_FETCH_EXPR_1           0
#define E_OFFSET_FETCH_EXPR_2           1
//////////////////////////////////////////

/*
 * E_FOR_CLAUSE
 * */
#define E_FOR_CLAUSE_PROPERTY_CNT       1

#define E_FOR_CLAUSE_PARAM              0
//////////////////////////////////////////

/*
 * E_WITH_TABLE_HINT
 * */
#define E_WITH_TABLE_HINT_PROPERTY_CNT	1

#define E_WITH_TABLE_HINT_HINTS			0
//////////////////////////////////////////

/*
 * E_TABLE_HINT_NOEXPAND
 * */
#define E_TABLE_HINT_NOEXPAND_PROPERTY_CNT	1

#define E_TABLE_HINT_NOEXPAND_EXPR		0
//////////////////////////////////////////

/*
 * E_OPTION_CLAUSE
 * */
#define E_OPTION_CLAUSE_PROPERTY_CNT	1

#define E_OPTION_CLAUSE_HINTS			0
//////////////////////////////////////////

/*
 * E_PROC_IDENT
 * */
#define E_PROC_IDENT_PROPERTY_CNT		4

#define E_PROC_IDENT_OBJECT				0
#define E_PROC_IDENT_SCHEMA				1
#define E_PROC_IDENT_DATABASE			2
#define E_PROC_IDENT_SERVER				3
//////////////////////////////////////////

/*
 * E_ROWS_CLAUSE
 * */
#define E_ROWS_CLAUSE_PROPERTY_CNT		2

#define E_ROWS_CLAUSE_ROWS				0
#define E_ROWS_CLAUSE_EXTEND			1
//////////////////////////////////////////

/*
 * E_RANGE_CLAUSE
 * */
#define E_RANGE_CLAUSE_PROPERTY_CNT		2

#define E_RANGE_CLAUSE_RANGE			0
#define E_RANGE_CLAUSE_EXTEND			1
//////////////////////////////////////////

/*
 * E_TABLE_VALUE_CTOR
 * */
#define E_TABLE_VALUE_CTOR_PROPERTY_CNT	1

#define E_TABLE_VALUE_CTOR_CONTENT		0
//////////////////////////////////////////

/*
 * E_FOR_SYSTEM_TIME
 * */
#define E_FOR_SYSTEM_TIME_PROPERTY_CNT	1

#define E_FOR_SYSTEM_TIME_TIME			0
//////////////////////////////////////////

/*
 * E_PIVOT_TABLE
 * */
#define E_PIVOT_TABLE_PROPERTY_CNT		3

#define E_PIVOT_TABLE_TABLE				0
#define E_PIVOT_TABLE_PIVOT_CLAUSE		1
#define	E_PIVOT_TABLE_NAME				2
//////////////////////////////////////////

/*
 * E_UNPIVOT_TABLE
 * */
#define E_UNPIVOT_TABLE_PROPERTY_CNT	3

#define E_UNPIVOT_TABLE_TABLE			0
#define E_UNPIVOT_TABLE_UNPIVOT_CLAUSE	1
#define E_UNPIVOT_TABLE_NAME			2
//////////////////////////////////////////

/*
 * E_PIVOT_CLAUSE
 * */
#define E_PIVOT_CLAUSE_PROPERTY_CNT		3

#define E_PIVOT_CLAUSE_AWF				0
#define E_PIVOT_CLAUSE_COLUMN			1
#define E_PIVOT_CLAUSE_IDENT_LIST		2
//////////////////////////////////////////

/*
 * E_UNPIVOT_CLAUSE
 * */
#define E_UNPIVOT_CLAUSE_PROPERTY_CNT	3

#define	E_UNPIVOT_CLAUSE_EXPR			0
#define E_UNPIVOT_CLAUSE_COLUMN			1
#define E_UNPIVOT_CLAUSE_IDENT_LIST		2
//////////////////////////////////////////

/*
 * E_TEMP_VAR_FUN_CALL
 * */
#define E_TEMP_VAR_FUN_CALL_PROPERTY_CNT 2

#define E_TEMP_VAR_FUN_CALL_FUNC_EXPR	0
#define E_TEMP_VAR_FUN_CALL_VAR			1
//////////////////////////////////////////

/*
 * E_INTO_CLAUSE
 * */
#define E_INTO_CLAUSE_PROPERTY_CNT		1

#define E_INTO_CLAUSE_RELATION_FACTOR	0
//////////////////////////////////////////

/*
 * E_UPDATE_ELEM
 * */
#define E_UPDATE_ELEM_PROPERTY_CNT		1

#define E_UPDATE_ELEM_ASSIGN_EXPR		0
//////////////////////////////////////////

/*
 * E_DML_SELECT_ITEM
 * */
#define E_DML_SELECT_ITEM_PROPERTY_CNT	1

#define E_DML_SELECT_ITEM_PROJECTION	0
//////////////////////////////////////////

/*
 * E_OUTPUT_CLAUSE
 * */
#define E_OUTPUT_CLAUSE_PROPERTY_CNT	3

#define E_OUTPUT_CLAUSE_SELECT_LIST		0
#define E_OUTPUT_CLAUSE_RELATION_FACTOR	1
#define E_OUTPUT_CLAUSE_COLUMN_LIST		2
//////////////////////////////////////////

/*
 * E_OVER_CLAUSE
 * */
#define E_OVER_CLAUSE_PROPERTY_CNT		3

#define E_OVER_CLAUSE_PARTITION_BY		0
#define E_OVER_CLAUSE_ORDER_BY			1
#define E_OVER_CLAUSE_ROW_RANGE			2
 /////////////////////////////////////////

/*
 * E_QUERY_HINT
 * */
#define E_QUERY_HINT_PROPERTY_CNT       2
#define E_QUERY_HINT_0                  0
#define E_QUERY_HINT_1                  1
//////////////////////////////////////////

/*
 * E_SELECT
 * */
#define E_SELECT_PROPERTY_CNT           19

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
#define E_SELECT_FOR_CLAUSE             12
#define E_SELECT_HINTS                  13
#define E_SELECT_WHEN                   14
#define E_SELECT_OPT_TOP                15
#define E_SELECT_OPT_WITH               16
#define E_SELECT_OPT_OPTION             17
#define E_SELECT_OPT_INTO               18
///////////////////////////////////////////

/*
 * E_UPDATE
 * */
#define E_UPDATE_PROPERTY_CNT           9

#define E_UPDATE_OPT_WITH               0
#define E_UPDATE_OPT_TOP                1
#define E_UPDATE_UPDATE_RELATION        2
#define E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3
#define E_UPDATE_UPDATE_ELEM_LIST       4
#define E_UPDATE_OPT_OUTPUT             5
#define E_UPDATE_FROM_LIST              6
#define E_UPDATE_OPT_WHERE              7
#define E_UPDATE_OPT_QUERY_HINT         8
///////////////////////////////////////////

/*
 * E_DELETE
 * */
#define E_DELETE_PROPERTY_CNT           8

#define E_DELETE_OPT_WITH               0
#define E_DELETE_OPT_TOP                1
#define E_DELETE_DELETE_RELATION        2
#define E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3
#define E_DELETE_OPT_OUTPUT             4
#define E_DELETE_FROM_LIST              5
#define E_DELETE_OPT_WHERE              6
#define E_DELETE_OPT_QUERY_HINT         7
///////////////////////////////////////////

/*
 * E_INSERT
 * */
#define E_INSERT_PROPERTY_CNT           2
#define E_INSERT_INSERT_RELATION        0
#define E_INSERT_INSERT_COLUMNS_AND_SOURCE     1
///////////////////////////////////////////

/*
 * E_INSERT_COLUMNS_AND_SOURCE
 * */
#define E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT 2
#define E_INSERT_COLUMNS_AND_SOURCE_COLUMNS      0
#define E_INSERT_COLUMNS_AND_SOURCE_SOURCE       1
///////////////////////////////////////////

/*
 * E_VALUES_CTOR
 * */
#define E_VALUES_CTOR_PROPERTY_CNT           1
#define E_VALUES_CTOR_SRC                    0
//////////////////////////////////////////

/*
 * E_USE
 * */
#define E_USE_PROPERTY_CNT              1

#define E_USE_DATABASE_NAME             0

/*
 *  TERMINAL NODE:
 *  E_NULL, E_INT, E_DOUBLE, E_BOOL, E_STRING, E_IDENTIFIER
 *  E_TEMP_VARIABLE, E_QUESTIONMARK, E_ALL, E_DISTINCT, E_STAR
 *  E_DATA_TYPE, E_SET_UNION, E_SET_INTERSECT, E_SET_EXCEPT
 *  E_SORT_ASC, E_SORT_DESC, E_JOIN_INNER, E_JOIN_FULL,
 *  E_JOIN_LEFT, E_JOIN_RIGHT, E_JOIN_CROSS, E_JOIN_NATURAL
 * */


#endif