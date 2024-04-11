//
// Created by AlexA on 4/9/24.
// Project: Creating Inheritance
// Co_Parther:Anthony Cantu
// Description:
//

#include "Alex_A_Project.h"

Rogue::Rogue(const std::string& name) : _name(name) {}

std::string Rogue::getName() const {
    return _name;
}

std::string Rogue::getGameMaster() const {
    return _gameMaster;
}

void Rogue::setGameMaster(const std::string& gm) {
    _gameMaster = gm;
}