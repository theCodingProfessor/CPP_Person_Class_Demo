//Kaila Butt
//Pair Programming

#include "PrimaryClass.h"
#include "FriendClass.h"

PrimaryClass::PrimaryClass() : privateMember(42) {}

void PrimaryClass::display() {
    FriendClass fc;
    fc.accessFriendData(*this);
}
