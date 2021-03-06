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
#include "sqlparser_bison.h"
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

%}


/***************************
 ** Section 2: Rules
 ***************************/

/* Define the output files */
%option header-file="sqlparser_flex.h"
%option outfile="sqlparser_flex.cpp"

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
%option bison-locations
/* %option nodefault */


%x hint
%x sq
%x sb

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
BOTH              { return BOTH; }
BROWSE            { return BROWSE; }
BY                { return BY; }
CASCADE           { return CASCADE; }
CASE              { return CASE; }
CHARACTER         { return CHARACTER; }
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
FETCH             { return FETCH; }
FIRST             { return FIRST; }
NEXT              { return NEXT; }
FLOAT             { return FLOAT; }
FLOAT4            { return FLOAT; }
FLOAT8            { return DOUBLE; }
FOR               { return FOR; }
FROM              { return FROM; }
FULL              { return FULL; }
GRANT             { return GRANT; }
GROUP             { return GROUP; }
GLOBAL            { return GLOBAL; }
HASH              { return HASH; }
HAVING            { return HAVING; }
IDENTIFIED        { return IDENTIFIED; }
IF                { return IF; }
IN                { return IN; }
INNER             { return INNER; }
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
LOOP              { return LOOP; }
MEMORY            { return MEMORY; }
MERGE             { return MERGE; }
MOD               { return MOD; }
MODIFYTIME        { return MODIFYTIME; }
NATURAL           { return NATURAL; }
NOT               { return NOT; }
NUMERIC           { return NUMERIC; }
OFFSET            { return OFFSET; }
ON                { return ON; }
ONLY              { return ONLY; }
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
REMOTE            { return REMOTE; }
RENAME            { return RENAME; }
REPLACE           { return REPLACE; }
RESTRICT          { return RESTRICT; }
REVOKE            { return REVOKE; }
RIGHT             { return RIGHT; }
ROLLBACK          { return ROLLBACK; }
ROW               { return ROW; }
ROWS              { return ROWS; }
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
SWITCH_CLUSTER              { return SWITCH_CLUSTER; }
SET_MASTER_CLUSTER          { return SET_MASTER_CLUSTER; }
SET_SLAVE_CLUSTER           { return SET_SLAVE_CLUSTER;  }
SLAVE             { return SLAVE;  }
FORCE             { return FORCE;  }
TOP               { return TOP; }
PERCENT           { return PERCENT; }
TIES              { return TIES; }
FAST              { return FAST; }
DISABLE           { return DISABLE; }
EXTERNALPUSHDOWN  { return EXTERNALPUSHDOWN; }
IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX  { return IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX; }
KEEP              { return KEEP; }
PLAN              { return PLAN; }
KEEPFIXED         { return KEEPFIXED; }
MAX_GRANT_PERCENT { return MAX_GRANT_PERCENT; }
MIN_GRANT_PERCENT { return MIN_GRANT_PERCENT; }
MAXDOP            { return MAXDOP; }
MAXRECURSION      { return MAXRECURSION; }
NO_PERFORMANCE_SPOOL   { return NO_PERFORMANCE_SPOOL; }
PARAMETERIZATION       { return PARAMETERIZATION; }
SIMPLE       { return SIMPLE; }
FORCED       { return FORCED; }
RECOMPILE    { return RECOMPILE; }
ROBUST       { return ROBUST; }
CHECKSUM                    { return CHECKSUM; }
BINARY_CHECKSUM             { return BINARY_CHECKSUM; }
RANK                        { return RANK; }
DENSE_RANK                  { return DENSE_RANK; }
ROW_NUMBER                  { return ROW_NUMBER; }
NTILE                       { return NTILE; }
PARTITION                   { return PARTITION; }
RANGE                       { return RANGE; }
UNBOUNDED           { return UNBOUNDED; }
PRECEDING           { return PRECEDING; }
CURRENT             { return CURRENT; }
FOLLOWING           { return FOLLOWING; }
OVER                { return OVER; }
VARP                { return VARP; }
VAR                 { return VAR; }
SUM                 { return SUM; }
STDEVP              { return STDEVP; }
STDEV               { return STDEV; }
MIN                 { return MIN; }
MAX                 { return MAX; }
LEAD                { return LEAD; }
LAST_VALUE          { return LAST_VALUE; }
LAG                 { return LAG; }
GROUPING_ID         { return GROUPING_ID; }
GROUPING            { return GROUPING; }
FIRST_VALUE         { return FIRST_VALUE; }
COUNT_BIG           { return COUNT_BIG; }
COUNT               { return COUNT; }
CHECKSUM_AGG        { return CHECKSUM_AGG; }
AVG                 { return AVG; }
SYSTEM_USER         { return SYSTEM_USER; }
STUFF               { return STUFF; }
SESSION_USER        { return SESSION_USER; }
NULLIF              { return NULLIF; }
MIN_ACTIVE_ROWVERSION     { return MIN_ACTIVE_ROWVERSION; }
ISNULL              { return ISNULL; }
IDENTITY            { return IDENTITY; }
GETUTCDATE          { return GETUTCDATE; }
GETDATE             { return GETDATE; }
DATEPART            { return DATEPART; }
DATENAME            { return DATENAME; }
DATEDIFF            { return DATEDIFF; }
DATEADD             { return DATEADD; }
CURRENT_TIMESTAMP   { return CURRENT_TIMESTAMP; }
CONVERT             { return CONVERT; }
COALESCE            { return COALESCE; }
CAST                { return CAST; }
BIT                 { return BIT; }
CHAR                { return CHAR; }
DATETIME2           { return DATETIME2; }
DATETIMEOFFSET      { return DATETIMEOFFSET; }
INT                 { return INT; }
MONEY               { return MONEY; }
NCHAR               { return NCHAR; }
NVARCHAR            { return NVARCHAR; }
SMALLDATETIME       { return SMALLDATETIME; }
SMALLMONEY          { return SMALLMONEY; }
TEXT                { return TEXT; }
COLLATE             { return COLLATE; }
APPLY               { return APPLY; }
SYSTEM_TIME         { return SYSTEM_TIME; }
OF                  { return OF; }
CONTAINED           { return CONTAINED; }
PIVOT               { return PIVOT; }
UNPIVOT             { return UNPIVOT; }
OUTPUT              { return OUTPUT; }
DELETED             { return DELETED; }
INSERTED            { return INSERTED; }
OPTIMIZE            { return OPTIMIZE; }
SOME                { return SOME; }
USE                 { return USE; }

