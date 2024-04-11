#include "IdClass.h"


ID::ID(const int& idNumber) : idNumber(idNumber) {}

void ID::displayID(Person & person) {
    std::cout << "ID Number: " << idNumber << std::endl;
    std::cout << "Associated with: ";
    person.displayInfo();
}

int ID::getIDNumber() const {
    return idNumber;
}