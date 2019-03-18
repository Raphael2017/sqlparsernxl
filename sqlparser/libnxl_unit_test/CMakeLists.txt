set(CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")
include_directories(../libsqlparser_2003/include)
add_executable(tcp_h_tests tpc_h_tests.cpp)
target_link_libraries(tcp_h_tests libsql2003)

add_custom_target(custom_target
        ALL
        COMMAND echo "hello world"
        COMMAND echo ${CMAKE_CURRENT_SOURCE_DIR}
        )