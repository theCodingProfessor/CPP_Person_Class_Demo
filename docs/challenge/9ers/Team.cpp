/***************************************************************************************
 *  File: Team.cpp
 *  Author: Brad Kinney
 *  Date: April 11, 2024
 *  Description: CPP file for the Team class.
 ***************************************************************************************/

#include "Team.h"
#include <iostream>
using namespace std;
Team::Team(string name, string city) : team_name(name), team_city(city) {}

// Display function
void Team::display() {
    cout << "Team Name: " << team_name << endl;
    cout << "Team City: " << team_city << endl;}