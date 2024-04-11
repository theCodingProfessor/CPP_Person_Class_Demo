#include <iostream>
#include "Alex_A_Project.h"

int main() {
    Rogue alex("Alex Alonso", "CSCE306", 100, 1, "Chaos4All", "Chaotic Evil", "Church Of Yogg", "Dark Elf");
    std::cout << "Character's Name: " << alex.getCharacterName() << std::endl;
    std::cout << "GameMaster: " << alex.getGameMaster() << std::endl;
    std::cout << "HP: " << alex.getHP() << std::endl;
    std::cout << "Level: " << alex.getLevel() << std::endl;
    std::cout << "Guild: " << alex.getGuild() << std::endl;
    std::cout << "Alignment: " << alex.getAlignment() << std::endl;
    std::cout << "Religion: " << alex.getReligion() << std::endl;
    std::cout << "Species: " << alex.getSpecies() << std::endl;
    return 0;
}
//./MyExecutable