#include "node.h"
#include "sqlparser_flex.h"

struct parser
{
    static bool parse(const std::string& sql, ParseResult* result);
    static bool tokenize(const std::string& sql, std::vector<yytokentype>* tokens);
};