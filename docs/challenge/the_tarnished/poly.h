#include <iostream>
using namespace std;

#ifndef POLY_H
#define POLY_H

class BankAccount {
    public:
        virtual double balance() = 0;
        virtual ~BankAccount() {}
};

class Checking : public BankAccount {
    private:
        double balance;
    public:
        Checking(double balance): balance(balance) {}
        double balance() override;
};

class Savings : public BankAccount {
    private:
        double balance;
        double interestRate;
        float years;
    public:
        Savings(double balance, double interestRate, double years): balance(balance), interestRate(interestRate), years(years) {}
        double balance() override;
};

class Credit : public BankAccount {
    private:
        double balance;
        int creditLimit;
    public:
        Credit(double balance, int creditLimit): balance(balance), creditLimit(creditLimit){}
        double balance() override;
        int creditLimit() { return creditLimit; }
};

#endif
