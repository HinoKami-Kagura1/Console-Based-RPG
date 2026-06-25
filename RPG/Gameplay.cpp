#include <iostream>
#include "Gameplay.h"

void Gameplay() {

    //Attack Phase

    std::cout << "Round 1" << std::endl; 

    std::cout << "Player Turn" << std::endl;

    int hero_choice; 

    std::cin >> hero_choice;

    if (hero_choice == 1) {
        
        std::cout << "Attacks" << std::endl;

    }

    else if (hero_choice == 2) {

        std::cout << "Defense" << std::endl;

    }

    else if (hero_choice == 3) {

        std::cout << "Heal" << std::endl;

    }

    else {

        std::cout << "Invalid Option, Try Again" << std::endl;
        std::cin >> hero_choice;
    }


    
    

}
