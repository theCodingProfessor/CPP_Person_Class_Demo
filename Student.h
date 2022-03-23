// Clinton Garwood
// Created by ncc306 on 3/18/22.
// Lab 12: Simple Inheritance

#include <iostream>
#include <vector>
#include <string>
using namespace std;
#include "Person.h"

#ifndef PERSON_STUDENT_H
#define PERSON_STUDENT_H

class Student : public Person, public basic_string<char> {
public:
    // Student Constructor Given No Data or Person Object
    // This constructor must prompt for student fields as well as check Person Object data
    Student();

    // Student Constructor Given A Person Object (which may or many not have a date,location,name)
    // This constructor must prompt for student fields as well as check the Person Object for data
    Student(Person);

    // Student Constructor Given no Student Data, and data for a Person Object (but no person object)
    // This constructor must prompt for student fields
    Student(int, std::string, std::string);

    // Student Constructor Given data for a Student Object, and Person data, but no Person Object
    Student(std::string, int, float, std::string, int, std::string, std::string);

    // Student Constructor Given data for a Student Object, and a Person object
    Student(std::string, int, float, std::string, Person);

    // Student Constructor Given data for a Student Object, and without Person object
    Student(std::string, int, float, std::string);

    std::string get_preferred_name();
    int get_student_id();
    float get_grade_point_average();
    std::string get_degree_pursued();
    std::string get_student_p_name();
    std::string get_student_p_location();
    int get_student_p_year();
    void get_student_person_data();

protected:

    // Simple setters (no prompts) for updating Student_Person Fields
    void set_preferred_name(std::string);
    void set_student_id(int);
    void set_grade_point_average(float);
    void set_degree_pursued(std::string);

    // Setters for Establishing Initial Data in Student Fields
    // These methods include prompts for fields
    std::string establish_student_name();
    int establish_student_id_number();
    float establish_student_gpa();
    std::string establish_student_degee_pursuit();

    //SGetters for Establishing Initial Data in Student_Person Fields
    // These methods include prompts for fields
    int establish_year();
    std::string establish_loc();
    std::string establish_name();

private:
    std::string preferred_name;
    int student_id;
    float grade_point_average;
    std::string degree_pursued;
    Person Student_Person; // date, loc, name

};


#endif //PERSON_STUDENT_H
