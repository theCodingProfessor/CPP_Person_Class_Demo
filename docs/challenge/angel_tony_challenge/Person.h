#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class IdClass;

class Person {
private:
    std::string name;
    int year;
    std::string course;

public:
    Person(std::string name, int year, std::string course);
    std::string getName() const;
    void displayId(const IdClass &id);
    friend class IdClass;
};

#endif
