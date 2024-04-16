// Constructor for IdClass
IdClass::IdClass(int idNumber) : idNumber(idNumber) {}

// Function to display ID information associated with a person
void IdClass::displayID(const Person &person) {
    std::cout << "ID Number: " << idNumber << std::endl; // Display ID number
    std::cout << "Associated with: " << person.getName() << std::endl; // Display person's name
}

// Function to get the ID number
int IdClass::getIDNumber() const {
    return idNumber; // Return the ID number
}
