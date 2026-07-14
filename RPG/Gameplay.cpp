#include <iostream>
#include "Gameplay.h"
#include "PlayerStats.h"
#include "EnemyStats.h"
#include "CombatSystem.h"

void Gameplay() {

    //Attack Phase


    std::cout << " " << std::endl;
    std::cout << "Round 1: Slime" << std::endl; 

    while (hero.PlayerHealth > 0 && slime.SlimeHealth > 0) {
        

        std::cout << " " << std::endl;

        std::cout << "Player Turn" << std::endl;


        std::cout << "Player Health: " << hero.PlayerHealth << std::endl;
        std::cout << "Slime Health: " << slime.SlimeHealth << std::endl;

        


        int hero_choice; 

        std::cout << " " << std::endl;
        std::cout << "Player: \n 1. Attack \n 2. Defend \n 3. Heal " << std::endl;
        std::cout << " " << std::endl;


        std::cin >> hero_choice;

        if (hero_choice == 1) {
            
            std::cout << "Hero Attacks" << std::endl;

            int damage = playerAttack(hero, slime.SlimeDefense);
            slime.SlimeHealth -= damage;
            std::cout << " " << std::endl;


            std::cout << "Hero dealth " << damage << " damage!" << std::endl;
            std::cout << "Slime has " << slime.SlimeHealth << " health left." << std::endl;
            std::cout << " " << std::endl;

            if (slime.SlimeHealth <= 0) {

                std::cout << "You defeated the Slime!" << std::endl;
                        
            }

            int enemyDamage = playerDefend(hero, slime.SlimeAttack);
            hero.PlayerHealth -= enemyDamage;

            std::cout << "Slime dealt " << enemyDamage << " damage!" << std::endl;
            std::cout << "Hero has " << hero.PlayerHealth << " health left." << std::endl;
            std::cout << " " << std::endl;



        }

        else if (hero_choice == 2) {

            std::cout << "Hero Defend" << std::endl;
            int defense = playerDefend(hero, slime.SlimeAttack);

            int enemyDamage = playerDefend(hero, slime.SlimeAttack);
            hero.PlayerHealth -= enemyDamage;
            std::cout << " " << std::endl;

            
            std::cout << "Slime dealt " << enemyDamage << " damage!" << std::endl;
            std::cout << "Hero has " << hero.PlayerHealth << " health left." << std::endl;
            std::cout << " " << std::endl;


        }

        else if (hero_choice == 3) {

            std::cout << "Hero Heal" << std::endl;
            playerHeal(hero);

            int enemyDamage = slime.SlimeAttack;
            hero.PlayerHealth -= enemyDamage;
            std::cout << " " << std::endl;


            std::cout << "Slime dealt " << enemyDamage << " damage!" << std::endl;
            std::cout << "Hero has " << hero.PlayerHealth << " health left." << std::endl;
            std::cout << " " << std::endl;

            

        }

        else {

            std::cout << "Invalid Option, Try Again" << std::endl;
            std::cin >> hero_choice;

        }
    
    }


    std::cout << "" << std::endl;
    std::cout << "You have defeated the slime, next round is the goblin.....";
    std::cout << "Round 2: Goblin" << std::endl;

    while (hero.PlayerHealth > 0 && goblin.GoblinHealth > 0) {

        int hero_choice; 

        std::cout << " " << std::endl;
        std::cout << "Player: \n 1. Attack \n 2. Defend \n 3. Heal " << std::endl;
        std::cout << " " << std::endl;


        std::cout << " " << std::endl;

        std::cout << "Player Turn" << std::endl;


        std::cout << "Player Health: " << hero.PlayerHealth << std::endl;       

        std::cout << "Goblin Health: " << goblin.GoblinHealth << std::endl;

        int hero_choice; 

        std::cout << " " << std::endl;
        std::cout << "Player: \n 1. Attack \n 2. Defend \n 3. Heal " << std::endl;
        std::cout << " " << std::endl;


        std::cin >> hero_choice;

        if (hero_choice == 1) {
            
            std::cout << "Hero Attacks" << std::endl;

            int damage = playerAttack(hero, goblin.GoblinDefense);
            goblin.GoblinHealth -= damage;
            std::cout << " " << std::endl;


            std::cout << "Hero dealth " << damage << " damage!" << std::endl;
            std::cout << "Slime has " << goblin.GoblinHealth << " health left." << std::endl;
            std::cout << " " << std::endl;

            if (goblin.GoblinHealth <= 0) {

                std::cout << "You defeated the Goblin!" << std::endl;
                        
            }

            int enemyDamage = playerDefend(hero, goblin.GoblinAttack);
            hero.PlayerHealth -= enemyDamage;

            std::cout << "Slime dealt " << enemyDamage << " damage!" << std::endl;
            std::cout << "Hero has " << hero.PlayerHealth << " health left." << std::endl;
            std::cout << " " << std::endl;



        }


    }
}
