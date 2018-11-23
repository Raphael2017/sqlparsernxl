//
// Created by qwerty on 11/21/18.
//
#include "SQLParser.h"

int main()
{
    const std::string query = "select * from account --test";

    std::vector<int16_t> ret;
    hsql::SQLParser::tokenize("hint", &ret);

    hsql::SQLParserResult result;
    hsql::SQLParser::parse(query, &result);

    if (result.isValid() && result.size() > 0) {
        const hsql::SQLStatement* statement = result.getStatement(0);
    }

    return 0;
}