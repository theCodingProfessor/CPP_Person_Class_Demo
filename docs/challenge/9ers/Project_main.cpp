//--------------------------------------------------------------------
// Name: Tristan Merlin and Bradly Kinney
// Class: CSCE 306
// File name: Project_main.cpp
// Project: Live Code 3
//--------------------------------------------------------------------
#include "Player.h"
#include <iostream>
// Main function
int  main() {
    Player player1("Tristan Merlin", 62, "Gilberts", "CSCE", "306");
    Player player2("Bradly Kinney", 6, "St. Charles", "CSCE", "306");
    player1.display();
    std::cout<<"----------"<<endl;
    player2.display();

    return 0;
}

