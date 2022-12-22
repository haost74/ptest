cmake_minimum_required(VERSION 3.2...3.5)
project(app)

set(CMAKE_BUILD_TYPE Debug)
message(STATUS "START "  ${PROJECT_NAME})

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)

set( CMAKE_STANDARD  20)

add_executable(app 
                   main.cpp 
                   src/nTree/Tree.hpp
                   src/WordTree.hpp)