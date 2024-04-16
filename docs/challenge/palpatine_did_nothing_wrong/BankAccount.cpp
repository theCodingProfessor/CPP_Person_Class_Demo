/* Name: Isaac Ortiz
*  Class: CSCE 306
*  Assignment: Live Coding 3
*  Partner: Will G.
*  Description: this is the main file for the primary BankAccount class. 
*
*  Code assisted by ChatGPT.
*/

#include "BankAccount.h"

// Constructor
BankAccount::BankAccount(std::string accNum, int pin, double bal) : accountNumber(accNum), PIN(pin), balance(bal) {}

// Member functions implementation
void BankAccount::deposit(double amount) {
    balance += amount;
}

void BankAccount::withdraw(double amount, int enteredPin) {
    if (enteredPin != PIN){
        std::cout << "Incorrect PIN. Withdrawal failed." << std:endl;
        return;
    }
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Withdrawal successful. Remaining balance: $" << balance << std::endl;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

double BankAccount::checkBalance() {
    return balance;
}

bool BankAccount::validateAccountNumber(std::string accNum) {
    // Add logic to validate the account number (e.g., check length, format, etc.)
    // Return true if the account number is valid, false otherwise
}
