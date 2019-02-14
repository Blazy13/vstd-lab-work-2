cmake_minimum_required (VERSION 3.13)

project (task3)

add_executable (task3 main.cpp task3.cpp)

target_include_directories(task3 PRIVATE ${INCLUDE_DIR})
