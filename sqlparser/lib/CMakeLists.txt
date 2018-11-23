set(SRCS
        SQLParser.cpp
        SQLParserResult.cpp
        util/sqlhelper.cpp
        sql/Expr.cpp
        sql/PrepareStatement.cpp
        sql/SQLStatement.cpp
        sql/statements.cpp
        parser/bison_parser.cpp
        parser/flex_lexer.cpp)

add_library(sqlparserlib ${SRCS})