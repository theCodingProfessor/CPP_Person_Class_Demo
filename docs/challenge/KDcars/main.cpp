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
#include "Cars.cpp"
#include "Honda.cpp"

int main() {
    Cars car("Red", 2022);
    honda civic(car, "V8");

    civic.honk();

    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "Year: " << car.getYear() << std::endl;
    std::cout << "Engine: " << civic.get_engine_type() << std::endl;


    return 0;
}
