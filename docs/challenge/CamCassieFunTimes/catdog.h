//Cassandra Whittenhall
//CSCE 306
//Source: code referenced from https://chat.openai.com/

#ifndef CATDOG_H
#define CATDOG_H

#include "Animal.h"

// Declaration of the Cat class, which inherits from the Animal class
class Cat : public Animal {
public:
    void makeSound() const override; // Declaration of the makeSound function for Cat
};

// Declaration of the Dog class, which inherits from the Animal class
class Dog : public Animal {
public:
    void makeSound() const override; // Declaration of the makeSound funct
