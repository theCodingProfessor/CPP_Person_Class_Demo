// Created by Anthony Cantu on 4/11/24.

#ifndef LIVEREVIEW3_CHARACTERSHEET_H
#define LIVEREVIEW3_CHARACTERSHEET_H

#include <string>

class characterSheet {
private:
    std::string GameMaster;
    std::string CharacterName;
    int HP;
    int Level;
    std::string Guild;
    std::string Alignment;

public:
    // Constructor
    characterSheet(std::string gm, std::string name, int hp, int level, std::string guild, std::string alignment)
            : GameMaster(gm), CharacterName(name), HP(hp), Level(level), Guild(guild), Alignment(alignment) {}

    // Getters
    std::string getGameMaster() const { return GameMaster; }
    std::string getCharacterName() const { return CharacterName; }
    int getHP() const { return HP; }
    int getLevel() const { return Level; }
    std::string getGuild() const { return Guild; }
    std::string getAlignment() const { return Alignment; }

    // Setters
    void setGameMaster(const std::string& gm) { GameMaster = gm; }
    void setCharacterName(const std::string& name) { CharacterName = name; }
    void setHP(int hp) { HP = hp; }
    void setLevel(int level) { Level = level; }
    void setGuild(const std::string& guild) { Guild = guild; }
    void setAlignment(const std::string& alignment) { Alignment = alignment; }
};

#endif //LIVEREVIEW3_CHARACTERSHEET_H
