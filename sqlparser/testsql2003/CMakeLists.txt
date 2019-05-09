include_directories(../libsqlparser_2003/include)

add_executable(testsql2003 main.cpp)
target_link_libraries(testsql2003 libsql2003)