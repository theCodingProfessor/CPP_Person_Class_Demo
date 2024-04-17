#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    std:: string name;
    int age;
public:
// This is the constructor 
    Person(std::string _name, int _age);
// Function to display person information
    void displayInfo() const;
// Getter functions
    std::string getName() const;
    int getAge() const;
};


#endif // PERSON_H