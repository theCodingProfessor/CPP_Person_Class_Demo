// Constructor for the Person class
Person::Person(std::string name, int year, std::string course)
    : name(name), year(year), course(course) {}

// Function to get the name of the person
std::string Person::getName() const {
    return name;
}

// Function to display the ID number of the person
void Person::displayId(const IdClass &id) {
    std::cout << name << "'s ID number is: " << id.getIDNumber() << std::endl;
}

// Function to display information about the person
void Person::displayInfo() const {
    std::cout << "Name: " << name << std::endl; // Display name
    std::cout << "Year: " << year << std::endl; // Display year
    std::cout << "Course: " << course << std::endl; // Display course
}
