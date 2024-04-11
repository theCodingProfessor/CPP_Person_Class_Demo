//
// Created by Brad on 4/11/24.
//

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
