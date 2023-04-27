#include <iostream>
#include "./player.hpp"
#include "./enemy.hpp"
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
                default:
                    cout << "please select 1, 2, or 3" << endl;
            } 
        }
    }
    // if attack returns 1 the defender is dead
    int attack(Player player, Enemy enemy, bool attackT_defendF){
        if(attackT_defendF){
            enemy.health -= 10; // needs player damage 

        }
        else if(attackT_defendF == false){
            player.setHealth(-1 * enime.damage);
        }
        if(enime.health <= 0 || player.getHealth() <= 0){
            return 1;
        }
        else{
            return 0;
        }
    }
        int attackLoop(Player player, Enemy enemy){
        while(playing)
        {
            cout << "what would you like to do?" << endl << "1: attack" << endl << "2: defend" << endl << "3: heal"  << endl ;
            cin >> input;
            switch (input) {
                case 1:
                    cout << "You attack" << endl;
                    enime.health -= 10;
                    break;
                case 2:
                    cout << "You defend" << endl;
                    player.setHealth(-1 * (enime.damage - player.getBlock()));
                    break;
                case 3:
                    if(player.getHealth() >= 100){
                        cout << "your health is full" << endl;
                    }
                    else{
                        cout << "You heal" << endl;
                        player.setHealth((player.getHealth() + 10));
                        break;
                    }
                default:
                    cout << "please select 1, 2, or 3" << endl;
            } 
        }
    }
};
// RAT MAN WAZ HERE!