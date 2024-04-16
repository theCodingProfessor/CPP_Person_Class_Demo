#include <iostream>
#include "Cars.h"
#include "Honda.h"

int main() {
    Cars* cars = new Honda("Civic");
    std::cout << "Make: " << cars->getColor() << std::endl;
    std::cout << "Model: " << cars->getYear() << std::endl;
    cars->drive();
    cars->honk();
    delete cars;

    return 0;
}