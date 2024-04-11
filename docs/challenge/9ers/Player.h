//--------------------------------------------------------------------
// Name: Tristan Merlin
// Class: CSCE 306
// File name: Player.h
// Project: Live Code 3
//--------------------------------------------------------------------

#ifndef PLAYER_H
#define PLAYER_H

#include "Team.h"
#include <string>
using namespace std;

// Player class is derived from Team class
class Player : public Team {
    string player_name;
    int player_number;
    string player_hometown;
// Constructor
public:
    Player(string name, int number, string hometown, string team_name, string team_city);
    void display();
};

#endif // PLAYER_H
