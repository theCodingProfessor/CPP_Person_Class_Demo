#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
    public:
        Person(string, int, string);

        string get_name();
        int get_age();
        string get_gender();

        int set_name(string name);
        int set_age(int age);
        int set_gender(string gender);

        void toString();

    
    private:
        string name;
        int age;
        string gender;
};

#endif PERSON_H