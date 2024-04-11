cmake_minimum_required(VERSION 3.21)
project(person)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        docs/challenge/AlexAProject/Main.cpp
        docs/challenge/AlexAProject/Alex_A_Project.cpp
        docs/challenge/AlexAProject/Alex_A_Project.h)
