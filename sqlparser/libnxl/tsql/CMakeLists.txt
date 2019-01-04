set(SRCS
        node.cpp
        parser.cpp
        sqlparser_bison.cpp
        sqlparser_flex.cpp
        parser.cpp
        resolve.cpp
        expr.cpp
        SelectStmt.cpp
        LogicPlan.cpp
        LocalTableMgr.cpp)

add_library(libnxltsql ${SRCS})