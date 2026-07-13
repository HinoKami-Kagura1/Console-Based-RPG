#include <iostream>
#include "Gameplay.h"
#include "PlayerStats.h"
#include "EnemyStats.h"
#include "CombatSystem.h"

void Gameplay() {

    //Attack Phase

    std::cout << "Round 1" << std::endl; 

    std::cout << "Player Turn" << std::endl;


    std::cout << "Player Health: " << hero.PlayerHealth << std::endl;
    std::cout << "Slime Health: " << slime.SlimeHealth << std::endl;

    


    int hero_choice; 

    std::cout << "Player: 1. Attack \n 2. Defend \n 3. Player Heal " << std::endl;

    std::cin >> hero_choice;

    if (hero_choice == 1) {
        
        std::cout << "Hero Attacks" << std::endl;

        int damage = playerAttack(hero, slime.SlimeDefense);
        slime.SlimeHealth -= damage;

        std::cout << "Hero dealth " << damage << "damage!" << std::endl;
        std::cout << "Slime has " << slime.SlimeHealth << "health left." << std::endl;


        if (slime.SlimeHealth <= 0) {

            std::cout << "You defeated the Slime!" << std::endl;
            return;           
        }

        int enemyDamage = playerDefend(hero, slime.SlimeAttack);
        hero.PlayerHealth -= enemyDamage;

        std::cout << "Slime dealt " << enemyDamage << "damage!" << std::endl;
        std::cout << "Hero has " << hero.PlayerHealth << "health left." << std::endl;


    }

    else if (hero_choice == 2) {

        std::cout << "Hero Defend" << std::endl;
        int defense = playerDefend(hero, slime.SlimeAttack);

        int enemyDamage = playerDefend(hero, slime.SlimeAttack);
        hero.PlayerHealth -= enemyDamage;
        
        std::cout << "Slime dealt " << enemyDamage << "damage!" << std::endl;
        std::cout << "Hero has " << hero.PlayerHealth << "health left." << std::endl;


    }

    else if (hero_choice == 3) {

        std::cout << "Hero Heal" << std::endl;
        playerHeal(hero);

        int enemyDamage = playerDefend(hero, slime.SlimeAttack);
        hero.PlayerHealth -= enemyDamage;
        
        std::cout << "Slime dealt " << enemyDamage << "damage!" << std::endl;
        std::cout << "Hero has " << hero.PlayerHealth << "health left." << std::endl;

        

    }

    else {

        std::cout << "Invalid Option, Try Again" << std::endl;
        std::cin >> hero_choice;

    }


    
    

}
