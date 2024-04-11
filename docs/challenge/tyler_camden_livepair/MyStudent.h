// Student Header File
// Created by Tyler McCoy on 4/11/24.

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

#include <iostream>
#include "CollegeCourse.h"

class CollegeCourse; // Forward declaration of Course class

class MyStudent {
private:
    static const std::string defaultName; // Static member variable for default name
    static const int defaultID; // Static member variable for default ID
    std::string name;
    int id;
public:
    MyStudent();
    MyStudent(std::string name, int id);
    std::string getName() const;
    int getID() const;
};

#endif //PERSON_STUDENT_H
