#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {
public:
    virtual ~Animal() {} // Virtual destructor
    virtual void makeSound() const;
};

#endif // ANIMAL_H
