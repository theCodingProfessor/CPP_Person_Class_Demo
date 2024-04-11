#include "Person.h"
#include "IdClass.h"

Person::Person(std::string name, int year, std::string course)
    : name(name), year(year), course(course) {}

std::string Person::getName() const {
    return name;
}

void Person::displayId(const IdClass &id) {
    std::cout << name << "'s ID number is: " << id.getIDNumber() << std::endl;
}

//git pull origin master to sync/merge