//Header File
//File Name: honda.cpp
//Author: Dylan
//Assigment: LiveCode3
//Code Desc: This is a header file for a honda class
//Code Assistance from ChatGPT
//Date: 4-16-2024 




#include <iostream>
#include <string>
#include <vector>
#include "Cars.h"


using namespace std;

#ifndef HONDA_H
#define HONDA_H

class honda : public Cars{
public:
    honda(const Cars& car_object, const string engine);
    void set_engine_type(string enigne);
    string get_engine_type();

private:
    string engine;

};

#endif