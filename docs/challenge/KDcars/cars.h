//Header File
//File Name: Cars.h
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a header file for a cars class
//Code Assistance from ChatGPT
//Date: 4-16-2024



#ifndef CARS_H
#define CARS_H

#include <string>

class Cars {
protected:
    std::string color;
    int year;
public:
    Cars(const std::string& color, int year);
    void honk() const; 
    std::string getColor() const;
    int getYear() const;
};

#endif