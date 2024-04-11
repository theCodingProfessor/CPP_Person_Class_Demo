#include "CollegeCourse.h" // Including the header file for CollegeCourse class

#include <utility>
#include "MyStudent.h" // Including MyStudent header for definition of displayEnrolledStudents()

const std::string CollegeCourse::defaultCourseName = "Object Oriented Programming"; // Default course name

CollegeCourse::CollegeCourse(std::string name) : courseName(std::move(name)) {} // Parameterized constructor

CollegeCourse::CollegeCourse() : courseName(defaultCourseName) {} // Default constructor

void CollegeCourse::enrollStudent(MyStudent* student) {
    students.push_back(student); // Add student pointer to vector
}

void CollegeCourse::displayStudents() const {
    CollegeCourse::displayCourseName(); // Display the course name
    std::cout << "Enrolled Students:" << std::endl;
    for (const auto& student : students) {
        std::cout << "- " << student->getName() << " (ID: " << student->getID() << ")" << std::endl; // Display each enrolled student's name and ID
    }
}

void CollegeCourse::displayCourseName() const {
    std::cout << "Course: " << courseName << std::endl; // Display the course name
}
