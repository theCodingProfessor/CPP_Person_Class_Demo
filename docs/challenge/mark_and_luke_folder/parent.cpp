#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual double perimeter() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

#endif // SHAPE_HPP

