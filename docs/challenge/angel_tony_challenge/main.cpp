#include "Person.h"
#include "IdClass.h"
#include "Person.cpp"
#include "IdClass.cpp"

int main() {
    Person person1("Antonio", 1, "CSCE306");
    Person person2("Angel", 3, "CSCE306");

    // Generate unique ID numbers
    static int lastAssignedId = 123456; // Initialize the last assigned ID number
    int idNumber1 = lastAssignedId++;   // Increment the last assigned ID number for person1
    int idNumber2 = lastAssignedId++;   // Increment the last assigned ID number for person2

    // Create IdClass objects with unique ID numbers
    IdClass id1(idNumber1);
    IdClass id2(idNumber2);

    person1.displayId(id1);
    id1.displayID(person1);

    person2.displayId(id2);
    id2.displayID(person2);

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

    // Increment last assigned ID number and use it for the new person
    int idNumber3 = lastAssignedId++;
    IdClass id3(idNumber3);
    Person person3(name, year, course);
    person3.displayId(id3);
    id3.displayID(person3);

    return 0;
}


