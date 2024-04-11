// Agustin Chavez
// CSCE 306
// 04/11/24
// Code description: This is a simple subtraction class that uses template programing


#ifndef SUBTRACT_H
#define SUBTRACT_H

template <typename T>
class Subtract {
public:
    T subtract(T a, T b) {
        return a - b;
    }
};

#endif
