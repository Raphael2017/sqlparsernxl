/* Define the output files */
%option header-file="flex_lexer.h"
%option outfile="flex_lexer.cpp"

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
%option prefix="hsql_"
%option bison-locations
/* %option nodefault */

%{
#include "node.h"
#include "bison_parser.h"
#include <stdio.h>
#include <sstream>
#include <stdlib.h>
#include <string.h>

/* #define TOKEN(name) { return SQL_##name; } */

static std::stringstream strbuf;
%}

%x hint
%x sq

space         [ \t\n\r\f]
non_newline   [^\n\r]
sql_comment   ("--"{non_newline}*)
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

quote         '
sqbegin       {quote}
sqend         {quote}
sqdouble      {quote}{quote}
sqcontent     [^']*
sqescape      [\\][^0-7]
sqoctal       [\\][0-7]{1,3}
sqnewline     {quote}{whitespace}{quote}

%%
ADD               { return ADD; }
ALTER             { return ALTER; }
AND               { return AND; }
ANY               { return ANY; }
ALL               { return ALL; }
AS                { return AS; }
ASC               { return ASC; }
BEGIN             { return BEGI; }
BETWEEN           { return BETWEEN; }
BIGINT            { return BIGINT; }
BINARY            { return BINARY; }
BOOL(EAN)?        { return BOOLEAN; }
BOTH              { return BOTH; }
BY                { return BY; }
CASCADE           { return CASCADE; }
CASE              { return CASE; }
CHAR(ACTER)?      { return CHARACTER; }
CLUSTER           { return CLUSTER; }
COLUMN            { return COLUMN; }
COLUMNS           { return COLUMNS; }
COMMIT            { return COMMIT; }
CONSISTENT        { return CONSISTENT; }
CREATE            { return CREATE; }
CREATETIME        { return CREATETIME; }
CROSS             { return CROSS; }
CURRENT_USER      { return CURRENT_USER; }
DATE              { return DATE; }
DATETIME          { return DATETIME; }
DEALLOCATE        { return DEALLOCATE; }
DEC(IMAL)?        { return DECIMAL; }
DEFAULT           { return DEFAULT; }
DELETE            { return DELETE; }
DESC              { return DESC; }
DESCRIBE          { return DESCRIBE; }
DISTINCT          { return DISTINCT; }
DOUBLE            { return DOUBLE; }
DROP              { return DROP; }
DUAL              { return DUAL; }
ELSE              { return ELSE; }
END               { return END; }
ERROR             { return ERROR; }
EXCEPT            { return EXCEPT; }
EXECUTE           { return EXECUTE; }
EXISTS            { return EXISTS; }
EXPLAIN           { return EXPLAIN; }
FLOAT             { return FLOAT; }
FLOAT4            { return FLOAT; }
FLOAT8            { return DOUBLE; }
FOR               { return FOR; }
FROM              { return FROM; }
FULL              { return FULL; }
GRANT             { return GRANT; }
GROUP             { return GROUP; }
GLOBAL            { return GLOBAL; }
HAVING            { return HAVING; }
IDENTIFIED        { return IDENTIFIED; }
IF                { return IF; }
IN                { return IN; }
INNER             { return INNER; }
INT               { return INTEGER; }
INTEGER           { return INTEGER; }
INTERSECT         { return INTERSECT; }
INSERT            { return INSERT; }
INTO              { return INTO; }
IS                { return IS; }
JOIN              { return JOIN; }
KEY               { return KEY; }
LEADING           { return LEADING; }
LEFT              { return LEFT; }
LIMIT             { return LIMIT; }
LIKE              { return LIKE; }
LOCAL             { return LOCAL; }
LOCKED            { return LOCKED; }
MEDIUMINT         { return MEDIUMINT; }
MEMORY            { return MEMORY; }
MOD               { return MOD; }
MODIFYTIME        { return MODIFYTIME; }
NATURAL           { return NATURAL; }
NOT               { return NOT; }
NUMERIC           { return NUMERIC; }
OFFSET            { return OFFSET; }
ON                { return ON; }
OPTION            { return OPTION; }
OR                { return OR; }
ORDER             { return ORDER; }
OUTER             { return OUTER; }
COMMENT           { return COMMENT; }
PARAMETERS        { return PARAMETERS; }
PASSWORD          { return PASSWORD; }
PRECISION         { return PRECISION; }
PREPARE           { return PREPARE; }
PRIMARY           { return PRIMARY; }
REAL              { return REAL; }
RENAME            { return RENAME; }
REPLACE           { return REPLACE; }
RESTRICT          { return RESTRICT; }
REVOKE            { return REVOKE; }
RIGHT             { return RIGHT; }
ROLLBACK          { return ROLLBACK; }
PRIVILEGES        { return PRIVILEGES; }
SELECT            { return SELECT; }
SCHEMA            { return SCHEMA; }
PROCESSLIST       { return PROCESSLIST; }
SCOPE             { return SCOPE; }
SESSION           { return SESSION; }
SET               { return SET; }
SHOW              { return SHOW; }
SMALLINT          { return SMALLINT; }
SNAPSHOT          { return SNAPSHOT; }
SPFILE            { return SPFILE; }
START             { return START; }
STATIC            { return STATIC; }
WEAK              { return WEAK;   }
STRONG            { return STRONG; }
SYSTEM            { return SYSTEM; }
TABLE             { return TABLE; }
TABLES            { return TABLES; }
THEN              { return THEN; }
TIME              { return TIME; }
TIMESTAMP         { return TIMESTAMP; }
TINYINT           { return TINYINT; }
TO                { return TO; }
TRAILING          { return TRAILING; }
TRANSACTION       { return TRANSACTION; }
UNION             { return UNION; }
UPDATE            { return UPDATE; }
USER              { return USER; }
USING             { return USING; }
VALUES            { return VALUES; }
VARBINARY         { return VARBINARY; }
VARCHAR(ACTER)?   { return VARCHAR; }
WHERE             { return WHERE; }
WHEN              { return WHEN; }
WITH              { return WITH; }
WORK              { return WORK; }
KILL              { return KILL; }
QUERY             { return QUERY; }
CONNECTION        { return CONNECTION; }
FROZEN            { return FROZEN;}
@@global          { return GLOBAL_ALIAS; }
@@session         { return SESSION_ALIAS; }
CHANGE_OBI        { return CHANGE_OBI; }
SWITCH_CLUSTER         { return SWITCH_CLUSTER; }
SET_MASTER_CLUSTER        { return SET_MASTER_CLUSTER; }
SET_SLAVE_CLUSTER         { return SET_SLAVE_CLUSTER;  }
MASTER            { return MASTER; }
SLAVE             { return SLAVE;  }
FORCE             { return FORCE;  }

NULL    {
    yylval->nd = Node::makeTerminalNode(E_NULL, yytext);
    return NULLX;
}

[0-9]+  {
    Node* nd = Node::makeTerminalNode(E_INT, yytext);
    yylval->nd = nd;
    nd->terminalToken_.i = atoi(yytext);
    return INTNUM;
}

[0-9]+E[-+]?[0-9]+ |
[0-9]+"."[0-9]*E[-+]?[0-9]+ |
"."[0-9]+E[-+]?[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->nd = nd;
    nd->terminalToken_.d = atof(yytext);
    return APPROXNUM;
}

[0-9]+"."[0-9]* |
"."[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->nd = nd;
    nd->terminalToken_.d = atof(yytext);
    return APPROXNUM;
}

TRUE    {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->nd = nd;
    nd->terminalToken_.i = 1;
    return BOOL;
}

UNKNOWN {
    yylval->nd = Node::makeTerminalNode(E_NULL, yytext);
    return UNKNOWN;
}

FALSE   {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->nd = nd;
    nd->terminalToken_.i = 0;
    return BOOL;
}

{sqbegin}   {
    BEGIN(sq);
    strbuf = std::stringstream{};
}

<sq>{sqdouble} {
    strbuf << '\'';
}

<sq>{sqcontent} {
    strbuf << yytext;
}

<sq>{sqend} {
    BEGIN(INITIAL);
    Node* nd = Node::makeTerminalNode(E_STRING, strbuf.str());
    nd->terminalToken_.str = strbuf.str();
    return STRING;
}

<sq><<EOF>>  {
  fprintf(stderr, "[SQL-Lexer-Error] Unterminated string\n");
  return ERROR;
}

\"[^\"\n]+\" {
    Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
    yylval->nd = nd;
    nd.terminalToken_.str = std::string(yytext+1, yytext + strlen(yytext) - 1);
    return NAME;
}

[A-Za-z][A-Za-z0-9_]* {
	Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
	yylval->nd = nd;
	nd.terminalToken_.str = yytext;
	return NAME;
}

{comment}   { /* ignore */ }

[-+&~|^/%*(),.;!] { return yytext[0];}

"||"    { return CNNOP; }
"="     { return COMP_EQ; }
">="    { return COMP_GE; }
">"     { return COMP_GT; }
"<="    { return COMP_LE; }
"<"     { return COMP_LT; }
"<>"    { return COMP_NE; }
"!="    { return COMP_NE; }

"?"     {
    Node* nd = Node::makeTerminalNode(E_QUESTIONMARK, yytext);
    yylval->nd = nd;
    return QUESTIONMARK;
}

<<EOF>>    { return END_P; }

.   {
    fprintf(stderr, "[SQL-Lexer-Error] Unknown Character: %c\n", yytext[0]);
    return ERROR;
}

%%