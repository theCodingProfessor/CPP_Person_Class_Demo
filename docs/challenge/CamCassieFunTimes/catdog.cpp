//Cassandra Whittenhall
//CSCE 306
//Source: code referenced from https://chat.openai.com/

#include "catdog.h"
#include <iostream>

// Define the makeSound function for the Dog class
void Dog::makeSound() const {
    std::cout << "Bark!\n"; // Output "Bark!" to indicate the sound of a dog
}

// Define the makeSound function for the Cat class
void Cat::makeSound() const {
    std::cout << "Meow!\n"; // Output "Meow!" to indicate the sound of a cat
}

