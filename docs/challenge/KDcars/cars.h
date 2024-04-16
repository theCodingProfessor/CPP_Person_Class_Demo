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
    std::string color;
    std::string year;
public:
    Cars(const std::string& color, const std::string& year);
    virtual ~Cars() {}
    virtual void drive() const = 0; 
    virtual void honk() const; 

    std::string getColor() const;
    std::string getYear() const;
};

#endif