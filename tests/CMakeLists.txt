cmake_minimum_required(VERSION 3.9)

set(gtest_SOURCE_DIR C:/Users/iesek/CLionProjects/googletest/googletest)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runBasicTests tests.cpp)

target_link_libraries(runBasicTests gtest gtest_main)