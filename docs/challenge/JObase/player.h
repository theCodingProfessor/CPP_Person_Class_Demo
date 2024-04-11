// --------------------------------------------------------------------
// Author: Om Sharma
// File Name: player.h
// NCC CSCE 306 1 - OO Software Development
// Live Review: 3 - Simple Basketball Player Information System
// Description: This file contains the declaration of the Player class.
// --------------------------------------------------------------------

# include <iostream>

#ifndef PLAYER_H
#define PLAYER_H

class Player{
    private:
        std::string teamName;
        float battingAverage;
        int homeRuns;
public:
    // Constructor
    Player();

    // Setters
    void setTeamName(){
        std::cout << "Enter the team name: ";
        std::cin >> teamName;
    }

    void setBattingAverage(){
        std::cout << "Enter the batting average: ";
        std::cin >> battingAverage;
    }

    void setHomeRuns(){
        std::cout << "Enter the number of home runs: ";
        std::cin >> homeRuns;
    }

    // Getters
    std::string getTeamName(){
        return teamName;
    }

    float getBattingAverage(){
        return battingAverage;
    }

    int getHomeRuns(){
        return homeRuns;
    }

    void displayPlayerInfo();
};

#endif // PLAYER_H