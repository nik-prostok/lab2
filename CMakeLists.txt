cmake_minimum_required(VERSION 3.17)
project(lab2 C)

set(CMAKE_C_STANDARD 11)

add_executable(lab2 tests.c multiplexChannel.h multiplexChannel.c)