//Header File
//File Name: Cars.h
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a header file for a cars class
//Code Assistance from ChatGPT


#ifndef CARS_H
#define CARS_H

#include <string>

class Cars {
protected:
    std::string make;
    std::string model;
public:
    Cars(const std::string& make, const std::string& model);
    virtual ~Cars() {}
    virtual void drive() const = 0; // Pure virtual function
    virtual void honk() const; // Virtual function
    std::string getMake() const;
    std::string getModel() const;
};

#endif