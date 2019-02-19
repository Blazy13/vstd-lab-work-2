cmake_minimum_required (VERSION 3.13)

project (task4i)

add_executable(task4i main.cpp task4i.cpp)

target_include_directories (task4i PRIVATE ${INCLUDE_DIR})
