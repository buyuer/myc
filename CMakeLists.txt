cmake_minimum_required(VERSION 3.15)
project(myc C)

set(CMAKE_C_STANDARD 11)

include_directories(src/)

add_executable(myc main.c src/stack.c)