#ifndef PARSER_H
#define PARSER_H

#include <string>
struct ParseResult;
struct parser
{
    static bool parse_sql2003(const std::string& sql, ParseResult* result);
    static bool parse_tsql(const std::string& sql, ParseResult* result);
};

#endif