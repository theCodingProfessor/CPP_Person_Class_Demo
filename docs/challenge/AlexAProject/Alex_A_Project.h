//
// Created by AlexA on 4/9/24.
//

#ifndef PERSON_ALEX_A_PROJECT_H
#define PERSON_ALEX_A_PROJECT_H

#include <string>

class Rogue {
private:
    std::string _name;
    std::string _gameMaster;

public:
    Rogue(const std::string& name);

    std::string getName() const;
    std::string getGameMaster() const;
    void setGameMaster(const std::string& gm);
};

#endif //PERSON_ALEX_A_PROJECT_H
