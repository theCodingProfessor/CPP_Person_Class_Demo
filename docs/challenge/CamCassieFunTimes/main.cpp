//Created by Camden Gugel and Cassandra Whittenhall
//Some code implemented from chat.openai.com

#include "Animal.h"
#include "CatDog.h"
#include <string>
#include <iostream>

int main() {
    Animal* genericAnimal = new Animal();
    genericAnimal->makeSound(); // Output: An animal makes a generic sound. Roar!
    delete genericAnimal;    // Deallocate memory

    Animal* cat = new Cat();
    cat->makeSound(); // Output: Meow!
    delete cat;    // Deallocate memory

    Animal* dog = new Dog();
    dog->makeSound(); // Output: Woof!
    delete dog;    // Deallocate memory

    std::string course = "CSCE-320";    // Print the course name
    std::cout << "Course: " << course << std::endl;

    return 0;    // End the program
}
