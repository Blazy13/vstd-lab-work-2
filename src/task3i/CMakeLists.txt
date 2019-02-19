cmake_minimum_required (VERSION 3.13)

project (task3i)

add_executable(task3i main.cpp task3i.cpp)

target_include_directories (task3i PRIVATE ${INCLUDE_DIR})
