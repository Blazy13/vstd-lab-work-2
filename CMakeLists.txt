cmake_minimum_required (VERSION 3.13)

set (lab2_VERSION_MAJOR 1)
set (lab2_VERSION_MINOR 0)
set (PROJECT_BINARY_DIR build)

project (lab2)

set (CONFIG_IN "${PROJECT_SOURCE_DIR}/lab2Config.h.in")
set (CONFIG_OUTPUT "${PROJECT_BINARY_DIR}/lab2Config.h")
set (INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

add_subdirectory (src build)

configure_file (
  ${CONFIG_IN}
  ${CONFIG_OUTPUT}
  )

include_directories ("${PROJECT_BINARY_DIR}")
