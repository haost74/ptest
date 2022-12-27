cmake_minimum_required(VERSION 3.2...3.5)
project(app)

set(CMAKE_BUILD_TYPE Debug)
message(STATUS "START "  ${PROJECT_NAME})

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)

set( CMAKE_STANDARD  20)


set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

add_executable(app 
                   main.cpp 
                   src/nTree/Node.hpp
                   src/WordTree.hpp)

target_link_libraries(app Threads::Threads)