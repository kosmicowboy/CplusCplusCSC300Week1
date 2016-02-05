cmake_minimum_required(VERSION 3.3)
project(CSC300HomeworkWeek1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Extensions.cpp Extensions.h)
add_executable(CSC300HomeworkWeek1 ${SOURCE_FILES})