// Clinton Garwood
// Created by ncc306 on 3/18/22.
// Example for Student Class

#include <string>
#include <iostream>
#include "Student.h"
using namespace std;

// Student Constructor Given No Data or Person Object
// This constructor must prompt for student fields as well as check Person Object data
Student::Student()
    {
        set_preferred_name(establish_student_name());
        set_student_id(establish_student_id_number());
        set_grade_point_average(establish_student_gpa());
        set_degree_pursued(establish_student_degee_pursuit());
        Student_Person = Person(establish_year(),establish_loc(),establish_name());
    }

// Student Constructor Given A Person Object (which may or many not have a date,location,name)
// This constructor must prompt for student fields as well as check the Person Object for data
// Student::Student(Person){}
Student::Student(Person a_person)
    : Student_Person(a_person.get_person_year(),a_person.get_person_location(),a_person.get_person_name())
    {
    set_preferred_name(establish_student_name());
    set_student_id(establish_student_id_number());
    set_grade_point_average(establish_student_gpa());
    set_degree_pursued(establish_student_degee_pursuit());
    }

// Student Constructor Given no Student Data, and data for a Person Object (but no person object)
// This constructor must prompt for student fields -test
Student::Student(int the_year, std::string the_location, std::string the_name)
    : Student_Person(the_year,the_location,the_name)
    {
    set_preferred_name(establish_student_name());
    set_student_id(establish_student_id_number());
    set_grade_point_average(establish_student_gpa());
    set_degree_pursued(establish_student_degee_pursuit());
    }

// Student Constructor Given data for a Student Object, but no data for Person or Person object
// Student(std::string, int, float, std::string);
Student::Student(std::string as_name, int as_id, float as_gpa, std::string as_degree)
    :  preferred_name{as_name}, student_id{as_id},
       grade_point_average{as_gpa}, degree_pursued{as_degree}
    {
       Student_Person = Person(establish_year(),establish_loc(),establish_name());
    }

// Student Constructor Given data for a Student Object, and Person data, but no Person Object
// Student::Student(std::string, int, float, std::string, int, std::string, std::string){}
Student::Student(std::string a_name, int an_id, float start_gpa, std::string the_degree, int this_date, std::string this_loc, std::string this_name)
    :  preferred_name{a_name}, student_id{an_id},
       grade_point_average{start_gpa}, degree_pursued{the_degree},
       Student_Person(this_date,this_loc,this_name)
    {}

// Student Constructor Given data for a Student Object, and a Person object
// Student::Student(std::string, int, float, std::string, Person) {}
Student::Student(std::string a_name, int an_id, float start_gpa, std::string the_degree, Person aPerson)
    : preferred_name{a_name}, student_id{an_id},
      grade_point_average{start_gpa}, degree_pursued{the_degree},
      Student_Person(aPerson.get_person_year(),aPerson.get_person_location(),aPerson.get_person_name())
    {}


// Getters
std::string Student::get_preferred_name() {
    return this->preferred_name;
}

int Student::get_student_id(){
    return this->student_id;
}
float Student::get_grade_point_average(){
    return this->grade_point_average;
}
std::string Student::get_degree_pursued(){
    return this->degree_pursued;
}

std::string Student::get_student_p_name() {
    return Student_Person.get_person_name();
}

std::string Student::get_student_p_location() {
    return Student_Person.get_person_location();
}

int Student::get_student_p_year(){
    return Student_Person.get_person_year();
};

// test this report
void Student::get_student_person_data(){
    Student_Person.report_person_data();
}

// Setters
void Student::set_preferred_name(std::string this_name){
    this->preferred_name = this_name;
}
void Student::set_student_id(int std_id){
    this->student_id = std_id;
}
void Student::set_grade_point_average(float new_gpa){
    this->grade_point_average = new_gpa;
}

void Student::set_degree_pursued(std::string pursuing_degree){
    this->degree_pursued = pursuing_degree;
}


std::string Student::establish_student_name(){
    cout << "Please enter preferred name for student: " << endl;
    std::string pname;
    cin >> pname;
    return pname;
}

int Student::establish_student_id_number(){
    cout << "Please enter student ID number: " << endl;
    int id_num;
    cin >> id_num;
    return id_num;
}

float Student::establish_student_gpa(){
    cout << "Please enter initial student GPA: " << endl;
    float gpa;
    cin >> gpa;
    return gpa;
}

std::string Student::establish_student_degee_pursuit(){
    cout << "Please enter degree being pursued: " << endl;
    std::string degree;
    cin >> degree;
    return degree;
}


int Student::establish_year(){
    cout << "Please enter the birth year: " << endl;
    int year;
    cin >> year;
    return year;
}

std::string Student::establish_loc(){
    cout << "Please enter the home city: " << endl;
    std::string city;
    cin >> city;
    return city;
}

std::string Student::establish_name(){
    cout << "Please enter given name: " << endl;
    std::string given_name;
    cin >> given_name;
    return given_name;
}

