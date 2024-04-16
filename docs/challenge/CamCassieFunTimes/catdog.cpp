#include "catdog.h"
#include <iostream>

void Dog::makeSound() const {
    std::cout << "Bark!\n";
}

void Cat::makeSound() const {
    std::cout << "Meow!\n";
}
