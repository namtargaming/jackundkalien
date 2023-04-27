//  Created by James Boyko on 4/26/23.

class Enime {
    enum DAMAGETYPE {
        NORMAL,
        LOSEHP
    };
public:
    int health;
    int block;
    int damage;
    
    Enime(int Damage,int Health, int Block) {
        health = Health;
        block = Block;
        damage = Damage;
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
    
    
};
