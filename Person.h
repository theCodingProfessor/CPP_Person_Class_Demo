// Clinton Garwood
// Created 2022, Updated 2024
// Person.h

#include <string>
#include <iostream>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person {
public:
    Person();
    Person(int);
    Person(int,std::string);
    Person(int,std::string,std::string);

    // Print out the Person data
    void report_person_data();

    int get_person_year() const;
    std::string get_person_name();
    std::string get_person_location();

protected:
    void set_birth_year(int);
    void set_location(std::string);
    void set_person_name(std::string);

    std::string p_location;
    int p_birth_year = 2222;
    std::string p_name;

private:

};

#endif // PERSON_H
