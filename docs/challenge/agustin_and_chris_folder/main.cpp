//Agustin Chavez and Chris Sotirovski
//NCC CSCE 306
//Description: This is the main file that uses both the add.h that chris created
//and the sub.h that agustin created. We used template programing to ensure
//that any data type would work

#include <iostream>
#include "SUB.h"
#include "ADD.h"
using namespace std;

string nccprint() {
    string c = "NCC CSCE ";
    string d = "306";
    Add<string> stringAdd; // Instantiate an object of the Add class
    string resultString = stringAdd.add(c, d); // Call the add function of the Add class

    return resultString;
};
int main() {

    //concatenating strings
    string a = "Agustin Chavez and ";
    string b = "Chris Sotirovski";
    string c = "NCC CSCE ";
    string d = "306";

    Add<string> stringAdd;
    Add<string> stringAndIntAdd;
    string resultString = stringAdd.add(a, b);
    string resultString2 = stringAdd.add(c, d);
    cout << "Contributors: " << resultString << endl;
    cout << "Course: " << nccprint() << endl;

    // Subtract integers
    Subtract<int> intSubtract;
    Add<int> intAdd;
    int resultIntS = intSubtract.subtract(10, 5);
    int resultIntA = intAdd.add(10, 5);
    cout << "Subtracting integers: " << resultIntS << endl;
    cout << "Adding integers: " << resultIntA << endl;


    // Subtract floating-point numbers
    Subtract<double> doubleSubtract;
    Add<double> doubleAdd; 
    double resultDoubleS = doubleSubtract.subtract(10.5, 3.5);
    double resultDoubleA = doubleAdd.add(10.5, 3.5);
    cout << "Subtracting doubles: " << resultDoubleS << endl;
    cout << "Adding doubles: " << resultDoubleA << endl;

   

    return 0;
}
