// Shea and Wissam
// Wissiam did this one
// CSCE 306: software development Live coding 3:Object oriented inheritance pair programming assignment
// Code desc: This C++ header file introduces the Student class, which inherits from the previously defined 
//Person class. The Student class is designed to represent a student, extending the Person with specific 
//attributes and behaviors relevant to a student.
// ChatGPT assisted

#include "Person.h"
#include <string>

class Student : public Person {
private:
    std::string m_studentID;
    std::string m_major;

public:
    Student(std::string name, int age, std::string studentID, std::string major);

    std::string getStudentID() const;
    std::string getMajor() const;

    void setStudentID(std::string studentID);
    void setMajor(std::string major);

    void displayInfo() const;
};
