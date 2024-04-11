#ifndef PERSON_H
#define PERSON_H

using namespace std;

class IdClass;

class Person{
private:
    string name;
    int year;
    string course;
public:
    Person(string name, int year, string course);

    friend class IdClass;

};

#endif