NULL    {
    yylval->node = Node::makeTerminalNode(E_NULL, yytext);
    return NULLX;
}

[0-9]+  {
    Node* nd = Node::makeTerminalNode(E_INT, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = atoi(yytext);
    return INTNUM;
}

[0-9]+E[-+]?[0-9]+ |
[0-9]+"."[0-9]*E[-+]?[0-9]+ |
"."[0-9]+E[-+]?[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->node = nd;
    nd->terminalToken_.d = atof(yytext);
    return APPROXNUM;
}

[0-9]+"."[0-9]* |
"."[0-9]+ {
    Node* nd = Node::makeTerminalNode(E_DOUBLE, yytext);
    yylval->node = nd;
    nd->terminalToken_.d = atof(yytext);
    return APPROXNUM;
}

TRUE    {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = 1;
    return BOOL;
}

UNKNOWN {
    yylval->node = Node::makeTerminalNode(E_NULL, yytext);
    return UNKNOWN;
}

FALSE   {
    Node* nd = Node::makeTerminalNode(E_BOOL, yytext);
    yylval->node = nd;
    nd->terminalToken_.i = 0;
    return BOOL;
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
    ((ParseResult*)yyextra)->buf_ << '\'';
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
    return STRING;
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
    return NAME;
}

<sq><<EOF>>  {
  fprintf(stderr, "[SQL-Lexer-Error] Unterminated string\n");
  return ERROR;
}

\"[^\"\n]+\" {
    Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
    yylval->node = nd;
    nd->terminalToken_.str = std::string(yytext+1, yytext + strlen(yytext) - 1);
    nd->terminalToken_.line = yylloc->first_line;
    nd->terminalToken_.column = yylloc->first_column;
    return NAME;
}

{temp_variable} {
    Node* nd = Node::makeTerminalNode(E_TEMP_VARIABLE, yytext);
    yylval->node = nd;
    nd->terminalToken_.str = yytext + 1;    // skip '@'
    nd->terminalToken_.line = yylloc->first_line;
    nd->terminalToken_.column = yylloc->first_column;
    return TEMP_VARIABLE;
}

[A-Za-z][A-Za-z0-9_]* {
	Node* nd = Node::makeTerminalNode(E_IDENTIFIER, yytext);
	yylval->node = nd;
	nd->terminalToken_.str = yytext;
	nd->terminalToken_.line = yylloc->first_line;
    nd->terminalToken_.column = yylloc->first_column;
	return NAME;
}

{comment}   { /* ignore */ }
[ \t\r\n]+  { /* ignore */ }

[-+&~|^/%*(),.;!$] { return yytext[0];}

"||"    { return CNNOP; }
"="     { return COMP_EQ; }
">="    { return COMP_GE; }
">"     { return COMP_GT; }
"<="    { return COMP_LE; }
"<"     { return COMP_LT; }
"<>"    { return COMP_NE; }
"!="    { return COMP_NE; }

"+="    { return ASSIGN_ADD; }
"-="    { return ASSGIN_MINUS; }
"*="    { return ASSIGN_MUL; }
"/="    { return ASSIGN_DIV; }
"%="    { return ASSIGN_REM; }
"&="    { return ASSIGN_BITWISE_AND; }
"|="    { return ASSIGN_BITWISE_OR; }
"^="    { return ASSIGN_BITWISE_XOR; }

""

"?"     {
    Node* nd = Node::makeTerminalNode(E_QUESTIONMARK, yytext);
    yylval->node = nd;
    return QUESTIONMARK;
}


<<EOF>>    { return END_P; }

.   {
    fprintf(stderr, "[SQL-Lexer-Error] Unknown Character: %c\n", yytext[0]);
    return ERROR;
}
%%
/***************************
 ** Section 3: User code
 ***************************/

int yyerror(const char *msg) {
    fprintf(stderr, "[SQL-Lexer-Error] %s\n",msg); return 0;
}
