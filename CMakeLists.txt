cmake_minimum_required(VERSION 3.9)
project(ProjectTPGame)

set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)

aux_source_directory(${PROJECT_SOURCE_DIR}/scr SOURSES)

add_executable(ProjectTPGame ${SOURSES})