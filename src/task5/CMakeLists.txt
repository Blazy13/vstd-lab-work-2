cmake_minimum_required (VERSION 3.13)

project (task5)

add_executable(task5 main.cpp task5.cpp)

target_include_directories (task5 PRIVATE ${INCLUDE_DIR})
