#ifndef PERSON_H
#define PERSON_H

using namespace std;

class IdClass;

class Person{
private:
    string name;
    int year;
    string course;
    // friend class IdClass
public:
    Person(string name, int year, string course);
    void displayId(const IdClass& ID);
    friend class IdClass;

};

#endif