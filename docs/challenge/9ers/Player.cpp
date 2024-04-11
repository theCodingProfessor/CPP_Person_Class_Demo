#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name, int number, string hometown, string team_name, string team_city)
        : player_name(name), player_number(number), player_hometown(hometown), Team(team_name, team_city) {}

void Player::display() {
    cout << "Player Name: " << player_name << endl;
    cout << "Player Number: " << player_number << endl;
    cout << "Player Hometown: " << player_hometown << endl;
    cout << "Team Name: " << team_name << endl;
    cout << "Team City: " << team_city << endl;
}
