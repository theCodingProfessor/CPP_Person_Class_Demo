//Header File
//File Name: main.cpp
//Author: Dylan and Khalid
//Assigment: LiveCode3
//Code Desc: This is the main file
//Code Assistance from ChatGPT
//Date: 4-16-2024



#include <iostream>
#include "Cars.h"
#include "Honda.h"

int main() {
    Cars cars("blue", 2022);
    Honda* honda = new Honda(cars, "V6");
    std::cout << "Color: " << honda->getColor() << std::endl;
    std::cout << "Year: " << honda->getYear() << std::endl;
    honda->drive();
    honda->honk();
    delete honda;

    return 0;
}


