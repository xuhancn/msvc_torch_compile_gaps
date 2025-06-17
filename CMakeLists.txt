cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set(PROJ_NAME "msvc_gap_reproducer")
project (${PROJ_NAME})

set(PROJECT_ROOT_DIR ${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE SOURCES_FILES "${PROJECT_ROOT_DIR}/reproducers/*.cpp")

add_executable(${PROJ_NAME} ${SOURCES_FILES})