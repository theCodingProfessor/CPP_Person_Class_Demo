// Clinton Garwood
// Created 2022, Updated 2024
// Main Driver: Inheritance Demo as Person<-Student as Parent<-Child

#include <iostream>
#include <vector>
#include <string>
#include "Person.h"

using namespace std;

#ifndef STUDENT_H
#define STUDENT_H

class Student : public Person, public basic_string<char> {
public:
    // Student Constructor Given No Data or Person Object
    // This constructor must prompt for student fields as well as check Person Object data
    Student();

    // Student Constructor Given A Person Object (which may or many not have a date,location,name)
    // This constructor must prompt for student fields as well as check the Person Object for data
    explicit Student(Person);

    // Student Constructor Given no Student Data, and data for a Person Object (but no person object)
    // This constructor must prompt for student fields
    Student(int, std::string, std::string);

    // Student Constructor Given data for a Student Object, and Person data, but no Person Object
    Student(std::string, int, float, std::string, int, std::string, std::string);

    // Student Constructor Given data for a Student Object, and a Person object
    Student(std::string, int, float, std::string, Person);

    // Student Constructor Given data for a Student Object, and without Person object
    Student(std::string, int, float, std::string);

    // Get Student_Person Fields
    std::string get_preferred_name();
    int get_student_id() const;
    float get_grade_point_average() const;
    std::string get_degree_pursued();
    std::string get_student_p_name();
    std::string get_student_p_location();
    int get_student_p_year();
    void get_student_person_data();

protected:

    // Set Student_Person Fields, (no prompts)
    void set_preferred_name(std::string);
    void set_student_id(int);
    void set_grade_point_average(float);
    void set_degree_pursued(std::string);

    // Set Initial Data in Student Fields (with prompts)
    static std::string establish_student_name();
    static int establish_student_id_number();
    static float establish_student_gpa();
    static std::string establish_student_degree_pursuit();

    // Set Initial Data in Student_Person Fields (with prompts)
    static int establish_year();
    static std::string establish_loc();
    static std::string establish_name();

private:
    std::string preferred_name;
    int student_id;
    float grade_point_average;
    std::string degree_pursued;
    Person Student_Person; // date, loc, name

};

#endif // STUDENT_H
