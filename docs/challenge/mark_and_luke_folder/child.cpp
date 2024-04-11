/*
  File: Rectangle.hpp
  Author: Mark & Luke
  Date: 4/11/24
  Description: Header file for the Rectangle class, a child class of Shape.
                 Header file for the Circle class, a child class of Shape.
*/

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override { return width * height; }
    double perimeter() const override { return 2 * (width + height); }
};

#endif // RECTANGLE_HPP

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14159 * radius * radius; }
    double perimeter() const override { return 2 * 3.14159 * radius; }
};

#endif // CIRCLE_HPP
