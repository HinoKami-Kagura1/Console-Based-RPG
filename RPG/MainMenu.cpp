#include <iostream>
#include "MainMenu.h"
#include "Utils.h"
#include "Gameplay.h"


void MainMenu::display() {

    std::cout << "Welcome to the Jungle." << std::endl;
    std::cout << "1. Play" << std::endl;
    std::cout << "2. Credit" << std::endl; 
    std::cout << " " << std::endl;


    int press;

    std::cout << "Enter a number:";
    std::cin >> press;


        if (press == 1) {

            Play();


        }

        else if (press == 2) {
        
            Credit();  

        }

        else {

            std::cout << "Choose Play or Credit";

        }
        
};