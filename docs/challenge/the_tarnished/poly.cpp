/*
 * NCC Object-Oriented Programming
 * Spring 2024 C++ Peer Programming poly.cpp
 * Assignment to demonstrate polymorphism using a bank account system
 * @author: Bhavnoor Saini (1354712), Santiago Ramirez (1346109)
 * Coded with help from Copilot
 * */

#include "poly.h"
using namespace std;

//Prints a line with the credits of this program and the class it was made in
void credits (string student1, string student2) {
    cout << "This program was made by " << student1 << " & " << student2 << " in CSCE 306 at NCC." << endl;
    return;
}

//Calls the Checking Accounts balance method and returns the balance amount
double Checking::balance() {        
    return balanceAmount;
}

//Calls the Savings Account future balance method by multipying balance by interest and years

double Savings::balance() {         
    return balanceAmount * interestRate * years;
}

//Calls the Credit Accounts balance method and returns the balance
double Credit::balance() {          
    return balanceAmount;
}

