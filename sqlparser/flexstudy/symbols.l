%option noyywrap
%option nodefault
%option yylineno
%option case-insensitive

/* symbols table */
%{
struct ref;
struct symbol
{
    char* name;
    struct ref* reflist;
};

struct ref
{
    struct ref* next;
    char* filename;
    int flags;
    int lineno;
};

#define NHASH 9997
struct symbol symtab[NHASH];
struct symbol* lookup(char*);
void addref(int, char*, char*, int);
char* curfilename;  /* current input file name */
%}