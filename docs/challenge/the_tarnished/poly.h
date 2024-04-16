/*
 * NCC Object-Oriented Programming
 * Spring 2024 C++ Peer Programming poly.h
 * Assignment to demonstrate polymorphism using a bank account system
 * @author: Bhavnoor Saini (1354712), Santiago Ramirez (1346109)
 * Coded with help from Copilot
 * */

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
        double balanceAmount;
    public:
        Checking(double balanceAmount): balanceAmount(balanceAmount) {}
        double balance() override;
};

class Savings : public BankAccount {
    private:
        double balanceAmount;
        double interestRate;
        float years;
    public:
        Savings(double balanceAmount, double interestRate, double years): balanceAmount(balanceAmount), interestRate(interestRate), years(years) {}
        double balance() override;
};

class Credit : public BankAccount {
    private:
        double balanceAmount;
        int creditLimit;
    public:
        Credit(double balanceAmount, int creditLimit): balanceAmount(balanceAmount), creditLimit(creditLimit){}
        double balance() override;
        double creditUsage() { return balanceAmount / creditLimit; }
};

void credits(string student1, string student2);

#endif
