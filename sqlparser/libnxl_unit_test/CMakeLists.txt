include_directories(../libnxl/sql)
add_executable(tcp_h_tests tpc_h_tests.cpp)
target_link_libraries(tcp_h_tests libnxl)