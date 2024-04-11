/*
 * NCC Object-Oriented Programming
 * Spring 2024 C++ Peer Programming main.cpp
 * Assignment to demonstrate polymorphism using a bank account system
 * @author: Bhavnoor Saini (1354712), Santiago Ramirez (1346109)
 * Coded with help from Copilot
 * */

#include "poly.h"
#include <cmath>

int main() {
    string student1 = "Bhavnoor Saini";
    string student2 = "Santiago Ramirez";

    Checking checking(10000);
    Savings savings(4000, 0.05, 5);
    Credit credit(2000, 5000);

    cout << "\n\nChecking balance: " << checking.balance() << endl;
    cout << "Savings balance: " << savings.balance() << endl;
    cout << "Credit balance: " << credit.balance() << endl;
    cout << "Credit usage: " << credit.creditUsage() << "\n\n"<< endl;

    credits(student1, student2);

}