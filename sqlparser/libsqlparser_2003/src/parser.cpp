#include "parser.h"
#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"

bool parser::parse(const std::string& sql, ParseResult* result)
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