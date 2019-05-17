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
c_cmt_cnt     [^*/]+
c_comment     ({c_cmt_begin}{c_cmt_cnt}{c_cmt_end})
comment       ({c_comment}|{sql_comment})
identifer         ([A-Za-z_][A_Za-z0-9_]*)
system_variable  (@@[A-Za-z_][A_Za-z0-9_]*)
temp_variable (@[A-Za-z_][A_Za-z0-9_]*)

hex           (("0X"|"0x")[0-9a-fA-F]+)
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

/***************************
 ** Section 3: Rules
 ***************************/
%%
ALL                 TOKEN(ALL)
AND                 TOKEN(AND)
ANY                 TOKEN(ANY)
ARRAY               TOKEN(ARRAY)
AS                  TOKEN(AS)
ASC                 TOKEN(ASC)
AVG                 TOKEN(AVG)
BETWEEN             TOKEN(BETWEEN)
BIGINT              TOKEN(BIGINT)
BINARY              TOKEN(BINARY)
BLOB                TOKEN(BLOB)
BOOLEAN             TOKEN(BOOLEAN)
BY                  TOKEN(BY)
CASE                TOKEN(CASE)
CAST                TOKEN(CAST)
CHAR                TOKEN(CHAR)
CHARACTER           TOKEN(CHARACTER)
CHARACTERS          TOKEN(CHARACTERS)
CLOB                TOKEN(CLOB)
COALESCE            TOKEN(COALESCE)
CODE_UNITS          TOKEN(CODE_UNITS)
COLLATE             TOKEN(COLLATE)
CONVERT             TOKEN(CONVERT)
CORRESPONDING       TOKEN(CORRESPONDING)
COUNT               TOKEN(COUNT)
CROSS               TOKEN(CROSS)
CURRENT             TOKEN(CURRENT)
CURRENT_TIMESTAMP   TOKEN(CURRENT_TIMESTAMP)
CURRENT_USER        TOKEN(CURRENT_USER)
DATE                TOKEN(DATE)
DAY                 TOKEN(DAY)
DEC                 TOKEN(DEC)
DECIMAL             TOKEN(DECIMAL)
DEFAULT             TOKEN(DEFAULT)
DELETE              TOKEN(DELETE)
DENSE_RANK          TOKEN(DENSE_RANK)
DESC                TOKEN(DESC)
DISTINCT            TOKEN(DISTINCT)
DOUBLE              TOKEN(DOUBLE)
ELSE                TOKEN(ELSE)
END                 TOKEN(END)
END_P               TOKEN(END_P)
EXCEPT              TOKEN(EXCEPT)
EXISTS              TOKEN(EXISTS)
FLOAT               TOKEN(FLOAT)
FOLLOWING           TOKEN(FOLLOWING)
FOR                 TOKEN(FOR)
FROM                TOKEN(FROM)
FULL                TOKEN(FULL)
G                   TOKEN(G)
GROUP               TOKEN(GROUP)
GROUPING            TOKEN(GROUPING)
HAVING              TOKEN(HAVING)
HOUR                TOKEN(HOUR)
IN                  TOKEN(IN)
INNER               TOKEN(INNER)
INSERT              TOKEN(INSERT)
INT                 TOKEN(INT)
INTEGER             TOKEN(INTEGER)
INTERSECT           TOKEN(INTERSECT)
INTERVAL            TOKEN(INTERVAL)
INTO                TOKEN(INTO)
IS                  TOKEN(IS)
JOIN                TOKEN(JOIN)
K                   TOKEN(K)
LARGE               TOKEN(LARGE)
LEFT                TOKEN(LEFT)
LIKE                TOKEN(LIKE)
M                   TOKEN(M)
MAX                 TOKEN(MAX)
MIN                 TOKEN(MIN)
MINUTE              TOKEN(MINUTE)
MOD                 TOKEN(MOD)
MONTH               TOKEN(MONTH)
MULTISET            TOKEN(MULTISET)
NATIONAL            TOKEN(NATIONAL)
NATURAL             TOKEN(NATURAL)
NCHAR               TOKEN(NCHAR)
NCLOB               TOKEN(NCLOB)
NOT                 TOKEN(NOT)
NULLIF              TOKEN(NULLIF)
NUMERIC             TOKEN(NUMERIC)
OBJECT              TOKEN(OBJECT)
OCTETS              TOKEN(OCTETS)
OF                  TOKEN(OF)
ON                  TOKEN(ON)
ONLY                TOKEN(ONLY)
OR                  TOKEN(OR)
ORDER               TOKEN(ORDER)
OUTER               TOKEN(OUTER)
OVER                TOKEN(OVER)
PARTITION           TOKEN(PARTITION)
PRECEDING           TOKEN(PRECEDING)
PRECISION           TOKEN(PRECISION)
RANGE               TOKEN(RANGE)
RANK                TOKEN(RANK)
READ                TOKEN(READ)
REAL                TOKEN(REAL)
RECURSIVE           TOKEN(RECURSIVE)
REF                 TOKEN(REF)
RIGHT               TOKEN(RIGHT)
ROW                 TOKEN(ROW)
ROWS                TOKEN(ROWS)
ROW_NUMBER          TOKEN(ROW_NUMBER)
SCOPE               TOKEN(SCOPE)
SECOND              TOKEN(SECOND)
SELECT              TOKEN(SELECT)
SESSION_USER        TOKEN(SESSION_USER)
SET                 TOKEN(SET)
SMALLINT            TOKEN(SMALLINT)
SOME                TOKEN(SOME)
STDDEV_POP          TOKEN(STDDEV_POP)
STDDEV_SAMP         TOKEN(STDDEV_SAMP)
SUM                 TOKEN(SUM)
SYSTEM_USER         TOKEN(SYSTEM_USER)
THEN                TOKEN(THEN)
TIME                TOKEN(TIME)
TIMESTAMP           TOKEN(TIMESTAMP)
TO                  TOKEN(TO)
UNBOUNDED           TOKEN(UNBOUNDED)
UNION               TOKEN(UNION)
UPDATE              TOKEN(UPDATE)
USING               TOKEN(USING)
VALUES              TOKEN(VALUES)
VARCHAR             TOKEN(VARCHAR)
VARYING             TOKEN(VARYING)
VAR_POP             TOKEN(VAR_POP)
VAR_SAMP            TOKEN(VAR_SAMP)
WHEN                TOKEN(WHEN)
WHERE               TOKEN(WHERE)
WITH                TOKEN(WITH)
WITHOUT             TOKEN(WITHOUT)
YEAR                TOKEN(YEAR)
ZONE                TOKEN(ZONE)

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

{sbbegin}   {
    BEGIN(sb);
    ((ParseResult*)yyextra)->buf_ = std::stringstream{};
    ((ParseResult*)yyextra)->buf_ << '[';
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

<sq><<EOF>>  {
  fprintf(stderr, "[SQL-Lexer-Error] Unterminated string\n");
  return SQL2003_ERROR;
}

\"[^\"\n]+\" {
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
