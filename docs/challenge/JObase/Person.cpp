#include "Person.h"

#include <iostream>
using namespace std;
#include <string>

//constructor
Person::Person(){
    set_name();
    set_age();
    set_gender();
};

//define getter methods to retrieve the data
string Person::get_name(){
    return name;
}

int Person::get_age(){
    return age;
}

string Person::get_gender(){
    return gender;
}


//define setter methods to renew the data
void Person::set_name(){
    std::cout << "Enter the name of Player: ";
    std::cin >> name;
}

void Person::set_age(){
    std::cout << "Enter the age of Player: ";
    std::cin >> age;
}
void Person::set_gender(){
    std::cout << "Enter the gender of Player: ";
    std::cin >> gender;
}

// to display the data
void Person::toString (){
    cout << "\n\tName: " << get_name() << "\n\tAge: " << get_age() << "\n\tGender: " << get_gender() << endl;
}





