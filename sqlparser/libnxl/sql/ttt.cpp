#include "sqlparser_flex.h"
#include "sqlparser_bison.h"


bool parse(const std::string& sql, ParseResult* result) {
    yyscan_t scanner;
    YY_BUFFER_STATE state;

    if (yylex_init(&scanner)) {
        // Couldn't initialize the lexer.
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

bool tokenize(const std::string& sql, std::vector<int16_t>* tokens) {
    // Initialize the scanner.
    yyscan_t scanner;
    if (yylex_init(&scanner)) {
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
    yytokentype tmp = (yytokentype)token;
    while (token != END_P) {
        tokens->push_back(token);
        token = yylex(&yylval, &yylloc, scanner);

        tmp = (yytokentype)token;
    }


    return true;
}


int main()
{
    std::string a = "select qwerty(*) from account; select a,b from (select u1,u2 from asdfg) AS kop;";
    ParseResult result;
    std::vector<int16_t> tks;
    tokenize(a, &tks);
    parse(a, &result);
    std::string b = result.result_tree_->serialize();
    return 0;
}