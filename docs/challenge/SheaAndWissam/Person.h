// Shea and Wissam
// Shea did this one
// CSCE 306 Live coding 3: Object Inheritance Pair Programming Assignment
// Code Desc: This C++ header file defines a Person class which models a person with attributes for name and age.
// The attributes m_name and m_age are private, meaning they cannot be accessed directly outside the class. 
//This encapsulation ensures that the internal state of the person can only be modified through the class's 
//public functions.
// ChatGPT assisted

#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    // Constructor
    Person(std::string name, int age);

    // Destructor
    ~Person();

    // Getter functions
    std::string getName() const;
    int getAge() const;

    // Setter functions
    void setName(std::string name);
    void setAge(int age);

    // Other member functions
    void displayInfo() const;

private:
    std::string m_name;
    int m_age;
};

#endif // PERSON_H
