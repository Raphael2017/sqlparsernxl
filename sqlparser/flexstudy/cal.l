%{
/*enum yytokentype
{
    NUMBER = 258,
    ADD = 259,
    SUB = 260,
    MUL = 261,
    DIV = 262,
    ABS = 263,
    EOL = 264,
    OP  = 265,
    CP  = 266
};
int yylval;*/
#include "cal_parser.h"
%}

%option header-file="cal.h"
%option outfile="cal.cpp"
%option noyywrap

%%
"+"     { return ADD; }
"-"     { return SUB; }
"*"     { return MUL; }
"/"     { return DIV; }
"|"     { return ABS; }
-?[0-9]+  { yylval = atoi(yytext); return NUMBER; }
0x[a-f0-9]+ { yylval = strtol(yytext, nullptr, 16); return NUMBER; }
\n      { return EOL; }
"("     { return OP; }
")"     { return CP; }
"//".*  /* ignore annotation */
[ \t]   { /* ignore white space */ }
.       { printf("Mystery character %c\n", *yytext); }


%%
int test_c(int argc, char** argv)
{
    int tok;
    while (tok == yylex())
    {
        printf("%d", tok);
        if (tok == NUMBER)
            printf(" = %d\n", yylval);
        else
            printf("\n");
    }
    return 0;
}