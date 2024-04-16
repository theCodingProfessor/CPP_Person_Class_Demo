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