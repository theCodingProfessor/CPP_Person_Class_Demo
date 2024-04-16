#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class Person{
    public:
        Person();

        string get_name();
        int get_age();
        string get_gender();

        void set_name();
        void set_age();
        void set_gender();

        void toString();

    
    private:
        string name;
        int age;
        string gender;
};

#endif // PERSON_H