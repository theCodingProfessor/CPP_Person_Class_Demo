/*
 * NCC Object-Oriented Programming
 * Spring 2024 C++ Lab Main
 * Assignment to 
 * @author: Bhavnoor Saini (1354712), Santiago Ramirez (1346109)
 * */

#include "poly.h"

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

