#ifndef ENEMYSTATS_H
#define ENEMYSTATS_H


struct SlimeStats {

    int SlimeHealth;
    int SlimeDefense;
    int SlimeAttack; 

};

struct GoblinStats {

    int GoblinHealth; 
    int GoblinDefense;
    int GoblinAttack;

};

struct MinotaurStats {
    
    int MinotaurHealth;
    int MinotaurDefense;
    int MinotaurAttack;

};


extern SlimeStats slime;
extern GoblinStats goblin;
extern MinotaurStats minotaur;

#endif

