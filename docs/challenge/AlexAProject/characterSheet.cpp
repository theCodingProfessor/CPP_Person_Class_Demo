//
// Created by Anthony Cantu on 4/11/24.
//

#include "characterSheet.h"
#include <iostream>

int main() {
    // Creating a characterSheet object with initial values
    characterSheet myCharacter("John Doe", "Aragorn", 100, 5, "Rangers of the North", "Lawful Good");

    // Display initial character information
    std::cout << "Character Information:" << std::endl;
    std::cout << "GameMaster: " << myCharacter.getGameMaster() << std::endl;
    std::cout << "Character Name: " << myCharacter.getCharacterName() << std::endl;
    std::cout << "HP: " << myCharacter.getHP() << std::endl;
    std::cout << "Level: " << myCharacter.getLevel() << std::endl;
    std::cout << "Guild: " << myCharacter.getGuild() << std::endl;
    std::cout << "Alignment: " << myCharacter.getAlignment() << std::endl;

    // Modifying some character attributes
    myCharacter.setHP(120); // Increasing HP
    myCharacter.setLevel(6); // Level up

    // Display updated character information
    std::cout << "\nUpdated Character Information:" << std::endl;
    std::cout << "HP: " << myCharacter.getHP() << std::endl;
    std::cout << "Level: " << myCharacter.getLevel() << std::endl;

    return 0;
}
