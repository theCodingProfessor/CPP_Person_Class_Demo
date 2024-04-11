//
// Created by Chris Sotirovski on 4/11/24.
//

#ifndef ADD_H
#define ADD_H

template <typename T>
class Add {
private:
    T a;
    T b;

public:
    Add(T x, T y) : a(x), b(y) {}

    T getResult() const {
        return a + b;
    }
};

#endif // ADD_H

