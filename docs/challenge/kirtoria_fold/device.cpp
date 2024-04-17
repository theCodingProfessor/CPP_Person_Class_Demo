#include "device.h"
#include <iostream>

Device::Device() {
    brand = "";
}

Device::Device(std::string brand) {
    this->brand = brand;
}
// Setter for brand
void Device::setBrand(std::string brand) {
    this->brand = brand;
}

// Getter for brand
std::string Device::getBrand() {
    return brand;
}
// Display device details
void Device::displayDetails() {
    std::cout << std::endl; // Add an empty line for spacing
    std::cout << "Device Details:" << std::endl;
    std::cout << "Brand: " << brand << std::endl;
}
