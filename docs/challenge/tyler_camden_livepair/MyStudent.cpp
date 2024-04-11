/******************************************************************
*
*   Author: Tyler McCoy (Partnered with Camden W.)
*   NCC CSCE 306 Object Oriented Programming Spring 2024
*   Live Review/Pair Programming - Friend Class system
*   Description: Implementation of MyStudent class. Has member data
*   name and ID. Accesses private information of CollegeCourse class
*   using displayEnrolledStudents as a friend of CollegeCourse.
*
*******************************************************************/

#include "MyStudent.h"  // Include MyStudent header file.
#include "CollegeCourse.h" // Include CollegeCourse header for definition of displayStudents()

#include <utility>

// Set Default Data
const std::string MyStudent::defaultName = "Tyler";
const int MyStudent::defaultID = 000000000;

// Constructors
MyStudent::MyStudent() : name(defaultName), id(defaultID) {}    // Default Constructor
MyStudent::MyStudent(std::string name, int id) : name(std::move(name)), id(id) {}   // Parameterized Constructor

// Getters
std::string MyStudent::getName() const {    // Accessor for name data
    return name;
}
int MyStudent::getID() const {  // Accessor for ID data
    return id;
}

// Display Enrolled Students -> displays all students enrolled in the course passed in.
void MyStudent::displayEnrolledStudents(const CollegeCourse& course) {
    course.displayStudents(); // Accessing private method through friend class
}

