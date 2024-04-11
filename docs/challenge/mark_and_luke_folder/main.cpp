/*
  File: main.cpp
  Author: Mark & Luke
  Date: 4/11/24

  Description: Main file to demonstrate the usage of Shape, Rectangle, and Circle classes.
*/

#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include <iostream>

int main() {
    Rectangle rectangle(4, 5);
    Circle circle(3);

    // Polymorphic behavior
    Shape* shapePtr1 = &rectangle;
    Shape* shapePtr2 = &circle;

    std::cout << "Rectangle Area: " << shapePtr1->area() << std::endl;
    std::cout << "Rectangle Perimeter: " << shapePtr1->perimeter() << std::endl;

    std::cout << "Circle Area: " << shapePtr2->area() << std::endl;
    std::cout << "Circle Perimeter: " << shapePtr2->perimeter() << std::endl;

    return 0;
}


