include_directories(../libnxl/sql)

add_executable(testlibnxl main.cpp)
target_link_libraries(testlibnxl libnxltsql)