/**
 * File: child.cpp
 * Author: Mark & Luke
 * Date: 4/11/24
 */

#ifndef CHILD_H
#define CHILD_H

#include "parent.h"

// Child class representing a rectangle
class Rectangle : public Shape {
private:
    double width; // Width of the rectangle
    double height; // Height of the rectangle
public:
    /**
     * @brief Constructor to initialize the width and height of the rectangle.
     * @param w The width of the rectangle.
     * @param h The height of the rectangle.
     */
    Rectangle(double w, double h) : width(w), height(h) {}

    /**
     * @brief Function to calculate the area of the rectangle.
     * @return The area of the rectangle.
     */
    double area() const override { return width * height; }

    /**
     * @brief Function to calculate the perimeter of the rectangle.
     * @return The perimeter of the rectangle.
     */
    double perimeter() const override { return 2 * (width + height); }

    /**
     * @brief Function to display information about the rectangle.
     */
    void display() const override {
        std::cout << "Rectangle with width " << width << " and height " << height << std::endl;
    }
};

#endif // CHILD_H
