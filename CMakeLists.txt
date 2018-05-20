cmake_minimum_required(VERSION 3.5)
project(ProjectTPGame)

set(CMAKE_CXX_STANDARD 11)

#include_directories(PUBLIC ./include)
#
#aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURSES)
#aux_source_directory(${PROJECT_SOURCE_DIR}/src/Reader READER_SOURSES)
if (DEBUG STREQUAL "ON")
    message(STATUS "Debug")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")
else ()
    message(STATUS "Release")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall")
endif ()

if (WITH_TEST STREQUAL "ON")
    message("generating tests")
    add_subdirectory(tests)
endif ()

FIND_PACKAGE(Doxygen)
IF (DOXYGEN_FOUND)
    #    EXECUTE_PROCESS(COMMAND ${DOXYGEN_EXECUTABLE} Doxyfile.conf)
    EXECUTE_PROCESS(COMMAND ${DOXYGEN_EXECUTABLE} Doxyfile.conf
            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
            OUTPUT_FILE ${PROJECT_BINARY_DIR}/log
            ERROR_FILE ${PROJECT_BINARY_DIR}/log)
    #    ADD_CUSTOM_TARGET(doc
    #            ${DOXYGEN_EXECUTABLE} Doxyfile.conf
    #            WORKING_DIRECTORY ${PROJECT_SOURCE_DIR})
    #    MESSAGE(${PROJECT_SOURCE_DIR})
    #    MESSAGE(${DOXYGEN_EXECUTABLE})
    #    MESSAGE(${PROJECT_BINARY_DIR})
    #    ADD_CUSTOM_COMMAND(TARGET docs PRE_BUILD COMMAND doxygen)
    #    ADD_CUSTOM_TARGET(f echo arfa)
    #    SET(DOXYGEN_INPUT ${CMAKE_SOURCE_DIR})
    #    CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/doxygen.conf.in ${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf)
    #    CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/doxyfile ${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf)
    #    ADD_CUSTOM_TARGET(doc COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/doxygen.conf)
    MESSAGE(STATUS "Docs Generating done")
ELSE (DOXYGEN_FOUND)
    MESSAGE(STATUS "WARNING: Doxygen not found - Reference manual will not be created")
ENDIF (DOXYGEN_FOUND)

file(GLOB_RECURSE SOURSES . ${PROJECT_SOURCE_DIR}/src/*.cpp)
#find_package(json1)


#message(${json})

add_executable(ProjectTPGame ${SOURSES} main.cpp)

target_include_directories(ProjectTPGame PUBLIC ./include)
