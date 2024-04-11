// MyStudent Implementation
// Created by Tyler McCoy on 4/11/24.


#include "MyStudent.h"

// Initialization of static member variables
const std::string MyStudent::defaultName = "Tyler";
const int MyStudent::defaultID = 000000000;

// Default constructor setting name to defaultName and id to defaultID
MyStudent::MyStudent() : name(defaultName), id(defaultID) {}

// Constructor with name and ID passed in
MyStudent::MyStudent(std::string name, int id) : name(name), id(id) {}

// Getters
std::string MyStudent::getName() const {
    return name;
}
int MyStudent::getID() const {
    return id;
}

