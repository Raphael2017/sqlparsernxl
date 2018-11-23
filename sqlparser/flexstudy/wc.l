%option noyywrap
%{
int chars = 0;
int words = 0;
int lines = 0;
%}

/* Define the output files */

%option header-file="lexyy.h"
%option outfile="lexyy.cpp"

%%

[a-zA-]+    { words++; chars += strlen(yytext); printf("yytext: %s\n", yytext); }
\n          { chars++; lines++; }
.           { chars++; }

%%

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        if (!(yyin = fopen(argv[1], "r")))
        {
            perror(argv[1]);
            return 1;
        }
    }
    yylex();
    printf("lines:%8d\nwords:%8d\nchars:%8d\n", lines, words, chars);
}