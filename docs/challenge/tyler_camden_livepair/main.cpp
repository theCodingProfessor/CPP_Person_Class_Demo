// Main Driver for Tyler McCoy & Camden Welander Pair Programming Assignment
// Demonstrates the use of a friend class, and how it can access private data/methods of its friend.
// Created by Tyler McCoy and Camden Welander on 4/11/24.

#include "MyStudent.h"  // Including the header file for MyStudent class
#include "CollegeCourse.h"  // Including the header file for CollegeCourse class

int main() {
    // Creating a CollegeCourse object
    CollegeCourse course;
    CollegeCourse course1("Mathematics");

    // Creating students
    MyStudent student1;
    MyStudent student2("Bob", 987654321);

    // Enrolling students in the course
    course.enrollStudent(&student1);
    course.enrollStudent(&student2);
    course1.enrollStudent(&student1);

    // Displaying enrolled students
    MyStudent::displayEnrolledStudents(course);  // Displaying enrolled students for course
    MyStudent::displayEnrolledStudents(course1); // Displaying enrolled students for course1

    return 0;
}
