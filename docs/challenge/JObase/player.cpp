// --------------------------------------------------------------------
// Author: Om Sharma
// File Name: player.cpp
// NCC CSCE 306 1 - OO Software Development
// Live Review: 3 - Simple Basketball Player Information System
// Description: This file contains the implementation of the Player class.
// --------------------------------------------------------------------

#include "player.h"
#include <iostream>
#include <string>

Player::Player(){
    setTeamName();
    setBattingAverage();
    setHomeRuns();
};

void Player::displayPlayerInfo(){
    Player::toString();
    std::cout << "\tTeam Name: " << getTeamName() << std::endl;
    std::cout << "\tBatting Average: " << getBattingAverage() << std::endl;
    std::cout << "\tHome Runs: " << getHomeRuns() << std::endl;
}