#include <string>

struct ParseResult;
struct parser
{
    static bool parse(const std::string& sql, ParseResult* result);
};