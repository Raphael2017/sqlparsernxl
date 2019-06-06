/**
 * lexer
 *
 *
 */


/***************************
 ** Section 1: Definitions
 ***************************/
%{

#include "node.h"
#include "sqlparser_sql2003_bison.h"
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <string.h>

#define YY_USER_ACTION \
		yylloc->first_line = yylloc->last_line; \
		yylloc->first_column = yylloc->last_column; \
		for(int i = 0; yytext[i] != '\0'; i++) { \
				if(yytext[i] == '\n') { \
						yylloc->last_line++; \
						yylloc->last_column = 0; \
				} \
				else { \
						yylloc->last_column++; \
				} \
		}

#define TOKEN(name) { return SQL2003_##name; }
#define YYSTYPE         SQL2003_STYPE
#define YYLTYPE         SQL2003_LTYPE

%}


/***************************
 ** Section 2: Rules
 ***************************/

/* Define the output files */
%option header-file="sqlparser_sql2003_flex.h"
%option outfile="sqlparser_sql2003_flex.cpp"

/* Make reentrant */
%option reentrant
%option bison-bridge

/* performance tweeks */
%option never-interactive
%option batch

/* other flags */
%option noyywrap
%option nounput
%option warn
%option case-insensitive
%option prefix="sql2003_"
%option bison-locations
/* %option nodefault */


%x hint
%x sq
%x sb

