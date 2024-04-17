#include "smartphone.h"
#include <iostream>

// Default constructor
Smartphone::Smartphone() : Device() {
    model = "";
    year = 0;
}

// Parameterized constructor
Smartphone::Smartphone(std::string brand, std::string model, int year) : Device(brand) {
    this->model = model;
    this->year = year;
}

// Setter for model
void Smartphone::setModel(std::string model) {
    this->model = model;
}

// Getter for model
std::string Smartphone::getModel() {
    return model;
}

// Setter for year
void Smartphone::setYear(int year) {
    this->year = year;
}

// Getter for year
int Smartphone::getYear() {
    return year;
}

// Display smartphone details
void Smartphone::displayDetails() {
    std::cout << std::endl; // Add an empty line for spacing
    std::cout << "Smartphone Details:" << std::endl;
    std::cout << "Brand: " << getBrand() << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
}
