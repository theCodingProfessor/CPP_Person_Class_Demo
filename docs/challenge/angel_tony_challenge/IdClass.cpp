#include "IdClass.h"


ID::ID(const std::string& idNumber) : idNumber(idNumber) {}

void ID::displayID(Person & person) {
    std::cout << "ID Number: " << idNumber << std::endl;
    std::cout << "Associated with: ";
    person.displayInfo();
}