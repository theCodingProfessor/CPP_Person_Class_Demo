// Created by Camden Gugel
// Some code implemented from chat.openai.com

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal {    // Create a generic master Animal class for other animal classes to build off
public:
    virtual ~Animal() {}     // Virtual destructor
    virtual void makeSound() const;    // Initialize function
};

#endif // ANIMAL_H
