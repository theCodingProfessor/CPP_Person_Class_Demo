#include <iostream>
#include "Cars.h"
#include "Honda.h"

int main() {
    Cars* cars = new Honda("blue", 2022);
    std::cout << "Color: " << cars->getColor() << std::endl;
    std::cout << "Year: " << cars->getYear() << std::endl;
    cars->drive();
    cars->honk();
    delete cars;

    return 0;
}
