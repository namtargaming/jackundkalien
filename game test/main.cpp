//  Created by YIM on Earth Day 2023.

#include <iostream>
#include "./edward.hpp"
#include "./game.hpp"


using namespace std;

int main() {
    int return_value;
    while(true){
        Player player;
        game mainGame;
        cout << "Welcome to d.tech Edventure! You are Ed...ward." << endl << "you walk in the front of the bilding and there is a small little 9th grader standing right infront of you." << endl ;
        Enime ninthGrader(10,10,0);
        return_value = mainGame.attackLoop(player, ninthGrader);
        if(return_value == 1){
        mainGame.attack(player,ninthGrader,true);
    }

    cout << "Congratulations on winning the game!" << endl;
    }
}
