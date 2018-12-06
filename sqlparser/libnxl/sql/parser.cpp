#include "parser.h"
#include "sqlparser_bison.h"
#include "sqlparser_flex.h"
#include <stack>

bool parser::parse(const std::string& sql, ParseResult* result)
{
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (yylex_init(&scanner) || yylex_init_extra(result, &scanner)) {
        fprintf(stderr, "SQLParser: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = yy_scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    int ret = yyparse(result, scanner);
    bool success = (ret == 0);

    return true;
}

bool parser::tokenize(const std::string& sql, std::vector<yytokentype>* tokens)
{
    ParseResult result;
    yyscan_t scanner;
    if (yylex_init(&scanner) || yylex_init_extra(&result, &scanner)) {
        fprintf(stderr, "SQLParser: Error when initializing lexer!\n");
        return false;
    }

    YY_BUFFER_STATE state;
    state = yy_scan_string(sql.c_str(), scanner);

    YYSTYPE yylval;
    YYLTYPE yylloc;

    // Step through the string until EOF is read.
    // Note: hsql_lex returns int, but we know that its range is within 16 bit.
    int16_t token = yylex(&yylval, &yylloc, scanner);
    while (token != END_P) {
        tokens->push_back((yytokentype)token);
        token = yylex(&yylval, &yylloc, scanner);
    }

    return true;
}



