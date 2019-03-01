set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -pedantic ${CMAKE_CXX_FLAGS}")
include_directories(./include)
aux_source_directory(./src SRCS)

add_library(libsql2003 SHARED
        ${SRCS})