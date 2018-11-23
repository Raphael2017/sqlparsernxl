%output  "calculator_parser.cpp"
%defines "calculator_parser.h"

%{
#include <stdio.h>
#include <stdlib.h>
#include "ast.h"
#include "calculator.h"
%}

%union
{
    struct node* a;
    double d;
}

%token <d> NUMBER
%token EOL
%type <a> exp factor term

%%

calclist:   /* empty rule */
    | calclist exp EOL
{
    printf("= %4.4g\n", $2->eval());
    delete($2);
    printf("> ");
}
    | calclist EOL  /* empty line or annotation */
{
    printf("> ");
}
;

exp : factor
    | exp '+' factor
{
    $$ = node::newexp('+', $1, $3);
}
    | exp '-' factor
{
    $$ = node::newexp('-', $1, $3);
}
;

factor: term
    | factor '*' term
{
    $$ = node::newexp('*', $1, $3);
}
    | factor '/' term
{
    $$ = node::newexp('/', $1, $3);
}
;

term: NUMBER { $$ = node::newnum($1); }
    | '|' term { $$ = node::newexp('|', $2, nullptr); }
    | '(' exp ')' { $$ = $2; }
    | '-' term { $$ = node::newexp('M', $2, nullptr); }