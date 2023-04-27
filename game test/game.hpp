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
    int attack(Player player, Enime enime, bool attackT_defendF){
        if(attackT_defendF){
            enime.health -= 10; // needs player damage 

        }
        else if(attackT_defendF == false){
            player.health -= enime.damage;
        }
        if(enime.health <= 0 || player.health <= 0){
            return 1;
        }
        else{
            return 0;
        }
    }
        int attackLoop(Player player, Enime enime){
        while(playing)
        {
            cout << "what would you like to do?" << endl << "1: attack" << endl << "2: defend" << endl << "3: heal"  << endl ;
            cin >> input;
            switch (input) {
                case 1:
                    cout << "You attack" << endl;
                    return 1;
                    break;
                case 2:
                    cout << "You defend" << endl;
                    return 2;
                    break;
                case 3:
                    cout << "You heal" << endl;
                    return 3;
                    break;
                default:
                    cout << "please select 1, 2, or 3" << endl;
            } 
        }
    }
};
// RAT MAN WAZ HERE!