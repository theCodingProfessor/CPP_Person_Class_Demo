/*
  File: Shape.hpp
  Author: Luke & Mark
  Date: 4/11/24

  Description: Header file for the Shape class, an abstract base class for geometric shapes.
*/

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for calculating area
    virtual double perimeter() const = 0; // Pure virtual function for calculating perimeter
    virtual ~Shape() {} // Virtual destructor for proper cleanup
};

#endif // SHAPE_HPP

