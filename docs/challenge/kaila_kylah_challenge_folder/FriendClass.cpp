//
// Created by laren on 4/11/2024.
//

#include <iostream>
#include "FriendClass.h"
#include "PrimaryClass.h" // include primaryclass.h to access primary class

// Definition of showA() member function of class B
void Friend::showPrimary(PrimaryClass obj) {
    // Since B is a friend of A, it can access A's private members
    std::cout << "Primary Class's private member: " << obj.privateMember << std::endl;
}