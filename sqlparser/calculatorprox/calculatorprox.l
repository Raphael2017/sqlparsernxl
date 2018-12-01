%option header-file="calculatorprox.h"
%option outfile="calculatorprox.cpp"

%option noyywrap nodefault yylineno

%{
#include "node.h"
#include "calculatorprox_parser.h"
%}

EXP ([Ee][-+]?[0-9]+)

%%
"+" |
"-" |
"*" |
"/" |
"=" |
"|" |
"," |
";" |
"(" |
")" { return yytext[0]; }

">"     { yylval.fn = E_CMP_M; return CMP; }
"<"     { yylval.fn = E_CMP_L; return CMP; }
"<>"    { yylval.fn = E_CMP_NE; return CMP; }
"=="    { yylval.fn = E_CMP_E; return CMP; }
">="    { yylval.fn = E_CMP_ME; return CMP; }
"<="    { yylval.fn = E_CMP_LE; return CMP; }

"if"        { return IF; }
"then"      { return THEN; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"do"        { return DO; }
"function"  { return FUNCTION; }
"end"       { return END; }
"and"       { return AND; }
"or"        { return OR; }

"sqrt"      { yylval.fn = E_IN_CALL_SQRT; return FUNC; }
"exp"       { yylval.fn = E_IN_CALL_EXP; return FUNC; }
"log"       { yylval.fn = E_IN_CALL_LOG; return FUNC; }
"print"     { yylval.fn = E_IN_CALL_PRINT; return FUNC; }

[a-zA-Z][a-zA-Z0-9]* {
    yylval.nd = Node::makeTerminalNode(E_NAME);
    symstab::instance()->lookup(yytext);
    yylval.nd->terminalToken_.str = yytext;
    return NAME;
}

[0-9]+"."[0-9]*{EXP}?   |
"."?[0-9]+{EXP}?    {
    yylval.nd = Node::makeTerminalNode(E_NUMBER);
    yylval.nd->terminalToken_.d = atof(yytext);
    yylval.nd->terminalToken_.yytext = yytext;
    return NUMBER;
}

"//".*
[ \t]   /* ignore */

\\\n { printf("c> "); }

\n { return EOL; }

. { yyerror("Mystery character %c\n", *yytext); }
%%