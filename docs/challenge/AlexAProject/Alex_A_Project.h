#ifndef PERSON_ALEX_A_PROJECT_H
#define PERSON_ALEX_A_PROJECT_H

#include <string>

class characterSheet {
public:
    characterSheet(std::string gm, std::string name, int hp, int level, std::string guild, std::string alignment);

    std::string getGameMaster() const;
    std::string getCharacterName() const;
    int getHP() const;
    int getLevel() const;
    std::string getGuild() const;
    std::string getAlignment() const;

    void setGameMaster(const std::string& gm);
    void setCharacterName(const std::string& name);
    void setHP(int hp);
    void setLevel(int level);
    void setGuild(const std::string& guild);
    void setAlignment(const std::string& alignment);

private:
    std::string GameMaster;
    std::string CharacterName;
    int HP;
    int Level;
    std::string Guild;
    std::string Alignment;
};

class Rogue : public characterSheet {
public:
    Rogue(const std::string& name, const std::string& gameMaster, int hp, int level, const std::string& guild, const std::string& alignment, const std::string& Religion, const std::string& Species);

    std::string getReligion() const;
    std::string getSpecies() const;

private:
    std::string _Religion;
    std::string _Species;
};

#endif //PERSON_ALEX_A_PROJECT_H
