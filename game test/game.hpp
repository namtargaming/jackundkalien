#include <iostream>
#include "./bj.hpp"
using namespace std;

class game{
    private:
        int input;
        bool playing = true;
    public:
    int choiseLoop(float choeseOne, float choeseTwo, float choeseThree){
        while(playing)
        {
            cout << "what would you like to do?" << endl << "1: " << choeseOne << endl << "2: " << choeseTwo << endl << "3: " << choeseThree << endl ;
            cin >> input;
            switch (input) {
                case 1:
                    cout << choeseOne << endl;
                    return 1;
                    break;
                case 2:
                    cout << choeseTwo << endl;
                    return 2;
                    break;
                case 3:
                    cout << choeseThree << endl;
                    return 3;
                    break;
               case 69:
                   poop();
                default:
                    cout << "please select 1, 2, or 3" << endl;
            } 
        }
    }
    // if attack returns 1 the defender is dead
    int attack(Player player, Enemy enemy, bool attackT_defendF){
        if(attackT_defendF){
            enemy.setHealth(enemy.getHealth() - 10); // needs player damage 

        }
        else if(attackT_defendF == false){
            player.setHealth(-1 * enemy.getDamage());
        }
        if(enemy.getHealth() <= 0 || player.getHealth() <= 0){
            return 1;
        }
        else{
            return 0;
        }
    }
        int attackLoop(Player player, Enemy enemy){
        while(playing)
        {
            bool playerBlocking = false;
            cout << "what would you like to do?" << endl << "1: attack" << endl << "2: defend" << endl << "3: heal"  << endl << "Your health: " <<  player.getHealth() << endl << "The enimes health: " <<  enemy.getHealth() << endl;
            cin >> input;
            switch (input) {
                case 1:
                    cout << "You attack" << endl;
                    enemy.setHealth(enemy.getHealth() - player.getDamage());
                    break;
                case 2:
                    cout << "You defend" << endl;
                    playerBlocking = true;
                    break;
                case 3:
                    if(player.getHealth() >= 100){
                        cout << "your health is full" << endl;
                        break;
                    }
                    else{
                        cout << "You heal" << endl;
                        player.setHealth(13);
                        break;
                    }
                case 69:
                        poop();
                default:
                    cout << "please select 1, 2, or 3" << endl;
                    break;
            } 
            if(playerBlocking){
                cout << "you block the enimes attack" << endl;
                player.setHealth(-1 * (enemy.getDamage() - player.getBlock()));
            }
            else if(playerBlocking == false){
                cout << "the enemy attacks you" << endl;
                player.setHealth(-1 * enemy.getDamage());
            }
            if(enemy.getHealth() <= 0){
                return 1;
            }
            if(player.getHealth() <= 0){
                cout << "you loose :(" << endl;
                return 0;
            }
        }
    }
};
// RAT MAN WAZ HERE!