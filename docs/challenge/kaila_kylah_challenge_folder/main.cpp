//Kaila Butt and Kylah Fulghum
//Pair Programming

#include <iostream>
#include "FriendClass.h"
#include "PrimaryClass.h"

int main() {
   
    Employee employee("John Doe", 1001, 50000.0);

   std::cout << "Employee Details:" << std::endl;
std::cout << "Name: " << employee.getName() << std::endl;
std::cout << "Employee ID: " << employee.getEmployeeID() << std::endl;
std::cout << "Salary: $" << employee.getSalary() << std::endl;

    PayrollSystem payrollSystem;

    double annualSalary = payrollSystem.calculateSalary(employee);
    std::cout << "\nAnnual Salary: $" << annualSalary << std::endl;


    employee.setSalary(55000.0);


    annualSalary = payrollSystem.calculateSalary(employee);
    std::cout << "\nUpdated Annual Salary: $" << annualSalary << std::endl;

    return 0;
}