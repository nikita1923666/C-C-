cmake_minimum_required(VERSION 3.7)
project(myTest)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.c struct.c reverse.c reverse.h)
add_executable(myTest ${SOURCE_FILES})