//Kaila Butt
//Pair Programming

#include <string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class PayrollSystem; 

class Employee {
    friend class PayrollSystem;

public:
    
    Employee(const std::string& name, int employeeID, double salary);

    std::string getName() const;
    int getEmployeeID() const;
    double getSalary() const;

    void setSalary(double newSalary);

private:
    std::string name;
    int employeeID;
    double salary;
};

#endif 

