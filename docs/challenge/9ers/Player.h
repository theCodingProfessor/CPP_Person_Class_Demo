#ifndef PLAYER_H
#define PLAYER_H

#include "Team.h"
#include <string>
using namespace std;

class Player : public Team {
    string player_name;
    int player_number;
    string player_hometown;

public:
    Player(string name, int number, string hometown, string team_name, string team_city);
    void display();
};

#endif // PLAYER_H
