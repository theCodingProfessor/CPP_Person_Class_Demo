/* Name: Isaac Ortiz
*  Class: CSCE 306
*  Assignment: Live Coding 3
*  Partner: Will G.
*  Description: this is the h file for the primary BankAccount class. 
*
*  Code assisted by ChatGPT.
*/

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class ATM; // Forward declaration of ATM class

class BankAccount {
private:
    std::string accountNumber;
    int PIN;
    double balance;

public:
    // Constructor
    BankAccount(std::string accNum, int pin, double bal);

    // Member functions
    void deposit(double amount);
    void withdraw(double amount, int enteredPin);
    double checkBalance();
    bool validateAccountNumber(std::string accNum); // Validate account number

    // Friend declaration for ATM class
    friend class ATM;
};

#endif // BANKACCOUNT_H

class BankAccount {
private:
    std::string accountNumber;
    int pin; // Add PIN number
    double balance;
};

