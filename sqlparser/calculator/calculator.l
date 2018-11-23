%option header-file="calculator.h"
%option outfile="calculator.cpp"

%option noyywrap nodefault yylineno

%{
#include "ast.h"
#include "calculator_parser.h"
%}

EXP ([Ee][-+]?[0-9]+)

%%
[-+*/|()] { return *yytext; }
[0-9]+"."[0-9]*{EXP}?   |
"."?[0-9]+{EXP}? { yylval.d = atof(yytext); return NUMBER; }

\n  { return EOL; }
"//".*
[ \t] { /* ignore */ }

. { yyerror("Mystery character %c\n", *yytext); }

%%