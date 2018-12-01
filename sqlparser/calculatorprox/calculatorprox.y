%output  "calculatorprox_parser.cpp"
%defines "calculatorprox_parser.h"

%{
#include <stdio.h>
#include <stdlib.h>
#include "calculatorprox.h"
#include "node.h"
%}

%union
{
    struct Node* nd;
    double d;
    int fn;
}

%token <nd> NUMBER
%token <nd> NAME
%token <fn> FUNC;
%token EOL

%token IF THEN ELSE WHILE DO FUNCTION END AND OR

%left AND OR
%nonassoc <fn> CMP
%right '='
%left '+' '-'
%left '*' '/'

%nonassoc '|' UMINUS

%type <nd> exp stmt list explist ifstmt whilestmt symlist funcdef


%start calclist
%%

calclist:   /*  */
    |   calclist stmt EOL
{
    printf("= %4.4g\n> ", $2->eval());
    printf("%s\n>", $2->serialize().c_str());
    delete $2;
}
    |   calclist funcdef EOL
{
    symstab::instance()->lookup($2->getChild(0)->terminalToken_.str.c_str())->setChild(1, $2);
    printf("%s\n>", $2->serialize().c_str());
}
    |   calclist error EOL
{
    yyerrok;
    printf("> ");
}
;

funcdef : FUNCTION NAME '(' symlist ')' list END
{
    /*[0] name [1] Node* funcbody [2] Node* symlist */
    $$ = Node::makeNonTerminalNode(E_FUNC_DEF, 3, $2, $4, $6);
    $$->serialize_format = {"FUNCTION ", "{0}", "(", "{1}", ") ", "{2}", " END" };
}

stmt:   exp
;

ifstmt : IF exp THEN list END
{
    $$ = Node::makeNonTerminalNode(E_IFSTMT_WITH_NO_ELSE, 2, $2, $4 );
    $$->serialize_format = {"IF ", "{0}", " THEN ", "{1}", " END"};
}
    |   IF exp THEN list ELSE list END
{
    $$ = Node::makeNonTerminalNode(E_IFSTMT_WITH_ELSE, 3, $2, $4, $6 );
    $$->serialize_format = {"IF ", "{0}", " THEN ", "{1}", " ELSE ", "{2}", " END"};
}
;

whilestmt : WHILE exp DO list END
{
    $$ = Node::makeNonTerminalNode(E_WHILESTMT, 2, $2, $4);
    $$->serialize_format = {"WHILE ", "{0}", " DO ", "{1}", " END"};
}
;

list: /*  */
{
    $$ = nullptr;
}
    |   stmt ';' list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", "; ", "{1}"};
}
    |   ifstmt list
    |   whilestmt list
{
    $$ = Node::makeNonTerminalNode(E_STMT_LIST, 2, $1, $2);
    $$->serialize_format = {"{0}", " ", "{1}"};
}
;

exp: exp AND exp
{
    $$ = Node::makeNonTerminalNode(E_LOGIC_AND, 2, $1, $3);
    $$->serialize_format = {"{0}", " AND ", "{1}"};
}
    |   exp OR exp
{
    $$ = Node::makeNonTerminalNode(E_LOGIC_OR, 2, $1, $3);
    $$->serialize_format = {"{0}", " OR ", "{1}"};
}
    |   exp CMP exp
{
    $$ = Node::makeNonTerminalNode((NodeType)$2, 2, $1, $3);
    switch ((NodeType)$2)
    {
        case E_CMP_M:
            $$->serialize_format = {"{0}", ">", "{1}"};
            break;
        case E_CMP_L:
            $$->serialize_format = {"{0}", "<", "{1}"};
            break;
        case E_CMP_NE:
            $$->serialize_format = {"{0}", "<>", "{1}"};
            break;
        case E_CMP_E:
            $$->serialize_format = {"{0}", "==", "{1}"};
            break;
        case E_CMP_ME:
            $$->serialize_format = {"{0}", ">=", "{1}"};
            break;
        case E_CMP_LE:
            $$->serialize_format = {"{0}", "<=", "{1}"};
            break;
    }
}
    |   exp '+' exp
{
    $$ = Node::makeNonTerminalNode(E_OPE_ADD, 2, $1, $3);
    $$->serialize_format = {"{0}", "+", "{1}"};
}
    |   exp '-' exp
{
    $$ = Node::makeNonTerminalNode(E_OPE_SUB, 2, $1, $3);
    $$->serialize_format = {"{0}", "-", "{1}"};
}
    |   exp '*' exp
{
    $$ = Node::makeNonTerminalNode(E_OPE_MUL, 2, $1, $3);
    $$->serialize_format = {"{0}", "*", "{1}"};
}
    |   exp '/' exp
{
    $$ = Node::makeNonTerminalNode(E_OPE_DIV, 2, $1, $3);
    $$->serialize_format = {"{0}", "/", "{1}"};
}
    |   '|' exp
{
    $$ = Node::makeNonTerminalNode(E_OPE_ABS, 1, $2);
    $$->serialize_format = {"|", " ", "{0}"};
}
    |   '(' exp ')'
{
    $$ = Node::makeNonTerminalNode(E_EXP_WITH_PAR, 1, $2);
    $$->serialize_format = {"(", "{0}", ")"};
}
    |   '-' exp %prec UMINUS
{
    $$ = Node::makeNonTerminalNode(E_OPE_UMINUS, 1, $2);
    $$->serialize_format = {"-", "{0}"};
}
    |   NUMBER
{
    $$ = $1;
}
    |   NAME
{
    $$ = Node::makeNonTerminalNode(E_NAME_REF, 1, $1);
    $$->serialize_format = {"{0}"};
}
    |   NAME '=' exp
{
    $$ = Node::makeNonTerminalNode(E_ASGN, 2, $1, $3);
    $$->serialize_format = {"{0}", "=", "{1}"};
}
    |   FUNC '(' explist ')'
{
    $$ = Node::makeNonTerminalNode((NodeType)$1, 1, $3 );
    switch ((NodeType)$1)
    {
        case E_IN_CALL_SQRT:
            $$->serialize_format = {"sqrt", "(", "{0}", ")"};
            break;
        case E_IN_CALL_EXP:
            $$->serialize_format = {"exp", "(", "{0}", ")"};
            break;
        case E_IN_CALL_LOG:
            $$->serialize_format = {"log", "(", "{0}", ")"};
            break;
        case E_IN_CALL_PRINT:
            $$->serialize_format = {"print", "(", "{0}", ")"};
            break;

    }
}
    |   NAME '(' explist ')'
{
    $$ = Node::makeNonTerminalNode(E_DIY_CALL, 2, $1, $3);
    $$->serialize_format = {"{0}", "(", "{1}", ")"};
}
;

explist: exp
    |   exp ',' explist
{
    $$ = Node::makeNonTerminalNode(E_EXP_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ", ", "{1}"};
}
;

symlist: NAME
{
    $$ = Node::makeNonTerminalNode(E_SYM_LIST, 2, $1, nullptr);
    $$->serialize_format = {"{0}"};
}
    |   NAME ',' symlist
{
    $$ = Node::makeNonTerminalNode(E_SYM_LIST, 2, $1, $3);
    $$->serialize_format = {"{0}", ", ", "{1}"};

}

%%
int main()
{
    printf("> ");

    return yyparse();
}