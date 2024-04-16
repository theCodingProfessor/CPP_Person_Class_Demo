#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

// Forward declaration of IdClass to avoid circular dependency
class IdClass;

// Declaration of the Person class
class Person {
private:
    std::string name;   // Private member variable to store name
    int year;           // Private member variable to store year
    std::string course; // Private member variable to store course

public:
    // Constructor to initialize a Person object with name, year, and course
    Person(std::string name, int year, std::string course);

    // Function to get the name of the person
    std::string getName() const;

    // Function to display the ID number of the person
    void displayId(const IdClass &id);

    // Function to display information about the person
    void displayInfo() const;

    // Friend declaration of IdClass to allow access to private members
    friend class IdClass;

};

#endif
