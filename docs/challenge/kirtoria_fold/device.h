#ifndef DEVICE_H
#define DEVICE_H

#include <string>

class Device {
private:
    std::string brand; // Brand name of the device

public:
// Constructors
    Device(); // Default constructor
    Device(std::string brand); // Parameterized constructor
    void setBrand(std::string brand); // Setter for brand
    std::string getBrand(); // Getter for brand
    void displayDetails(); // Display device details
};

#endif
