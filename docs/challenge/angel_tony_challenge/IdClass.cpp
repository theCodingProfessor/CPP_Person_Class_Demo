#include "IdClass.h"
#include "Person.h"

IdClass::IdClass(int idNumber) : idNumber(idNumber) {}

void IdClass::displayID(const Person &person) {
    std::cout << "ID Number: " << idNumber << std::endl;
    std::cout << "Associated with: CSCE306" << std::endl;
}

int IdClass::getIDNumber() const {
    return idNumber;
}
