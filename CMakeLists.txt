cmake_minimum_required(VERSION 3.9)
project(ProjectTPGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(ProjectTPGame main.cpp GenericUnit.h IUnit.h Field.h Units.h CConstants.h Player.h Factories.h Position.h Game.h)