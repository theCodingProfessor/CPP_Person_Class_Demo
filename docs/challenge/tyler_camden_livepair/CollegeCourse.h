// CollegeCourse.h
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

#ifndef COLLEGECOURSE_H
#define COLLEGECOURSE_H

#include <iostream>
#include <vector>

class MyStudent; // Forward declaration of MyStudent class

class CollegeCourse {
private:
    static const std::string defaultCourseName;
    std::string courseName;
    std::vector<MyStudent*> students;
    friend class MyStudent; // MyStudent class is a friend
public:
    explicit CollegeCourse(std::string name);
    explicit CollegeCourse();
    void enrollStudent(MyStudent* student);
    void displayStudents() const; // Public method
    void displayCourseName() const;
};

#endif // COLLEGECOURSE_H
