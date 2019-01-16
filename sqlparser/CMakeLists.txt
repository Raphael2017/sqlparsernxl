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
add_subdirectory(libnxl/tsql)
add_subdirectory(testlibnxl)
add_subdirectory(libsqlparser)

add_subdirectory(LR)

add_subdirectory(libnxl_unit_test)