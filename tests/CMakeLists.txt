cmake_minimum_required(VERSION 3.5)

#set(gtest_SOURCE_DIR C:/Users/iesek/CLionProjects/googletest/googletest)

#include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
#add_subdirectory(
#        C:/Users/iesek/CLionProjects/googletest/googletest
#        ${CMAKE_CURRENT_BINARY_DIR}/gtest)

#find_package(gtest)
find_package(GTest REQUIRED)

if (GTEST_FOUND)
    file(GLOB_RECURSE SOURSES . ../src/*.cpp)


    #aux_source_directory(../src SOURSES)

    #add_executable(runBasicTests tests.cpp main.cpp)
    #message(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
    set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR})

    #message(${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
    add_executable(runBasicTests tests.cpp main.cpp ${SOURSES})


    target_include_directories(runBasicTests PUBLIC ./../include)
    #target_link_libraries(runBasicTests gtest ${SOURSES})

    target_link_libraries(runBasicTests gtest)
    message(STATUS "test done")
else ()
    message("gtest not found")
endif ()
#


#target_link_libraries(runBasicTests )
#add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/.. ${CMAKE_CURRENT_BINARY_DIR})

#file(SOURCES GRUB ./tests/*.cpp)

#target_include_directories(runBasicTests ./../include)
#


