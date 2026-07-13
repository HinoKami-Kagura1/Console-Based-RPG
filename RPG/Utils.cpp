#include <iostream>
#include "Utils.h"
#include "Gameplay.h"

void Play() {
    std::cout << "Start Game" << std::endl;
    Gameplay();  
}

void Credit() {

    std::cout << "Author: Stardust " << std::endl;
    std::cout << " " << std::endl;

    std::cout << "How to play" << std::endl;
    std::cout << "The player makes a series of choices when battling enemy combatants." << std::endl;
    std::cout << "The player inputs 1 to attack" << std::endl;
    std::cout << "The player inputs 2 to defend" << std::endl;
    std::cout << "The player inputs 3 to heal (when player heals the player does not defend nor attacks, but would receive a 50% damage reduction)" << std::endl;

}