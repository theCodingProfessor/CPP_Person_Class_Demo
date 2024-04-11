//
// Created by AlexA on 4/9/24.
// Project: Creating Inheritance
// Co_Parther:Anthony Cantu
// Description:
//

#include "Alex_A_Project.h"
Rogue::Rogue(const std::string& name, const std::string& gameMaster)
        : _name(name), _gameMaster(gameMaster) {}

std::string Rogue::getName() const {
    return _name;
}

std::string Rogue::getGameMaster() const {
    return _gameMaster;
}

void Rogue::setGameMaster(const std::string& gm) {
    _gameMaster = gm;
}