// Shea and Wissam
// Wissiam did this one
// CSCE 306: software development Live coding 3:Object oriented inheritance pair programming assignment
// Code desc: implementation of the Student class, which is derived from the Person class. 
// Here's a breakdown of the implemented functionalities: Constructor, getter, setter, displayinfo
// ChatGPT assisted

#include "Student.h"
#include <iostream>

// Constructor
Student::Student(std::string name, int age, std::string studentID, std::string major)
    : Person(name, age), m_studentID(studentID), m_major(major) {}

// Getter functions
std::string Student::getStudentID() const {
    return m_studentID;
}

std::string Student::getMajor() const {
    return m_major;
}

// Setter functions
void Student::setStudentID(std::string studentID) {
    m_studentID = studentID;
}

void Student::setMajor(std::string major) {
    m_major = major;
}

// Override displayInfo function to include student-specific details
void Student::displayInfo() const {
    Person::displayInfo();
    std::cout << "Student ID: " << m_studentID << ", Major: " << m_major << std::endl;
}
