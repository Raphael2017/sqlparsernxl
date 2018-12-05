set(SRCS
        node.cpp
        parser.cpp
        sqlparser_bison.cpp
        sqlparser_flex.cpp
        parser.cpp)

add_library(libnxl ${SRCS})