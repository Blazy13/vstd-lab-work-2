cmake_minimum_required (VERSION 3.13)

project (task1)

add_executable (task1 main.cpp)

target_include_directories (task1 PRIVATE "${INCLUDE_DIR}")
