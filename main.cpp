#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


struct {

    int PlayerHealth = 100;
    int GoblinHealth = 50;

    float PlayerDefense = .10;
    float GoblinDefense = .10;

    int PlayerAttack = 10;
    int GoblinAttack = 5;

};


int main() {

    


    std::srand((unsigned int)(std::time(NULL))); 

    
    int PlayerNum = (std::rand() % 10) + 1;
    std::cout << "Player Numbers: " << PlayerNum << std::endl;


    int GoblinNum = (std::rand() % 10) + 1;
    std::cout << "Goblin Number: " << GoblinNum << std::endl;

    if (PlayerNum > GoblinNum) {

        std::cout << "Player Attack" << std::endl;
   
    }

    else if (PlayerNum < GoblinNum) {
        std::cout << "Goblin Attack" << std::endl;
    }

    else if (PlayerNum == GoblinNum) {

        std::cout << "Both Parry" << std::endl;

    }
    

    return 0;
}