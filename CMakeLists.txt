cmake_minimum_required (VERSION 3.13)

project (lab2 1 0)

configure_file (
  "${PROJECT_SOURCE_DIR}/lab2Config.h.in"
  "${PROJECT_BINARY_DIR}/lab1Config.h"
  )

include_directories("${PROJECT_BINARY_DIR}")

add_executable (lab2 lab2.cpp lab2.h)

add_executable (lab2 lab2.cpp lab2.h)
