//Kaila Butt
//Pair Programming

#ifndef PRIMARYCLASS_H
#define PRIMARYCLASS_H

class FriendClass; 
class PrimaryClass {
private:
    int privateMember;

public:
    PrimaryClass();
    void display();

    friend class FriendClass; 

#endif // PRIMARYCLASS_H
