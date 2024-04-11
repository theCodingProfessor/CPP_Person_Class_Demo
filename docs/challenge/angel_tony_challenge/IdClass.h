#ifndef IDCLASS_H
#define IDCLASS_H

#include <iostream>
#include <string>

class Person;

class IdClass {
private:
    int idNumber;

public:
    IdClass(int idNumber);
    int getIDNumber() const;
    void displayID(const Person &person);
};

#endif
