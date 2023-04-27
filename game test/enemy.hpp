#include <iostream>
using namespace std;

class Enemy{
    enum DAMAGETYPE {
        NORMAL
    };
private:

public:
    int health;
    int damage;
    
    Enemy(int damage,int health) {
        health = health;
        damage = damage;
    }
    
    void Damage(int Amount, DAMAGETYPE type) {
        
        if (type == NORMAL){
            health -= health - 1;
        }
        
    }
    
    
};
