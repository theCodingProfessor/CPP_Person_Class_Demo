//CPP File
//File Name: Cars.cpp
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a C++ file for a cars class
//Code Assistance from ChatGPT
//Date: 4-16-2024




#include "cars.h"
#include <iostream>

// Constructor definition
Cars::Cars(const std::string& color, int year) : color(color), year(year) {}

// Getter for color
std::string Cars::getColor() const {
    return color;
}

// Getter for year
int Cars::getYear() const {
    return year;
}

// Default implementation of honk method
void Cars::honk() const {
    std::cout << "Generic honk sound" << std::endl;
}
