#include <iostream>
#include <string>
#include <vector>
#include "cars.h"


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
