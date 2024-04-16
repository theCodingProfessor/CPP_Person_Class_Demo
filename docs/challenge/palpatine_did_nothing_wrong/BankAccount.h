/* Name: Isaac Ortiz
*  Class: CSCE 306
*  Assignment: Live Coding 3
*  Partner: Will G.
*  Description: this is the h file for the primary BankAccount class. 
*  Code assisted by ChatGPT.
*/

#include <iostream>
#include <string>

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class ATM; // Forward declaration of ATM class

class BankAccount {
private:
    std::string accountNumber;
    int pin;
    double balance;

public:
    BankAccount(std::string accNumber, double initialBalance, int pin);

    // Function to deposit money into the account
    void deposit(double amount, int pin);

    // Function to withdraw money from the account
    void withdraw(double amount, int pin);

    // Function to check the account balance
    double getBalance(int pin);

    // Function to allow ATM class to access private members
    friend class ATM;
};

#endif // BANKACCOUNT_H
