// Shea and Wissam
// We both made our own person/ student to test it
// CSCE 306 Live coding 3: Object Inheritance Pair Programming Assignment
//Code desc: Used to test all the functions and prove that Student and Person works!

#include "Student.h"
#include <iostream>

int main() {
    // Create a Person object
    Person person("Shea Smith", 20);
    std::cout << "Testing Person:" << std::endl;
    person.displayInfo();  // Display information of the Person object

    // Create a Student object
    Student student("Wissam Koraichi", 20, "111111", "Computer Science");
    std::cout << "\nTesting Student:" << std::endl;
    student.displayInfo();  // Display information of the Student object, including inherited attributes

    // Test setters and getters
    std::cout << "\nUpdating Student's major to 'Data Science':" << std::endl;
    student.setMajor("Data Science");  // Change the student's major
    std::cout << "Updated Student Info:" << std::endl;
    student.displayInfo();  // Display updated information

    return 0;
}
