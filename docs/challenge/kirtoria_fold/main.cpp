// -------------------------------------------------------------------------
// Author: Kirtoria Ward
// Program: Object Inheritance 
// Date: April 16, 2024
// Description: This program defines the "Smartphone"  class, which is a child class inheriting 
//              from the parent class "Device".  It represents a specific type of electronic 
//              device with additional attributes such as model and year of release.
// -------------------------------------------------------------------------

#include "device.h"
#include "smartphone.h"

int main() {
    // Create a Device object
    Device device("Samsung");

    // Display device details
    device.displayDetails();
    

    // Create a Smartphone object
    Smartphone smartphone("Samsung", "S24", 2024);

    // Display smartphone details
    smartphone.displayDetails();

    return 0;
}
