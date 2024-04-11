

#include <iostream>
#include "SUB.h"


int main() {
    // Subtract integers
    Subtract<int> intSubtract;
    int resultInt = intSubtract.subtract(10, 5);
    std::cout << "Subtracting integers: " << resultInt << std::endl;

    // Subtract floating-point numbers
    Subtract<double> doubleSubtract;
    double resultDouble = doubleSubtract.subtract(10.5, 3.5);
    std::cout << "Subtracting doubles: " << resultDouble << std::endl;

    // Subtract custom types (e.g., complex numbers)
    // Assuming you have a custom type Complex defined elsewhere
    // Subtract<Complex> complexSubtract;
    // Complex resultComplex = complexSubtract.subtract(Complex(3, 4), Complex(1, 2));
    // std::cout << "Subtracting complex numbers: " << resultComplex << std::endl;

    return 0;
}
