// Student Header File
// Created by Tyler McCoy on 4/11/24.

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

#include <iostream>

class CollegeCourse; // Forward declaration of CollegeCourse class

class MyStudent {
private:
    static const std::string defaultName;
    static const int defaultID;
    std::string name;
    int id;
public:
    MyStudent();
    MyStudent(std::string name, int id);
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getID() const;
    static void displayEnrolledStudents(const CollegeCourse& course) ; // Member function to display enrolled students
};

#endif //PERSON_STUDENT_H
