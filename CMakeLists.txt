cmake_minimum_required(VERSION 3.9)
project(ProjectTPGame)

set(CMAKE_CXX_STANDARD 11)

#include_directories(PUBLIC ./include)

aux_source_directory(${PROJECT_SOURCE_DIR}/scr SOURSES)

message("dfgbd")
if (WITH_TESTS STREQUAL "1")
    message("mgvgvjvv")
    add_subdirectory(tests)
endif ()
message(";lkjhg")


add_executable(ProjectTPGame ${SOURSES} main.cpp)

target_include_directories(ProjectTPGame PUBLIC ./include)
