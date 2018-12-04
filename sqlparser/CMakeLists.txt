cmake_minimum_required(VERSION 3.12)
project(sqlparser)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib)
add_subdirectory(test)
add_subdirectory(flexstudy)
add_subdirectory(calculator)
add_subdirectory(calculatorpro)
add_subdirectory(calculatorprox)
add_subdirectory(libnxl/sql)