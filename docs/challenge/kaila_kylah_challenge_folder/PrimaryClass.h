//Kaila Butt
//Pair Programming

#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class PayrollSystem; // Forward declaration

class Employee {
    friend class PayrollSystem;

public:
    // Constructor
    Employee(const std::string& name, int employeeID, double salary);

    // Getter functions for retrieving private member variables
    std::string getName() const;
    int getEmployeeID() const;
    double getSalary() const;

    // Setter function for modifying the 'salary' member variable
    void setSalary(double newSalary);

private:
    std::string name;
    int employeeID;
    double salary;
};

#endif // EMPLOYEE_H

