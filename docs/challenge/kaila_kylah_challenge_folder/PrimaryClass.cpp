//Kaila Butt
//Pair Programming

#include "PrimaryClass.h"

Employee::Employee(const std::string& name, int employeeID, double salary)
    : name(name), employeeID(employeeID), salary(salary) {}

std::string Employee::getName() const {
    return name;
}

int Employee::getEmployeeID() const {
    return employeeID;
}

double Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}
