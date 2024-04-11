#include <iostream>
using namespace std;
#include "Person.h"

int main(){
    // instantiate person objects
    Person person1("John", 35, "male");
    Person person2("María", 17, "female");
    Person person3("Acuña", 24, "male");
    Person person4("Soto", 23, "male");
    Person person5("Eva", 28, "female");
    
    // display the data
    cout << "person 1: " << endl;
    person1.toString();
    cout << "person 2: " << endl;
    person2.toString();
    cout << "person 3: " << endl;
    person3.toString();
    cout << "person 4: " << endl;
    person4.toString();
    cout << "person 5: " << endl;
    person5.toString();
    // cout << "person 2: " << person2.toString() << endl;
    // cout << "person 3: " << person3.toString() << endl;
    // cout << "person 4: " << person4.toString() << endl;
    // cout << "person 5: " << person5.toString() << endl;


    return 0;
}