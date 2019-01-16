set(SRCS
        node.cpp
        nodeimpl.cpp
        parser.cpp
        sqlparser_bison.cpp
        sqlparser_flex.cpp
        parser.cpp
        resolve.cpp
        expr.cpp
        SelectStmt.cpp
        Stmt.cpp
        ResultPlan.cpp
        LogicPlan.cpp
        LocalTableMgr.cpp)

add_library(libnxltsql SHARED
        ${SRCS})