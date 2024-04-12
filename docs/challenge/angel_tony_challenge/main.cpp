//--------------------------------------------------------------------------------
// Author: Antonio Contreras, Angel Montes
// NCC CSCE 306 - OO Software Development
// Live Review 3
// Description: This project uses two .h files and three .cpp files with one being
// the main. Main uses constructors and include statements from both .h and .cpp
// files. Outputs Authors name, year, course, and ID number. After authors info
// is outputted user is allowed to input their info which then gets put into the
// constructors outputting user info in the same format as authors.
// documentation via chat.openai
//--------------------------------------------------------------------------------



#include "Person.h"    // Include the definition of the Person class
#include "IdClass.h"   // Include the definition of the IdClass class
#include "Person.cpp"  // Include the implementation of the Person class
#include "IdClass.cpp" // Include the implementation of the IdClass class

int main() {
    // Create two Person objects
    Person person1("Antonio", 1, "CSCE306");
    Person person2("Angel", 3, "CSCE306");

    // Generate unique ID numbers
    static int lastAssignedId = 123456; // Initialize the last assigned ID number
    int idNumber1 = lastAssignedId++;   // Increment the last assigned ID number for person1
    int idNumber2 = lastAssignedId++;   // Increment the last assigned ID number for person2

    // Create IdClass objects with unique ID numbers
    IdClass id1(idNumber1);
    IdClass id2(idNumber2);

    std::cout << "\n";
    std::cout << "\n";
    // Display information about person1
    person1.displayInfo();
    // Display the ID of person1
    person1.displayId(id1);

    std::cout << "\n";
    std::cout << "\n";

    // Display information about person2
    person2.displayInfo();
    // Display the ID of person2
    person2.displayId(id2);

    std::cout << "\n";
    std::cout << "\n";

    // Variables to store user input
    std::string name;
    int year;
    std::string course;

    // Input for user
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter course: ";
    std::cin >> course;
    std::cout << "\n";
    std::cout << "\n";

    // Increment last assigned ID number and use it for the new person
    int idNumber3 = lastAssignedId++;
    IdClass id3(idNumber3);
    Person person3(name, year, course);
    // Display information about the newly created person
    person3.displayInfo();
    // Display the ID of the newly created person
    person3.displayId(id3);

    return 0;
}
