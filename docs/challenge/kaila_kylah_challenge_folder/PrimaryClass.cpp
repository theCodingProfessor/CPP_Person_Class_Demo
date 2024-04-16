//Kaila Butt
//Pair Programming

#include "PrimaryClass.h"

Employee::Employee(const std::string& name, int employeeID, double salary)
    : name(name), employeeID(employeeID), salary(salary) {}

void Employee::setSalary(double newSalary) {
    salary = newSalary;
}
