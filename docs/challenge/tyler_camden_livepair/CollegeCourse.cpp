#include "CollegeCourse.h"

#include <utility>
#include "MyStudent.h" // Include MyStudent header for definition of displayEnrolledStudents()

const std::string CollegeCourse::defaultCourseName = "Object Oriented Programming";

CollegeCourse::CollegeCourse(std::string  name) : courseName(std::move(name)) {}
CollegeCourse::CollegeCourse() : courseName(defaultCourseName) {}

void CollegeCourse::enrollStudent(MyStudent* student) {
    students.push_back(student);
}

void CollegeCourse::displayStudents() const {
    CollegeCourse::displayCourseName();
    std::cout << "Enrolled Students:" << std::endl;
    for (const auto& student : students) {
        std::cout << "- " << student->getName() << " (ID: " << student->getID() << ")" << std::endl;
    }
}

void CollegeCourse::displayCourseName() const {
    std::cout << "Course: " << courseName << std::endl;
}
