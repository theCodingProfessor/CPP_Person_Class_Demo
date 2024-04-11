/*
  File: main.cpp
  Author: Mark & Luke
  Date: 4/11/24

  Description: Main file to demonstrate the usage of Shape, Rectangle, and Circle classes.
*/

#include "Shape.hpp" // Include the Shape class header
#include "Rectangle.hpp" // Include the Rectangle class header
#include "Circle.hpp" // Include the Circle class header
#include <iostream>

int main() {
    Rectangle rectangle(4, 5); // Create a Rectangle object
    Circle circle(3); // Create a Circle object

    // Polymorphic behavior
    Shape* shapePtr1 = &rectangle; // Point to Rectangle object using Shape pointer
    Shape* shapePtr2 = &circle; // Point to Circle object using Shape pointer

    // Output area and perimeter of Rectangle
    std::cout << "Rectangle Area: " << shapePtr1->area() << std::endl;
    std::cout << "Rectangle Perimeter: " << shapePtr1->perimeter() << std::endl;

    // Output area and perimeter of Circle
    std::cout << "Circle Area: " << shapePtr2->area() << std::endl;
    std::cout << "Circle Perimeter: " << shapePtr2->perimeter() << std::endl;

    return 0;
}
