#include "Person.h"
#include "IdClass.h"

using namespace std;

Person::Person(string name, int year, string course){
    this.name = name;
    this.year = year;
    this.course = course;
}

void Person::displayIdClass(const IdClass& ID){
    cout << name << "'s ID number is: " << ID.getIdNumber
}