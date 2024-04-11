#ifndef IDCLASS_H
#define IDCLASS_H

#include <iostream>
#include <string>
#include Person.h


class ID {
private:
    int idNumber;

public:
    int getIDNumber() const;
    ID(const int& idNumber);
    void displayID(Person & person);
};

#endif