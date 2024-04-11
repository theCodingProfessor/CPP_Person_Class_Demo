// CollegeCourse.h
/******************************************************************
*
*   Author: Camden Welander (Partnered with Tyler McCoy)
*   NCC CSCE 306 Object Oriented Programming Spring 2024
*   Live Review/Pair Programming - Friend Class system
*   Description: We establish a friend class system where CollegeCourse
*   is the main class and MyStudent is the friend class. This header
*   file declares the CollegeCourse class, including its private data
*   members and public member functions.
*
*******************************************************************/

#ifndef COLLEGECOURSE_H
#define COLLEGECOURSE_H

#include <iostream>
#include <vector>

class MyStudent; // Forward declaration of MyStudent class

class CollegeCourse {
private:
    static const std::string defaultCourseName; // Default course name
    std::string courseName; // Name of the course
    std::vector<MyStudent*> students; // Vector to store enrolled students
    friend class MyStudent; // MyStudent class is a friend class
public:
    explicit CollegeCourse(std::string name); // Parameterized constructor
    explicit CollegeCourse(); // Default constructor
    void enrollStudent(MyStudent* student); // Method to enroll a student in the course
    void displayStudents() const; // Method to display enrolled students
    void displayCourseName() const; // Method to display the course name
};

#endif // COLLEGECOURSE_H
