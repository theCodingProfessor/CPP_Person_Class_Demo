//
//
// Project: Creating Inheritance
// Author: ALexandro Alonso : part creates rogue class that inherits and combines both in 1 file
// Co_Parther:Anthony Cantu : part creates charactor sheet
// Description: Create a chractor sheet that has the baisc information. we then build a secondary class rouge that inherits
// the chractor sheet trait but includes extra stuff like religon, species.
//

// MAJOR DO NOT INCLUDE CHRACTOR SHEET IN  CMAKELIST.TXT BECAUSE I COMBINE BOTH IN THIS FILES

#include "Alex_A_Project.h"

// Implementation of characterSheet member functions
characterSheet::characterSheet(std::string gm, std::string name, int hp, int level, std::string guild, std::string alignment)
        : GameMaster(gm), CharacterName(name), HP(hp), Level(level), Guild(guild), Alignment(alignment) {}

std::string characterSheet::getGameMaster() const {
    return GameMaster;
}

std::string characterSheet::getCharacterName() const {
    return CharacterName;
}

int characterSheet::getHP() const {
    return HP;
}

int characterSheet::getLevel() const {
    return Level;
}

std::string characterSheet::getGuild() const {
    return Guild;
}

std::string characterSheet::getAlignment() const {
    return Alignment;
}

void characterSheet::setGameMaster(const std::string& gm) {
    GameMaster = gm;
}

void characterSheet::setCharacterName(const std::string& name) {
    CharacterName = name;
}

void characterSheet::setHP(int hp) {
    HP = hp;
}

void characterSheet::setLevel(int level) {
    Level = level;
}

void characterSheet::setGuild(const std::string& guild) {
    Guild = guild;
}

void characterSheet::setAlignment(const std::string& alignment) {
    Alignment = alignment;
}

// Implementation of Rogue member functions
Rogue::Rogue(const std::string& name, const std::string& gameMaster, int hp, int level, const std::string& guild, const std::string& alignment, const std::string& Religion, const std::string& Species)
        : characterSheet(gameMaster, name, hp, level, guild, alignment), _Religion(Religion), _Species(Species) {}

std::string Rogue::getReligion() const {
    return _Religion;
}

std::string Rogue::getSpecies() const {
    return _Species;
}