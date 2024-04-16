/* Name: Isaac Ortiz
*  Class: CSCE 306
*  Assignment: Live Coding 3
*  Partner: Will G.
*  Description: this is the main file for the primary BankAccount class. 
*
*  Code assisted by ChatGPT.
*/

#include <iostream>
#include "BankAccount.h"
#include "BankAccount.cpp"
#include "ATM.h"
#include "ATM.cpp"

int main() {
    // Create BankAccount object
    BankAccount account("123456789", 1234, 1000);

    // Create ATM object
    ATM atm("ATM001", "Main Street");

    // Display balance
    atm.displayBalance(account);

    // Withdraw
    atm.withdraw(account, 500);
    std::cout << "After withdrawal: ";
    atm.balanceOnly(account);

    // Deposit
    atm.deposit(account, 200);
    std::cout << "After deposit: ";
    atm.balanceOnly(account);

    return 0;
}
