#include <iostream>
#include <string>
#include "CombatSystem.h"
#include "PlayerStats.h"
#include "EnemyStats.h"

int playerAttack(PlayerStats& player, int enemyDefense) {

        int damage = (player.PlayerAttack * 100) / (100 + enemyDefense);

    if (damage < 1) {

        damage = 1;

    }

    return damage;
}

int playerDefend(PlayerStats& player, int enemyDamage) {

    float reduction = player.PlayerDefense / (player.PlayerDefense / 100.f);
    int reducedDamage = enemyDamage * 1.0f - reduction;

    if (reducedDamage < 1) {
        
        reducedDamage = 1;

    }

    return reducedDamage;

}


void playerHeal(PlayerStats& player) {

    const int HEAL_AMOUNT = 30;
    const int maxHealth = 100;
    
    if (player.PlayerHealth == maxHealth) {

        std::cout << "Player cannot heal - already at max health!" << std::endl;
        return;

    }
    
    int newHealth = player.PlayerHealth + HEAL_AMOUNT;

    if (newHealth > maxHealth) {

        newHealth = maxHealth;

    }
    
    player.PlayerHealth = newHealth;  

    std::cout << "Player healed to " << player.PlayerHealth << " health!" << std::endl;
}