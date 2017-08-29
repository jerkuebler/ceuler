cmake_minimum_required(VERSION 3.8)
project(ceuler)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 001.c)
add_executable(ceuler ${SOURCE_FILES})
add_executable(001 001.c)
add_executable(002 002.c)
add_executable(003 003.c)