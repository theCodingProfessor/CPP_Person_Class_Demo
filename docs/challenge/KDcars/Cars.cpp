//Header File
//File Name: Cars.cpp
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a C++ file for a cars class
//Code Assistance from ChatGPT



#include "cars.h"
#include <iostream>

Cars::Cars(const std::string& color, const std::string& year) : color(color), year(year) {}

void Cars::honk() const {
    std::cout << "Honk! Honk!" << std::endl;
}

std::string Cars::getColor() const {
    return color;
}

std::string Cars::getYear() const {
    return year;
}