include_directories(../libnxl/tsql)

add_executable(testlibnxl main.cpp)
target_link_libraries(testlibnxl libnxltsql)