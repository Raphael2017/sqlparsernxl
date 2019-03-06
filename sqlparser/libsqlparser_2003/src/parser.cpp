#include "parser.h"
#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"

#include "sqlparser_tsql_bison.h"
#include "sqlparser_tsql_flex.h"

bool parser::parse_sql2003(const std::string& sql, ParseResult* result)
{
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (sql2003_lex_init_extra(result, &scanner)) {
        //fprintf(stderr, "SQLParser2003: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = sql2003__scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    sql2003_parse(result, scanner);
    sql2003__delete_buffer(state, scanner);
    sql2003_lex_destroy(scanner);

    return result->accept;
}

bool parser::parse_tsql(const std::string &sql, ParseResult *result)
{
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (tsql_lex_init_extra(result, &scanner)) {
        //fprintf(stderr, "SQLParser2003: Error when initializing lexer!\n");
        return false;
    }

    const char* text = sql.c_str();
    state = tsql__scan_string(text, scanner);

    // Parse the tokens.
    // If parsing fails, the result will contain an error object.
    tsql_parse(result, scanner);
    tsql__delete_buffer(state, scanner);
    tsql_lex_destroy(scanner);

    return result->accept;
}