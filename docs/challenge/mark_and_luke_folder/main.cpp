/**
 * File: main.cpp
 * Author: [Author Name]
 * Date: [Date]
 * Description: This file contains the main function demonstrating the usage
 * of the Shape class and its derived class Rectangle. It creates objects of
 * the Rectangle class, demonstrates polymorphic behavior by using pointers
 * to Shape, and displays information about the rectangles.
 */

#include <iostream>
#include "parent.h"
#include "child.h"

int main() {
    // Create objects of child class and demonstrate polymorphic behavior
    Shape* shape1 = new Rectangle(5, 3); // Create a rectangle object with width 5 and height 3
    Shape* shape2 = new Rectangle(2, 4); // Create another rectangle object with width 2 and height 4

    // Display information about the first rectangle
    shape1->display();
    std::cout << "Area: " << shape1->area() << std::endl; // Display area of first rectangle
    std::cout << "Perimeter: " << shape1->perimeter() << std::endl; // Display perimeter of first rectangle

    // Display information about the second rectangle
    shape2->display();
    std::cout << "Area: " << shape2->area() << std::endl; // Display area of second rectangle
    std::cout << "Perimeter: " << shape2->perimeter() << std::endl; // Display perimeter of second rectangle

    // Delete dynamically allocated objects to avoid memory leaks
    delete shape1;
    delete shape2;

    return 0;
}
