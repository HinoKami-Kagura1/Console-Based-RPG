#include <iostream>
#include <string>
#include "CombatSystem.h"
#include "PlayerStats.h"
#include "EnemyStats.h"


int playerAttack(PlayerStats& player, int enemyDefense) {

    int damage = player.PlayerAttack - (enemyDefense / 2);

    if (damage < 1) damage = 1;

    return damage;

}

int playerDefend(PlayerStats& player, int enemyAttack) {


    float reduction = player.PlayerDefense / (player.PlayerDefense / 100.f);
    
    int reducedDamage = static_cast<int>(enemyAttack * (1.0f - reduction));

    return reducedDamage;

}


int playerHeal(int currentHealth, int maxHealth) {

    const int HEAL_AMOUNT = 30;
    
    if (currentHealth == maxHealth) {

        std::cout << "Player cannot heal - already at max health!" << std::endl;

        return currentHealth; 
    }
    
    int newHealth = currentHealth + HEAL_AMOUNT;

    if (newHealth > maxHealth) {

        newHealth = maxHealth;
    }
    
    std::cout << "Player healed to " << newHealth << " health!" << std::endl;

    return newHealth;
}
    

