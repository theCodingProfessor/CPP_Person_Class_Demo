//CPP File
//File Name: honda.cpp
//Author: Dylan
//Assigment: LiveCode3
//Code Desc: This is a C++ file for a honda class
//Code Assistance from ChatGPT
//Date: 4-16-2024


#include <string>
#include <iostream>
#include <utility>
#include "Honda.h"

using namespace std;


honda::honda(const Cars& car_object, const string engine) : Cars(car_object), engine(engine) {

}

// Setter definition
void honda::set_engine_type(string engine) {
    this->engine = engine;
}

// Getter definition
string honda::get_engine_type() {
    return engine;
}