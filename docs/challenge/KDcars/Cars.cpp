//CPP File
//File Name: Cars.cpp
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a C++ file for a cars class
//Code Assistance from ChatGPT
//Date: 4-16-2024




#include "Cars.h"
#include <iostream>

Cars::Cars(const std::string& color, int year) : color(color), year(year) {}

void Cars::honk() const {
    std::cout << "Honk! Honk!" << std::endl;
}

std::string Cars::getColor() const {
    return color;
}

int Cars::getYear() const {
    return year;
}
