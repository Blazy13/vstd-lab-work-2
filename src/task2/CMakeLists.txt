cmake_minimum_required (VERSION 3.13)

project (task2)

add_executable (task2 main.cpp)

target_include_directories(task2 PRIVATE ${INCLUDE_DIR})
