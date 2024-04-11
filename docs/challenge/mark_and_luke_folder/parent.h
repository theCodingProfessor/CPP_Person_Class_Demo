/**
 * File: parent.h
 * Author: Mark & Luke
 * Date: 4/11/2024
 * Description: This header file defines the parent class Shape, which represents
 * geometric shapes. It contains pure virtual functions for calculating the area
 * and perimeter of a shape, as well as a virtual function for displaying shape
 * information.
 */

#ifndef PARENT_H
#define PARENT_H

// Parent class representing geometric shapes
class Shape {
public:
    /**
     * @brief Virtual function for calculating the area of the shape.
     * @return The area of the shape.
     */
    virtual double area() const = 0;

    /**
     * @brief Virtual function for calculating the perimeter of the shape.
     * @return The perimeter of the shape.
     */
    virtual double perimeter() const = 0;

    /**
     * @brief Virtual function for displaying shape information.
     */
    virtual void display() const = 0;
};

#endif // PARENT_H

