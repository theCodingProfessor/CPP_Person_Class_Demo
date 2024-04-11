// Shea and Wissam
// Wissiam did this one
// CSCE 306: software development Live coding 3:Object oriented inheritance pair programming assignment
// Code desc: Person.h: Defines the Person class with constructors, destructors, and methods to manage 
// and display a person's name and age, encapsulating data access and modification.
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
