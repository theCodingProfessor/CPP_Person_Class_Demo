#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include "device.h"
#include <string>

class Smartphone : public Device {
private:
    std::string model; // Model of the smartphone
    int year; // Year of release

public:
    // Constructors
    Smartphone(); // Default constructor
    Smartphone(std::string brand, std::string model, int year); // Parameterized constructor

    // Member functions
    void setModel(std::string model); // Setter for model
    std::string getModel(); // Getter for model
    void setYear(int year); // Setter for year of release
    int getYear(); // Getter for year of release
    void displayDetails(); // Display smartphone details
};

#endif