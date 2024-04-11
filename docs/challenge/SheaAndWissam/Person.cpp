// Shea and Wissam
// Shea did this one
// CSCE 306 Live coding 3: Object Inheritance Pair Programming Assignment
// Code Desc: This code represents a simple class implementation that models a person with basic attributes
// and methods to interact with these attributes. It includes creation of objects, displaying their attributes, 
// and the structure also supports modifying the attributes.
// ChatGPT assisted

#include "Person.h"
#include <iostream>

// Constructor
Person::Person(std::string name, int age) : m_name(name), m_age(age) {}

// Destructor
Person::~Person() {}

// Getter functions
std::string Person::getName() const {
    return m_name;
}

int Person::getAge() const {
    return m_age;
}

// Setter functions
void Person::setName(std::string name) {
    m_name = name;
}

void Person::setAge(int age) {
    m_age = age;
}

// Other member functions
void Person::displayInfo() const {
    std::cout << "Name: " << m_name << ", Age: " << m_age << std::endl;
}

int main() {
    // Create a Person object
    Person person("Shea", 20);

    // Display information about the person
    person.displayInfo();

    // Update person's age
    //person.setAge(20);

    Person person2("Wissam", 20);

    person2.displayInfo();

    // Display updated information
    //std::cout << "Updated age: " << person.getAge() << std::endl;

    return 0;
}
