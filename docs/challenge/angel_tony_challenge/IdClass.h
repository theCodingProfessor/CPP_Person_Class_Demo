#ifndef IDCLASS_H
#define IDCLASS_H

#include <iostream>
#include <string>
#include Person.h


class ID {
    private:
    std::string idNumber;

public:
    ID(const std::string& idNumber);
    void displayID(Person & person);
};

#endif