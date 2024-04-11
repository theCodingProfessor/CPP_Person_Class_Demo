//
// Created by AlexA on 4/9/24.
// Project: Creating Inheritance
// Co_Parther:Anthony Cantu
// Description:
//

#include "Alex_A_Project.h"

Rogue::Rogue(const std::string& name, const std::string& gameMaster, const std::string& Religion, const std::string& Species)
        : _name(name), _gameMaster(gameMaster), _Religion(Religion), _Species(Species) {}

std::string Rogue::getName() const {
    return _name;
}

std::string Rogue::getGameMaster() const {
    return _gameMaster;
}

std::string Rogue::getReligion() const {
    return _Religion;
}

std::string Rogue::getSpecies() const {
    return _Species;
}