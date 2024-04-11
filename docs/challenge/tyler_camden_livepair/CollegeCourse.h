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

#include <string>

class MyStudent; // Forward declaration of the friend class

class CollegeCourse {
private:
    std::string courseName;
    std::string professor;
    friend class MyStudent;
    void displayStudents() const;
    friend class Student; // Declare Student class as a friend

public:
    CollegeCourse(const std::string& name, const std::string& times, int seats, const std::string& prof);
    std::string getCourseName() const;
    void setCourseName(const std::string& name);
    std::string getProfessor() const;
    void setProfessor(const std::string& prof);
    void displayCourseInfo() const;
    void enrollStudents(MyStudent* student);
    };

#endif // COLLEGECOURSE_H
