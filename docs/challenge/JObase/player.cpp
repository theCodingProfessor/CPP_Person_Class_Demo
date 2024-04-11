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
    std::cout << "Team Name: " << getTeamName() << std::endl;
    std::cout << "Batting Average: " << getBattingAverage() << std::endl;
    std::cout << "Home Runs: " << getHomeRuns() << std::endl;
}