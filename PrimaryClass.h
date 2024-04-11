//Kaila Butt
//Pair Programming

#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class PayrollSystem; // Forward declaration

class Employee {
    friend class PayrollSystem;

public:
    Employee(const std::string& name, int employeeID, double salary);

    void setSalary(double newSalary);

private:
    std::string name;
    int employeeID;
    double salary;
};

#endif // EMPLOYEE_H

