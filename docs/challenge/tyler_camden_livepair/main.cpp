// Main Driver for Tyler McCoy & Camden Welander Pair Programming Assignment
// Demonstrates the use of a friend class, and how it can access private data/methods of its friend.
// Created by Tyler McCoy and Camden Welander on 4/11/24.

#include "MyStudent.h"
#include "CollegeCourse.h"

int main() {
    MyCourse course("Object Oriented Software Development");

    // Create a student using default constructor
    MyStudent student1;

    // Create a student with custom name and ID
    MyStudent student2("Camden", 123456789);

    // Enroll students in the course
    course.enrollStudent(&student1);
    course.enrollStudent(&student2);

    // Accessing displayStudents through MyStudent friend class
    student1.displayEnrolledStudents(course);
    student2.displayEnrolledStudents(course);

    return 0;
}