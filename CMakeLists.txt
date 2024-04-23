cmake_minimum_required(VERSION 3.21)
project(person)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(person Person.cpp Person.h Student.cpp Student.h main.cpp)
