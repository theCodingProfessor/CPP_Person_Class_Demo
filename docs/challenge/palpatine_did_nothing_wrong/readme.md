# Class Friendship Project

This repository contains a collection of C++ classes developed by students as part of a class friendship project. Each student in a team has created a class and configured it to befriend the classes of other team members.

## Classes

### BankAccount

The `BankAccount` class represents a bank account with basic functionalities such as deposit, withdrawal, and balance inquiry. This class is implemented in `BankAccount.cpp` and `BankAccount.h` files.

### ATM

The `ATM` class simulates an Automated Teller Machine (ATM) and interacts with bank accounts. It is a friend class of the `BankAccount` class, allowing it to access the private members of `BankAccount`. This class is implemented in `ATM.cpp` and `ATM.h` files.

## Authors

- Isaac Ortiz: BankAccount class
- Will Greaney: ATM class

## Driver File

The `main.cpp` file serves as the driver program to test the functionalities of the classes. It includes the `main()` function and demonstrates the usage of the classes.

## Instructions

Each student/team has created a class and configured it to befriend the classes of other team members. The classes are brought together in this repository along with the driver `main.cpp` file and this `README.md` file.
