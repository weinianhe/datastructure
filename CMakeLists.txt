cmake_minimum_required(VERSION 3.8)
project(datastructure)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c Stack.h Stack.c)
add_executable(datastructure ${SOURCE_FILES})