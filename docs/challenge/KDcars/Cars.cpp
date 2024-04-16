//Header File
//File Name: Cars.cpp
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a C++ file for a cars class
//Code Assistance from ChatGPT



#include "cars.h"
#include <iostream>

Cars::Cars(const std::string& make, const std::string& model) : make(make), model(model) {}

void Cars::honk() const {
    std::cout << "Honk! Honk!" << std::endl;
}

std::string Cars::getMake() const {
    return make;
}

std::string Cars::getModel() const {
    return model;
}