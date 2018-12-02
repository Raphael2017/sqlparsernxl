/*key definition*/
// E_SYMBOL
#define E_SYMBOL_VALUE 0
#define E_SUMB_FUNC 1

// E_IFSTMT_WITH_NO_ELSE
#define E_IFSTMT_WITH_NO_ELSE_COND 0
#define E_IFSTMT_WITH_NO_ELSE_ACT1 1

// E_IFSTMT_WITH_ELSE
#define E_IFSTMT_WITH_ELSE_COND 0
#define E_IFSTMT_WITH_ELSE_ACT1 1
#define E_IFSTMT_WITH_ELSE_ACT2 2

// E_WHILESTMT
#define E_WHILESTMT_COND 0
#define E_WHILESTMT_ACT 1

// E_STMT_LIST E_EXP_LIST E_SYM_LIST
/* we provide iterator */
#define E_LIST_ITEM 0
#define E_LIST_LIST 1

// E_NAME
/* terminal */

// E_FUNC_DEF
#define E_FUNC_DEF_NAME 0
#define E_FUNC_DEF_SYMLIST 1
#define E_FUNC_DEF_ACT 2

// E_CMP_XX
#define E_CMP_L_OPERANDS 0
#define E_CMP_R_OPERANDS 1

// E_OPE_BINARY
#define E_OPE_BINARY_L_OPERANDS 0
#define E_OPE_BINARY_R_OPERANDS 1

// E_OPE_UNARY
#define E_OPE_UNARY_OPERANDS 0

// E_EXP_WITH_PAR
#define E_EXP_WITH_PAR_EXP 0

// E_NUMBER
/* terminal */

// E_NAME_REF
#define E_NAME_REF_NAME 0

// E_ASGN
#define E_ASGN_NAME 0
#define E_ASGN_EXP 1

// E_IN_CALL
#define E_IN_CALL_EXPLIST 0

// E_DIY_CALL
#define E_DIY_CALL_NAME 0
#define E_DIY_CALL_EXPLIST 1


enum NodeType
{
    E_NULL,

    E_SYMBOL,

    E_IFSTMT_WITH_NO_ELSE,
    E_IFSTMT_WITH_ELSE,
    E_WHILESTMT,
    E_STMT_LIST,

    E_NAME,
    E_FUNC_DEF,

    E_LOGIC_AND,
    E_LOGIC_OR,
    E_LOGIC_NOT,


    E_CMP_START     = 100,
    E_CMP_M         = 101,
    E_CMP_L         = 102,
    E_CMP_NE        = 103,
    E_CMP_E         = 104,
    E_CMP_ME        = 105,
    E_CMP_LE        = 106,


    E_OPE_ADD       = 200,
    E_OPE_SUB,
    E_OPE_MUL,
    E_OPE_DIV,
    E_OPE_ABS,
    E_OPE_UMINUS,

    E_EXP_WITH_PAR  = 300,

    E_NUMBER        = 400,

    E_NAME_REF      = 500,

    E_ASGN          = 600,

    E_IN_CALL_START       = 700,
    E_IN_CALL_SQRT          = 701,
    E_IN_CALL_EXP       = 702,
    E_IN_CALL_LOG       = 703,
    E_IN_CALL_PRINT     = 704,

    E_DIY_CALL      = 800,

    E_EXP_LIST      = 900,

    E_SYM_LIST      = 910,

};