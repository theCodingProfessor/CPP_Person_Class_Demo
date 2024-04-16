/* Name: Isaac Ortiz
*  Class: CSCE 306
*  Assignment: Live Coding 3
*  Partner: Will G.
*  Description: this is the main file for the primary BankAccount class. 
*
*  Code assisted by ChatGPT.
*/

#include "BankAccount.h"

BankAccount::BankAccount(std::string accNumber, double initialBalance, int pin)
    : accountNumber(accNumber), balance(initialBalance), pin(pin) {}

void BankAccount::deposit(double amount, int pin) {
    if (pin == this->pin) {
        balance += amount;
        std::cout << "Deposited $" << amount << " into account " << accountNumber << std::endl;
    } else {
        std::cout << "Incorrect PIN for account " << accountNumber << std::endl;
    }
}

void BankAccount::withdraw(double amount, int pin) {
    if (pin == this->pin) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << " from account " << accountNumber << std::endl;
        } else {
            std::cout << "Insufficient funds in account " << accountNumber << std::endl;
        }
    } else {
        std::cout << "Incorrect PIN for account " << accountNumber << std::endl;
    }
}

double BankAccount::getBalance(int pin) {
    if (pin == this->pin) {
        return balance;
    } else {
        std::cout << "Incorrect PIN for account " << accountNumber << std::endl;
        return -1; // Return a negative value to indicate error
    }
}
