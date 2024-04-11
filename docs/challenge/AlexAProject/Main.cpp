#include <iostream>
#include "Alex_A_Project.h"

int main() {
    Rogue alex ("Alex","CSCE306");
    std::cout << "Rogue's Name: " << alex.getName() << std::endl;
    std::cout << "GameMaster: " << alex.getGameMaster() << std::endl;
    return 0;
}