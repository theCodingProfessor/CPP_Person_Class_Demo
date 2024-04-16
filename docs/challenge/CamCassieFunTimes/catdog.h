// CatDog.h

#ifndef CATDOG_H
#define CATDOG_H

#include "Animal.h"

class Cat : public Animal {
public:
    void makeSound() const override;
};

class Dog : public Animal {
public:
    void makeSound() const override;
};

#endif // CATDOG_H
