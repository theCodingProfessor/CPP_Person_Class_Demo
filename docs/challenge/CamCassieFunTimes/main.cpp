#include "Animal.h"
#include "CatDog.h"
#include <string>
#include <iostream>

int main() {
    Animal* genericAnimal = new Animal();
    genericAnimal->makeSound(); // Output: An animal makes a generic sound.
    delete genericAnimal;

    Animal* cat = new Cat();
    cat->makeSound(); // Output: Meow!
    delete cat;

    Animal* dog = new Dog();
    dog->makeSound(); // Output: Woof!
    delete dog;

    std::string course = "CSCE-320";
    std::cout << "Course: " << course << std::endl;

    return 0;
}
