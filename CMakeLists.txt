cmake_minimum_required(VERSION 3.9)
project(ProjectTPGame)

set(CMAKE_CXX_STANDARD 11)

#include_directories(PUBLIC ./include)
#
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURSES)
#aux_source_directory(${PROJECT_SOURCE_DIR}/src/Reader READER_SOURSES)
if (WITH_TESTS STREQUAL "1")
    message("generating tests")
    add_subdirectory(tests)
endif ()

file(GLOB_RECURSE SOURSES . ${PROJECT_SOURCE_DIR}/src/*.cpp)
#find_package(json1)


#message(${json})

add_executable(ProjectTPGame ${SOURSES} main.cpp)

target_include_directories(ProjectTPGame PUBLIC ./include)
