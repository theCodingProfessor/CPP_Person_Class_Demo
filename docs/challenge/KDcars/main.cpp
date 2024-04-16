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
    Cars* cars = new Honda("blue", 2022);
    std::cout << "Color: " << cars->getColor() << std::endl;
    std::cout << "Year: " << cars->getYear() << std::endl;
    cars->drive();
    cars->honk();
    delete cars;

    return 0;
}
