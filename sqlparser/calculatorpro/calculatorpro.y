%output  "calculatorpro_parser.cpp"
%defines "calculatorpro_parser.h"

%{
#include <stdio.h>
#include <stdlib.h>
#include "ast_pro.h"
#include "calculatorpro.h"
%}

%union
{
    struct node* a;
    double d;
    struct symbol* s;
    std::list<symbol*>* sl;
    int fn;
}

%token <d> NUMBER
%token <s> NAME
%token <fn> FUNC;
%token EOL

%token IF THEN ELSE WHILE DO LET

%nonassoc <fn> CMP
%right '='
%left '+' '-'
%left '*' '/'
%nonassoc '|' UMINUS

%type <a> exp stmt list explist
%type <sl> symlist

%start calclist
%%

calclist:   /*  */
    |   calclist stmt EOL
{
    printf("= %4.4g\n> ", $2->eval());
    delete $2;
}
    |   calclist LET NAME '(' symlist ')' '=' list EOL
{
    $3->def($5, $8);
    printf("Defined %s\n> ", $3->name.c_str());
}
    |   calclist error EOL
{
    yyerrok;
    printf("> ");
}
;

stmt: IF exp THEN list
{
    $$ = node::newflow('I', $2, $4, nullptr);
}
    |   IF exp THEN list ELSE list
{
    $$ = node::newflow('I', $2, $4, $6);
}
    |   WHILE exp DO list
{
    $$ = node::newflow('W', $2, $4, nullptr);
}
    |   exp
;

list: /*  */
{
    $$ = nullptr;
}
    |   stmt ';' list
{
    if (!$3)
        $$ = $1;
    else
        $$ = node::newexp('L', $1, $3);
}
;

exp: exp CMP exp    { $$ = node::newcmp($2, $1, $3); }
    |   exp '+' exp { $$ = node::newexp('+', $1, $3); }
    |   exp '-' exp { $$ = node::newexp('-', $1, $3); }
    |   exp '*' exp { $$ = node::newexp('*', $1, $3); }
    |   exp '/' exp { $$ = node::newexp('/', $1, $3); }
    |   '|' exp     { $$ = node::newexp('|', $2, nullptr); }
    |   '(' exp ')' { $$ = $2; }
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
    $$ = node::newexp('L', $1, $3);
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