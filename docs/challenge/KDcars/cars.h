//Header File
//File Name: Cars.h
//Author: Khalid
//Assigment: LiveCode3
//Code Desc: This is a header file for a cars class
//Code Assistance from ChatGPT


#ifndef CARs_H
#define CARs_H

#include <string>

class Cars {
protected:
    std::string color;
    int year;
public:
    Cars(const std::string& color, int year);
    virtual ~Cars() {}
    virtual void drive() const = 0; 
    virtual void honk() const; 
    std::string getColor() const;
    int getYear() const;
};

#endif
