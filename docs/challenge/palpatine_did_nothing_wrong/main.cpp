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

#include <iostream>
#include "BankAccount.h"
#include "ATM.h"

int main() {
    int pin;
    std::cout << "Enter your PIN: ";
    std::cin >> pin;
    
    // Create a bank account
    BankAccount account("123456789", 1000.0, pin);

    // Create an ATM
    ATM atm;

    char choice;
    do {
        std::cout << "\nChoose an option:" << std::endl;
        std::cout << "1. Deposit funds" << std::endl;
        std::cout << "2. Withdraw funds" << std::endl;
        std::cout << "3. Check balance" << std::endl;
        std::cout << "4. Sign off" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                double amount;
                std::cout << "Enter the amount to deposit: ";
                std::cin >> amount;
                std::cout << "Enter your PIN: ";
                std::cin >> pin;
                atm.depositToAccount(amount, pin);
                break;
            }
            case '2': {
                double amount;
                std::cout << "Enter the amount to withdraw: ";
                std::cin >> amount;
                std::cout << "Enter your PIN: ";
                std::cin >> pin;
                atm.withdrawFromAccount(amount, pin);
                break;
            }
            case '3': {
                double balance = atm.checkBalance(account, pin);
                if (balance >= 0) {
                    std::cout << "Current balance: $" << balance << std::endl;
                }
                break;
            }
            case '4':
                std::cout << "Signing off..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
        }
    } while (choice != '4');

    return 0;
}
