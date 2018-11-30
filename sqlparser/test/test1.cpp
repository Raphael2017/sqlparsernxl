//
// Created by qwerty on 11/21/18.
//
#include "SQLParser.h"
#include <regex>

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

    std::string f = "{12}";
    std::string n(f.begin()+1, f.end()-1);
    int num = std::atoi(n.c_str());

    return 0;
}