space         [ \t\n\r\f]
non_newline   [^\n\r]
sql_comment   (("--"|"#"){non_newline}*)
whitespace    ({space}+|{sql_comment})
hint_begin    (\/\*\+({space}*hint{space}+)?)
c_cmt_begin   \/\*(?:[^\+])
c_cmt_end     \*+\/
c_cmt_cnt     ([^*]|\*+[^/*])*
c_comment     ({c_cmt_begin}{c_cmt_cnt}{c_cmt_end})
comment       ({c_comment}|{sql_comment})
identifer         ([A-Za-z_][A_Za-z0-9_]*)
system_variable  (@@[A-Za-z_][A_Za-z0-9_]*)
temp_variable (@[A-Za-z_][A_Za-z0-9_]*)

quote         '
nquote        "N'"
sqbegin       {quote}
sqend         {quote}
sqdouble      {quote}{quote}
sqcontent     [^']*
sqescape      [\\][^0-7]
sqoctal       [\\][0-7]{1,3}
sqnewline     {quote}{whitespace}{quote}

lsqbracket      \[
rsqbracket      \]
sbbegin         {lsqbracket}
sbend           {rsqbracket}
sbcontent       [^\]]*
rsqbracketdouble {rsqbracket}{rsqbracket}

/***************************
 ** Section 3: Rules
 ***************************/
%%
ALL                 TOKEN(ALL)              /* SQL-2003-R */
AND                 TOKEN(AND)              /* SQL-2003-R */
ANY                 TOKEN(ANY)              /* SQL-2003-R */
ARRAY               TOKEN(ARRAY)            /* SQL-2003-R */
AS                  TOKEN(AS)               /* SQL-2003-R */
ASC                 TOKEN(ASC)              /* SQL-2003-N */
AVG                 TOKEN(AVG)              /* SQL-2003-N */
BETWEEN             TOKEN(BETWEEN)          /* SQL-2003-R */
BIGINT              TOKEN(BIGINT)           /* SQL-2003-R */
BINARY              TOKEN(BINARY)           /* SQL-2003-R */
BLOB                TOKEN(BLOB)             /* SQL-2003-R */
BOOLEAN             TOKEN(BOOLEAN)          /* SQL-2003-R */
BY                  TOKEN(BY)               /* SQL-2003-R */
CASE                TOKEN(CASE)             /* SQL-2003-R */
CAST                TOKEN(CAST)             /* SQL-2003-R */
CHAR                TOKEN(CHAR)             /* SQL-2003-R */
CHARACTER           TOKEN(CHARACTER)        /* SQL-2003-R */
CHARACTERS          TOKEN(CHARACTERS)       /* SQL-2003-N */
CLOB                TOKEN(CLOB)             /* SQL-2003-R */
COALESCE            TOKEN(COALESCE)         /* SQL-2003-N */
CODE_UNITS          TOKEN(CODE_UNITS)       /* SQL-2003-N */
COLLATE             TOKEN(COLLATE)          /* SQL-2003-R */
CONVERT             TOKEN(CONVERT)          /* SQL-2003-N */
CORRESPONDING       TOKEN(CORRESPONDING)    /* SQL-2003-R */
COUNT               TOKEN(COUNT)            /* SQL-2003-N */
CROSS               TOKEN(CROSS)            /* SQL-2003-R */
CUME_DIST           TOKEN(CUME_DIST)        /* SQL-2003-N */
CURRENT             TOKEN(CURRENT)          /* SQL-2003-R */
CURRENT_TIMESTAMP   TOKEN(CURRENT_TIMESTAMP)/* SQL-2003-R */
CURRENT_USER        TOKEN(CURRENT_USER)     /* SQL-2003-R */
DATE                TOKEN(DATE)             /* SQL-2003-R */
DAY                 TOKEN(DAY)              /* SQL-2003-R */
DEC                 TOKEN(DEC)              /* SQL-2003-R */
DECIMAL             TOKEN(DECIMAL)          /* SQL-2003-R */
DEFAULT             TOKEN(DEFAULT)          /* SQL-2003-R */
DELETE              TOKEN(DELETE)           /* SQL-2003-R */
DENSE_RANK          TOKEN(DENSE_RANK)       /* SQL-2003-N */
DESC                TOKEN(DESC)             /* SQL-2003-N */
DISTINCT            TOKEN(DISTINCT)         /* SQL-2003-R */
DOUBLE              TOKEN(DOUBLE)           /* SQL-2003-R */
ELSE                TOKEN(ELSE)             /* SQL-2003-R */
END                 TOKEN(END)              /* SQL-2003-R */
END_P               TOKEN(END_P)            /* LEX-INNER  */
ESCAPE              TOKEN(ESCAPE)           /* SQL-2003-R */
EXCEPT              TOKEN(EXCEPT)           /* SQL-2003-R */
EXCLUDE             TOKEN(EXCLUDE)          /* SQL-2003-N */
EXISTS              TOKEN(EXISTS)           /* SQL-2003-R */
FLOAT               TOKEN(FLOAT)            /* SQL-2003-R */
FOLLOWING           TOKEN(FOLLOWING)        /* SQL-2003-N */
FOR                 TOKEN(FOR)              /* SQL-2003-R */
FROM                TOKEN(FROM)             /* SQL-2003-R */
FULL                TOKEN(FULL)             /* SQL-2003-R */
G                   TOKEN(G)                /* SQL-2003-N */
GROUP               TOKEN(GROUP)            /* SQL-2003-R */
GROUPING            TOKEN(GROUPING)         /* SQL-2003-R */
HAVING              TOKEN(HAVING)           /* SQL-2003-R */
HOUR                TOKEN(HOUR)             /* SQL-2003-R */
IN                  TOKEN(IN)               /* SQL-2003-R */
INNER               TOKEN(INNER)            /* SQL-2003-R */
INSERT              TOKEN(INSERT)           /* SQL-2003-R */
INT                 TOKEN(INT)              /* SQL-2003-R */
INTEGER             TOKEN(INTEGER)          /* SQL-2003-R */
INTERSECT           TOKEN(INTERSECT)        /* SQL-2003-R */
INTERVAL            TOKEN(INTERVAL)         /* SQL-2003-R */
INTO                TOKEN(INTO)             /* SQL-2003-R */
IS                  TOKEN(IS)               /* SQL-2003-R */
JOIN                TOKEN(JOIN)             /* SQL-2003-R */
K                   TOKEN(K)                /* SQL-2003-N */
LARGE               TOKEN(LARGE)            /* SQL-2003-R */
LEFT                TOKEN(LEFT)             /* SQL-2003-R */
LIKE                TOKEN(LIKE)             /* SQL-2003-R */
M                   TOKEN(M)                /* SQL-2003-N */
MAX                 TOKEN(MAX)              /* SQL-2003-N */
MIN                 TOKEN(MIN)              /* SQL-2003-N */
MINUTE              TOKEN(MINUTE)           /* SQL-2003-R */
MOD                 TOKEN(MOD)              /* SQL-2003-N, here is reserved as an operator */
MONTH               TOKEN(MONTH)            /* SQL-2003-R */
MULTISET            TOKEN(MULTISET)         /* SQL-2003-R */
NATIONAL            TOKEN(NATIONAL)         /* SQL-2003-R */
NATURAL             TOKEN(NATURAL)          /* SQL-2003-R */
NCHAR               TOKEN(NCHAR)            /* SQL-2003-R */
NCLOB               TOKEN(NCLOB)            /* SQL-2003-R */
NO                  TOKEN(NO)               /* SQL-2003-R */
NOT                 TOKEN(NOT)              /* SQL-2003-R */
NULLIF              TOKEN(NULLIF)           /* SQL-2003-N */
NUMERIC             TOKEN(NUMERIC)          /* SQL-2003-R */
OBJECT              TOKEN(OBJECT)           /* SQL-2003-N */
OCTETS              TOKEN(OCTETS)           /* SQL-2003-N */
OF                  TOKEN(OF)               /* SQL-2003-R */
ON                  TOKEN(ON)               /* SQL-2003-R */
ONLY                TOKEN(ONLY)             /* SQL-2003-R */
OR                  TOKEN(OR)               /* SQL-2003-R */
ORDER               TOKEN(ORDER)            /* SQL-2003-R */
OTHERS              TOKEN(OTHERS)           /* SQL-2003-N */
OUTER               TOKEN(OUTER)            /* SQL-2003-R */
OVER                TOKEN(OVER)             /* SQL-2003-R */
PARTITION           TOKEN(PARTITION)        /* SQL-2003-R */
PERCENT_RANK        TOKEN(PERCENT_RANK)     /* SQL-2003-N */
PRECEDING           TOKEN(PRECEDING)        /* SQL-2003-N */
PRECISION           TOKEN(PRECISION)        /* SQL-2003-R */
RANGE               TOKEN(RANGE)            /* SQL-2003-R */
RANK                TOKEN(RANK)             /* SQL-2003-N */
READ                TOKEN(READ)             /* SQL-2003-N */
REAL                TOKEN(REAL)             /* SQL-2003-R */
RECURSIVE           TOKEN(RECURSIVE)        /* SQL-2003-R */
REF                 TOKEN(REF)              /* SQL-2003-R */
RIGHT               TOKEN(RIGHT)            /* SQL-2003-R */
ROW                 TOKEN(ROW)              /* SQL-2003-R */
ROWS                TOKEN(ROWS)             /* SQL-2003-R */
ROW_NUMBER          TOKEN(ROW_NUMBER)       /* SQL-2003-N */
SCOPE               TOKEN(SCOPE)            /* SQL-2003-? */
SECOND              TOKEN(SECOND)           /* SQL-2003-R */
SELECT              TOKEN(SELECT)           /* SQL-2003-R */
SESSION_USER        TOKEN(SESSION_USER)     /* SQL-2003-R */
SET                 TOKEN(SET)              /* SQL-2003-R */
SETS                TOKEN(SETS)             /* SQL-2003-N */
SMALLINT            TOKEN(SMALLINT)         /* SQL-2003-R */
SOME                TOKEN(SOME)             /* SQL-2003-R */
STDDEV_POP          TOKEN(STDDEV_POP)       /* SQL-2003-N */
STDDEV_SAMP         TOKEN(STDDEV_SAMP)      /* SQL-2003-N */
SUM                 TOKEN(SUM)              /* SQL-2003-N */
SYSTEM_USER         TOKEN(SYSTEM_USER)      /* SQL-2003-R */
THEN                TOKEN(THEN)             /* SQL-2003-R */
TIES                TOKEN(TIES)             /* SQL-2003-N */
TIME                TOKEN(TIME)             /* SQL-2003-R */
TIMESTAMP           TOKEN(TIMESTAMP)        /* SQL-2003-R */
TO                  TOKEN(TO)               /* SQL-2003-R */
UNBOUNDED           TOKEN(UNBOUNDED)        /* SQL-2003-N */
UNION               TOKEN(UNION)            /* SQL-2003-R */
UPDATE              TOKEN(UPDATE)           /* SQL-2003-R */
USING               TOKEN(USING)            /* SQL-2003-R */
VALUES              TOKEN(VALUES)           /* SQL-2003-R */
VARCHAR             TOKEN(VARCHAR)          /* SQL-2003-R */
VARYING             TOKEN(VARYING)          /* SQL-2003-R */
VAR_POP             TOKEN(VAR_POP)          /* SQL-2003-R */
VAR_SAMP            TOKEN(VAR_SAMP)         /* SQL-2003-R */
WHEN                TOKEN(WHEN)             /* SQL-2003-R */
WHERE               TOKEN(WHERE)            /* SQL-2003-R */
WITH                TOKEN(WITH)             /* SQL-2003-R */
WITHOUT             TOKEN(WITHOUT)          /* SQL-2003-R */
YEAR                TOKEN(YEAR)             /* SQL-2003-R */
ZONE                TOKEN(ZONE)             /* SQL-2003-N */

NULL    {
    yylval->node = Node::makeTerminalNode(E_NULL, yytext);
    return SQL2003_NULLX;
}

("0X"|"0x")[0-9a-fA-F]+ {
    Node* nd = Node::makeTerminalNode(E_INT, yytext);
    yylval->node = nd;
    return SQL2003_INTNUM;
}

[0-9]+  {
    Node* nd = Node::makeTerminalNode(E_INT, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = atoi(yytext);
    return SQL2003_INTNUM;
}



[0-9]+E[-+]?[0-9]+ |
[0-9]+"."[0-9]*E[-+]?[0-9]+ |
"."[0-9]+E[-+]?[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->node = nd;
    nd->terminalToken_.d = atof(yytext);
    return SQL2003_APPROXNUM;
}

[0-9]+"."[0-9]* |
"."[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->node = nd;
    nd->terminalToken_.d = atof(yytext);
    return SQL2003_APPROXNUM;
}

TRUE    {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = 1;
    return SQL2003_BOOL;
}

UNKNOWN {
    yylval->node = Node::makeTerminalNode(E_NULL, yytext);
    return SQL2003_UNKNOWN;
}

FALSE   {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = 0;
    return SQL2003_BOOL;
}

{sqbegin}   {
    BEGIN(sq);
    ((ParseResult*)yyextra)->buf_ = std::stringstream{};
    ((ParseResult*)yyextra)->buf_ << '\'';
}

{nquote}    {
    BEGIN(sq);
    ((ParseResult*)yyextra)->buf_ = std::stringstream{};
    ((ParseResult*)yyextra)->buf_ << "N'";
}

<sq>{sqdouble} {
    ((ParseResult*)yyextra)->buf_ << "''";
}

<sq>{sqcontent} {
    ((ParseResult*)yyextra)->buf_ << yytext;
}

<sq>{sqend} {
    BEGIN(INITIAL);
    ((ParseResult*)yyextra)->buf_ << '\'';
    Node* nd = Node::makeTerminalNode(E_STRING, ((ParseResult*)yyextra)->buf_.str().c_str());
    nd->terminalToken_.str = ((ParseResult*)yyextra)->buf_.str();
    yylval->node = nd;
    return SQL2003_STRING;
}

<sq><<EOF>>  {
  fprintf(stderr, "[SQL-Lexer-Error] Unterminated string\n");
  return SQL2003_ERROR;
}

{sbbegin}   {
    BEGIN(sb);
    ((ParseResult*)yyextra)->buf_ = std::stringstream{};
    ((ParseResult*)yyextra)->buf_ << '[';
}

<sb>{rsqbracketdouble} {
    ((ParseResult*)yyextra)->buf_ << "]]";
}

<sb>{sbcontent} {
    ((ParseResult*)yyextra)->buf_ << yytext;
}

<sb>{sbend} {
    BEGIN(INITIAL);
    ((ParseResult*)yyextra)->buf_ << ']';
    std::string text = ((ParseResult*)yyextra)->buf_.str();
    Node* nd = Node::makeTerminalNode(E_IDENTIFIER, text.c_str());
    nd->terminalToken_.str = text.substr(1, text.length() - 2);
    yylval->node = nd;
    return SQL2003_NAME;
}

<sb><<EOF>> {
    fprintf(stderr, "[SQL-Lexer-Error] Unterminated identifier WITH '['\n");
    return SQL2003_ERROR;
}


\"(\"\"|[^"\\\n])+\" {
    Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
    yylval->node = nd;
    nd->terminalToken_.str = std::string(yytext+1, yytext + strlen(yytext) - 1);
    nd->terminalToken_.line = yylloc->first_line;
    nd->terminalToken_.column = yylloc->first_column;
    return SQL2003_NAME;
}

