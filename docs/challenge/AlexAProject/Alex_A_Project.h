//
// Created by AlexA on 4/9/24.
//

#ifndef PERSON_ALEX_A_PROJECT_H
#define PERSON_ALEX_A_PROJECT_H

#include <string>

class Rogue {
public:
    Rogue(const std::string& name, const std::string& gameMaster, const std::string& Religion);
    std::string getName() const;
    std::string getGameMaster() const;
    std::string getReligion() const;

private:
    std::string _name;
    std::string _gameMaster;
    std::string _Religion;
};


#endif //PERSON_ALEX_A_PROJECT_H
