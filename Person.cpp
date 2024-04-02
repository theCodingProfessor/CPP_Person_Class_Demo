// Clinton Garwood
// Created 2022, Updated 2024
// Person.cpp

#include "Person.h"
#include <string>
#include <iostream>
#include <utility>
using namespace std;

// Empty Constructor
Person::Person()= default;

// Create Person on only Birth Year
Person::Person(int b_year)
    : p_birth_year{b_year}
    {}

// Create Person on Birth Year and Location
Person::Person(int b_year, std::string b_loc)
    : p_birth_year{b_year}, p_location{std::move(b_loc)}
    {}

// Create Person on Birth Year, Location, and Person Name
Person::Person(int b_year, std::string b_loc, std::string b_name)
    : p_birth_year{b_year}, p_location{std::move(b_loc)}, p_name{std::move(b_name)}
    {}
void Person::set_birth_year(int b_year){
    this->p_birth_year = b_year;
}
void Person::set_location(std::string loc){
    this->p_location = std::move(loc);
}
void Person::set_person_name(std::string name){
    this->p_name = std::move(name);
}
int Person::get_person_year() const{
    return this->p_birth_year;
}
std::string Person::get_person_location(){
    return this->p_location;
}
std::string Person::get_person_name(){
    return this->p_name;
}
// Print out the Person data
void Person::report_person_data(){
    cout << "Person Name: " << get_person_name() << endl;
    cout << "Born on Date: " << get_person_year() << endl;
    cout << "Location Info: " << get_person_location() << endl;
}