[A-Za-z_][A-Za-z0-9_]* {
	Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
	yylval->node = nd;
	nd->terminalToken_.str = yytext;
	nd->terminalToken_.line = yylloc->first_line;
    nd->terminalToken_.column = yylloc->first_column;
	return SQL2003_NAME;
}

{comment}   { /* ignore */ }
[ \t\r\n]+  { /* ignore */ }

[-+&~|^/%*(),.;!$] { return yytext[0];}

"||"    { return SQL2003_CNNOP; }
"="     { return SQL2003_COMP_EQ; }
">="    { return SQL2003_COMP_GE; }
">"     { return SQL2003_COMP_GT; }
"<="    { return SQL2003_COMP_LE; }
"<"     { return SQL2003_COMP_LT; }
"<>"    { return SQL2003_COMP_NE; }
"!="    { return SQL2003_COMP_NE; }

""

"?"     {
    Node* nd = Node::makeTerminalNode(E_QUESTIONMARK, yytext);
    yylval->node = nd;
    return SQL2003_QUESTIONMARK;
}


<<EOF>>    { return SQL2003_END_P; }

.   {
    fprintf(stderr, "[SQL-Lexer-Error] Unknown Character: %c\n", yytext[0]);
    return SQL2003_ERROR;
}
%%
/***************************
 ** Section 3: User code
 ***************************/

int yyerror(const char *msg) {
    fprintf(stderr, "[SQL-Lexer-Error] %s\n",msg); return SQL2003_ERROR;
}
