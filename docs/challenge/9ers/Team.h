/***************************************************************************************
 *  File: Team.h
 *  Author: Brad Kinney
 *  Date: April 11, 2024
 *  Description: Header file for the Team class.
 ***************************************************************************************/

#ifndef PERSON_TEAM_H
#define PERSON_TEAM_H

#include <string>
using namespace std;

class Team {
protected:
    string team_name;
    string team_city;

public:
    Team(string name, string city);
};

#endif //PERSON_TEAM_H
