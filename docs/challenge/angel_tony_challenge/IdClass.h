#ifndef IDCLASS_H
#define IDCLASS_H

#include <iostream>
#include <string>

// Declaration of the IdClass class
class IdClass {
private:
    int idNumber; // Private member variable to store ID number

public:
    // Constructor to initialize IdClass with an ID number
    IdClass(int idNumber);

    // Function to get the ID number
    int getIDNumber() const;

    // Function to display ID information associated with a person
    void displayID(const Person &person);
};

#endif
