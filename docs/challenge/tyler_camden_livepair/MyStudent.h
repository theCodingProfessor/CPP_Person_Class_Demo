/******************************************************************
*
*   Author: Tyler McCoy (Partnered with Camden W.)
*   NCC CSCE 306 Object Oriented Programming Spring 2024
*   Live Review/Pair Programming - Friend Class system
*   Description: MyStudent class header file.
*******************************************************************/

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

#include <iostream>

class CollegeCourse; // Forward declaration of CollegeCourse class

class MyStudent {
private:
    static const std::string defaultName;   // default name member data
    static const int defaultID;             // default ID member data
    std::string name;                       // name member data
    int id;                                 // id member data
public:
    MyStudent();                            // default constructor
    MyStudent(std::string name, int id);    // parameterized constructor
    [[nodiscard]] std::string getName() const;  // getName accessor
    [[nodiscard]] int getID() const;            // getID accessor
    static void displayEnrolledStudents(const CollegeCourse& course) ; // member function to display enrolled students
};

#endif //PERSON_STUDENT_H
