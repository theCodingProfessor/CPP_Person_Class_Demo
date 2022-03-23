// Clinton Garwood
// Created by ncc306 on 3/19/22.
// Demo Code

using namespace std;
#include <string>
#include <vector>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include <algorithm> // we use this to call sort() and find()

auto lambdaSort = [] (Student S1, Student S2) -> bool
{
    return S1.get_student_p_name() < S2.get_student_p_name();
};

auto lambdaSortGPA = [] (Student S1, Student S2) -> bool
{
    return S1.get_grade_point_average() > S2.get_grade_point_average();
};

int main(){
Student S_1("Adam", 100001, 3.4, "Undergraduate", 2000, "Raleigh", "Rousseau");
Student S_2("Alice", 100010, 3.7, "Undergraduate", 2001, "Raleigh", "Riagan");
Student S_3("Andy", 100011, 3.9, "Post-Graduate", 1997, "Raleigh", "Rasputin");
Student S_4("Adrian", 100100, 3.6, "Post-Graduate", 2000, "Raleigh", "Radcliff");
Student S_5("Arron", 100101, 3.4, "Undergraduate", 1997, "Raleigh", "Romanoff");
Student S_6("Aries", 100110, 3.8, "Undergraduate", 1998, "Raleigh", "Ramsey");
Student S_7("Ashton", 100111, 3.8, "Doctoral", 1995, "Raleigh", "Rey");
Student S_8("Aquafina", 101000, 3.8, "Undergraduate", 2003, "Reno", "Ricci");
Student S_9("Ann", 101001, 3.6, "Undergraduate", 2000, "Reno", "Rice");
Student S_10("Antwan", 101010, 3.8, "Undergraduate", 2002, "Reno", "Rose");
Student S_11("Abe", 101011, 4.0, "Graduate", 1999, "Reno", "Ryan");
Student S_12("Ashley", 101100, 3.5, "Graduate", 1998, "Reno", "Robertson");
Student S_13("Aliah", 101100, 3.8, "Graduate", 1999, "Richmond", "Reynolds");
Student S_14("Apo", 101101, 3.7, "Doctoral", 1996, "Richmond", "Russell");
Student S_15("Alana", 101110, 3.8, "Undergraduate", 2002, "Richmond", "Ross");
Student S_16("Alex", 101111, 3.8, "Post-Graduate", 1995, "Rochester", "Richardson");
Student S_17("Allie", 110000, 4.0, "Post-Graduate", 1990, "Rochester", "Rogers");
Student S_18("Artie", 110001, 3.8, "Undergraduate", 2003, "Rochester", "Reed");
Student S_19("Atemus", 110010, 4.0, "Doctoral", 1995, "Richmond", "Roberts");
Student S_20("Ariana", 110011, 3.3, "Graduate", 1999, "Richmond", "Robinson");

std::vector<Student> Student_Body{S_1,S_2,S_3,S_4,S_5,S_6,S_7,S_8,S_9,S_10,S_11,S_12,S_13,S_14,S_15,S_16,S_17,S_18,S_19,S_20,};

// Sort all print all Studnets by last name, first name
std::sort(Student_Body.begin(), Student_Body.end(), lambdaSort);
cout << "\n\tStudents by Last Name, First Name: " << endl;
for (Student s : Student_Body)
  cout << "\t" << s.get_student_p_name() << s.get_preferred_name() << endl;

// Access an item from the vector
// Below calls the for the student id from the zeroith item in the vector of objects
//    cout << Student_Body[0].get_student_id();

// Report the names and the degree being pursued for students with a 4.0 GPA
float max_gpa = 4.0;
    for (int x = 0; x<20; x++){
      // cout << Student_Body[x].get_grade_point_average() << endl;
      if (Student_Body[x].get_grade_point_average() == 4.0){
        cout << Student_Body[x].get_preferred_name() << " " << Student_Body[x].get_student_p_name()
        << " who is in the " << Student_Body[x].get_degree_pursued() << " degree program, has a 4.0 GPA." << endl; }
    }

// 2) Calculate the average grade point average for each of the Degree Pursuit types (UG, G, PG, D).
    std::vector<Student>UG;
    std::vector<Student>GR;
    std::vector<Student>PG;
    std::vector<Student>DR;
    int ug_count = 0; int gr_count = 0; int pg_count=0; int dr_count = 0;
    float ug_total = 0.0; float gr_total = 0.0; float pg_total = 0.0; float dr_total = 0.0;
    for (int y = 0; y<20; y++){
        // read degree, assign to proper vector
        if (Student_Body[y].get_degree_pursued() == "Undergraduate"){
            UG.push_back(Student_Body[y]);
            ug_count++; ug_total += Student_Body[y].get_grade_point_average();}
        else if (Student_Body[y].get_degree_pursued() == "Graduate"){
            GR.push_back(Student_Body[y]);
            gr_count++; gr_total += Student_Body[y].get_grade_point_average();}
        else if (Student_Body[y].get_degree_pursued() == "Post-Graduate"){
            PG.push_back(Student_Body[y]);
            pg_count++; pg_total += Student_Body[y].get_grade_point_average();}
        else {
            DR.push_back(Student_Body[y]);
            dr_count++; dr_total += Student_Body[y].get_grade_point_average();}
        }
    cout << "\n\tThere are " << dr_count << " Doctoral Students with an average GPA of " << dr_total/dr_count << endl;
    cout << "\tThere are " << pg_count << " Post-Graduate Students with an average GPA of " << pg_total/pg_count << endl;
    cout << "\tThere are " << dr_count << " Graduate Students with an average GPA of " << gr_total/gr_count << endl;
    cout << "\tThere are " << ug_count << " Undergraduate Students with an average GPA of " << ug_total/ug_count << endl;

// 3)  Compute the most pursued degree:
    if ( (ug_count > gr_count) and (ug_count > pg_count) and (ug_count > dr_count) ){
        cout << "\n\tThe most popular degree program is Undergraduate Studies";
    } else if ( (gr_count > ug_count) and (gr_count > pg_count) and (gr_count > dr_count) ){
        cout << "\n\tThe most popular degree program is Graduate Studies";
    } else if ( (pg_count > ug_count) and (pg_count > gr_count) and (pg_count > dr_count) ){
        cout << "\n\tThe most popular degree program is Post-Graduate Studies" << endl;
    }

    // Sort all GPA for each Degree Display Each List
    std::sort(DR.begin(), DR.end(), lambdaSortGPA);
    cout << "\n\tDoctoral Students by GPA (Highest to Lowest): " << endl;
    for (Student s : DR)
        cout << "\t" << s.get_student_p_name() << " GPA : " << s.get_grade_point_average() << endl;
    std::sort(PG.begin(), PG.end(), lambdaSortGPA);
    cout << "\n\tPost-Graduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : PG)
        cout << "\t" << s.get_student_p_name() << " GPA : " << s.get_grade_point_average() << endl;
    std::sort(GR.begin(), GR.end(), lambdaSortGPA);
    cout << "\n\tGraduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : GR)
        cout << "\t" << s.get_student_p_name() << " GPA : " << s.get_grade_point_average() << endl;
    std::sort(UG.begin(), UG.end(), lambdaSortGPA);
    cout << "\n\tPost-Graduate Students by GPA (Highest to Lowest): " << endl;
    for (Student s : UG)
        cout << "\t" << s.get_student_p_name() << " GPA : " << s.get_grade_point_average() << endl;

    // Create Vectors (of Studnets) for each City
    vector<std::string> city_names;
    vector<Student> student_cities;
    std::string this_city;
    std::string v_this_city;
    for (Student each : Student_Body) {
        this_city = each.get_student_p_location(); // name of the city
        v_this_city = "v_" + this_city; // vector name for the city
        if (std::find(city_names.begin(), city_names.end(), this_city) == city_names.end()) {
            // Add the city name to the vector list
            cout << this_city << endl;
            city_names.push_back(this_city);
        }
    }
//    for (std::string s_city : city_names) {
//        std::string sin_city;
//        cin >> sin_city;
//        vector<Student> sin_city;
//    }
//        this_city = each.get_student_p_location(); // name of the city
//        v_this_city = "v_" + this_city; // vector name for the city
//        // Add the student to the v_city vector
//        if(v_this_city).push_back(each);
//        }

    return 0;
}