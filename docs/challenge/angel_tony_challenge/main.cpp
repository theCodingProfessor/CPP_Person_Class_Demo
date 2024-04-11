#include "Person.h"
#include "IdClass.h"
#include "IdClass.cpp"
#include "Person.cpp"

int main() {
    Person person1("Antonio", 1, "CSCE306"); // Assuming "first" and "third" are variables or enums defined elsewhere
    Person person2("Angel", 3, "CSCE306");
    IdClass id(123456);

    person1.displayId(id);
    id.displayID(person1);

    person2.displayId(id);
    id.displayID(person2);

     std::string name;
    int year;
    std::string course;
    int idNumber;

    // Input for user
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter course: ";
    std::cin >> course;

    return 0;
}

