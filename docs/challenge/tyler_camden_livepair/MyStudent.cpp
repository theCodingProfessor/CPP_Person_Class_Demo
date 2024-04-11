#include "MyStudent.h"

#include <utility>
#include "CollegeCourse.h" // Include CollegeCourse header for definition of displayStudents()

const std::string MyStudent::defaultName = "Tyler";
const int MyStudent::defaultID = 000000000;

MyStudent::MyStudent() : name(defaultName), id(defaultID) {}

MyStudent::MyStudent(std::string name, int id) : name(std::move(name)), id(id) {}

std::string MyStudent::getName() const {
    return name;
}

int MyStudent::getID() const {
    return id;
}

void MyStudent::displayEnrolledStudents(const CollegeCourse& course) {
    course.displayStudents(); // Accessing private method through friend class
}

