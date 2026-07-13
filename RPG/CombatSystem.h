#ifndef COMBATSYSTEM_H
#define COMBATSYSTEM_H
#include "PlayerStats.h"


int playerAttack(PlayerStats& player, int enemyDefense);
int playerDefend(PlayerStats& player, int enemyDamage);
void playerHeal(PlayerStats& player);


#endif
