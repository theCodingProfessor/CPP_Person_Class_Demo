#include "Person.h"

#include <iostream>
using namespace std;
#include <string>

//constructor
Person::Person(string name, int age, string gender)
:name(name), age(age), gender(gender){}

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
int Person::set_name(string newName){
    name = newName;
    return 0;
}

int Person::set_age(int newAge){
    age = newAge;
    return 0;
}

int Person::set_gender(string newGender){
    gender = newGender;
    return 0;
}

// to display the data
void Person::toString (){
    cout << "\n\tName: " << get_name() << "\n\tAge: " << get_age() << "\n\tGender: " << get_gender() << "\n" << endl;
}





