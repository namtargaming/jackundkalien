//  Created by YIM on 26/04/2023.
#include <iostream>
using namespace std;

class Player {
    enum DAMAGETYPE {
        NORMAL,
        LOSEHP
    };
private:
    int health;
    int block;
public:

    
    Player() {
        health = 100;
        block = 0;
    }
    
    void Damage(int Amount, DAMAGETYPE type) {
        
        if (type == NORMAL){
            health -= LoseBlock(Amount);
        }
        
    }
    
    int LoseBlock(int amount) {
        int leftover = amount - block;
        block -= amount;
        if (leftover < 1) {
            block = 0;
            return 0;
        }
        
        return leftover;
    }
    
    int getHealth() {
        return health;
    }
    int getBlock() {
        return block;
    }
    void setHealth(int x){
        health += x;
    }
    void setBlock(int x){
        block += x;
    }
};
