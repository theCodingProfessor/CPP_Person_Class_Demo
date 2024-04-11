// CollegeCourse.cpp
/******************************************************************
*
*   Author: Camden Welander (Partnered with Tyler McCoy)
*   NCC CSCE 306 Object Oriented Programming Spring 2024
*   Live Review/Pair Programming - Friend Class system
*   Description: We establish a friend classes, in the style of
 *   students in a course, with the course being the main class and
 *   the students being the friend class
*
*******************************************************************/

#include "CollegeCourse.h"
#include <iostream>

CollegeCourse::CollegeCourse(const std::string& name, const std::string& times, int seats, const std::string& prof)
        : courseName(name), professor(prof) {}

std::string CollegeCourse::getCourseName() const {
    return courseName;
}

void CollegeCourse::setCourseName(const std::string& name) {
    courseName = name;
}

std::string CollegeCourse::getProfessor() const {
    return professor;
}

void CollegeCourse::setProfessor(const std::string& prof) {
    professor = prof;
}

void CollegeCourse::displayCourseInfo() const {
    std::cout << "Course: " << courseName << std::endl;
    std::cout << "Times: " << courseTimes << std::endl;
    std::cout << "Seats Available: " << seatsAvailable << std::endl;
    std::cout << "Professor: " << professor << std::endl;
}

void MyCourse::enrollStudent(MyStudent* student) {
    students.push_back(student);
}

void Mycourse::displayStudents() const {
    std::cout << "Course: " << name << std::endl;
    std::cout << "Enrolled Students:" << std::endl;
    for (const auto& student : students) {
        std::cout << "- " << student->getName() << " (ID: " << student->getID() << ")" << std::endl;
    }
}