%output  "calculatorpro_parser.cpp"
%defines "calculatorpro_parser.h"

%{
#include <stdio.h>
#include <stdlib.h>
#include "calculatorpro.h"
#include "ast_pro.h"
%}

%union
{
    struct node* a;
    double d;
    struct symbol* s;
    symbol::symlist* sl;
    int fn;
}

%token <d> NUMBER
%token <s> NAME
%token <fn> FUNC;
%token EOL

%token IF THEN ELSE WHILE DO FUNCTION END

%nonassoc <fn> CMP
%right '='
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%type <a> exp stmt list explist ifstmt whilestmt
%type <sl> symlist

%start calclist
%%

calclist:   /*  */
    |   calclist stmt EOL
{
    printf("= %4.4g\n> ", $2->eval());
    printf("%s\n>", $2->serialize().c_str());
    delete $2;
}
    |   calclist FUNCTION NAME '(' symlist ')' list END EOL
{
    $3->def($5, $7);
    printf("Defined function %s\n> ", $3->name.c_str());
    printf("%s\n>", $3->serialize().c_str());
}
    |   calclist error EOL
{
    yyerrok;
    printf("> ");
}
;

stmt:   exp
;

ifstmt : IF exp THEN list END
{
    $$ = node::newflow('I', $2, $4, nullptr);
}
    |   IF exp THEN list ELSE list END
{
    $$ = node::newflow('I', $2, $4, $6);
}
;

whilestmt : WHILE exp DO list END
{
    $$ = node::newflow('W', $2, $4, nullptr);
}
;

list: /*  */
{
    $$ = nullptr;
}
    |   stmt ';' list
{
    $$ = node::newexp('L', $1, $3);
}
    |   ifstmt list
    |   whilestmt list
{
    $$ = node::newexp('R', $1, $2);
}
;

exp: exp CMP exp    { $$ = node::newcmp($2, $1, $3); }
    |   exp '+' exp { $$ = node::newexp('+', $1, $3); }
    |   exp '-' exp { $$ = node::newexp('-', $1, $3); }
    |   exp '*' exp { $$ = node::newexp('*', $1, $3); }
    |   exp '/' exp { $$ = node::newexp('/', $1, $3); }
    |   '|' exp     { $$ = node::newexp('|', $2, nullptr); }
    |   '(' exp ')' { $$ = $2; $$->withparent = true; }
    |   '-' exp %prec UMINUS { $$ = node::newexp('M', $2, nullptr); }
    |   NUMBER      { $$ = node::newnum($1); }
    |   NAME        { $$ = node::newref($1); }
    |   NAME '=' exp { $$ = node::newasgn($1, $3); }
    |   FUNC '(' explist ')' { $$ = node::newfunc($1, $3); }
    |   NAME '(' explist ')' { $$ = node::newcall($1, $3); }
;

explist: exp
    |   exp ',' explist
{
    $$ = node::newexp('Q', $1, $3);
}
;

symlist: NAME
{
    $$ = symbol::newsymlist($1, nullptr);
}
    |   NAME ',' symlist
{
    $$ = symbol::newsymlist($1, $3);
}

%%
int main()
{
    printf("> ");

    return yyparse();
}