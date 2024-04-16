//Header File
//File Name: main.cpp
//Author: Dylan and Khalid
//Assigment: LiveCode3
//Code Desc: This is the main file
//Code Assistance from ChatGPT
//Date: 4-16-2024







#include <iostream>
#include "cars.h"
#include "honda.h"

int main() {
    Cars car("Red", 2022);
    honda civic(car, "V8");

    civic.honk();

    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;


    return 0;
}
