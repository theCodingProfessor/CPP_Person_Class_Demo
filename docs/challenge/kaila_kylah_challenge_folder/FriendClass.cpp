//
// Created by laren on 4/11/2024.
//

#include "Employee.h"

Employee::Employee(const std::string& name, int employeeID, double salary)
    : name(name), employeeID(employeeID), salary(salary) {}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}
