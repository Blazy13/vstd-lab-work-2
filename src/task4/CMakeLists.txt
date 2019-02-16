cmake_minimum_required (VERSION 3.13)

project (task4)

add_executable (task4 main.cpp task4.cpp)

target_include_directories (task4 PRIVATE ${INCLUDE_DIR})
