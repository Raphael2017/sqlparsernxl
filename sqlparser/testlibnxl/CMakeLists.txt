include_directories(../libsqlparser/include)

add_executable(testlibnxl main.cpp)
target_link_libraries(testlibnxl libtsql)