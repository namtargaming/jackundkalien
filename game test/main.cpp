//  Created by Rat Man and YIM on Earth Day 2023.

#include <iostream>
#include "./edward.hpp"
#include "./enemy.hpp"
#include "./game.hpp"


using namespace std;

int main() {
    int return_value;
    while(true){
        Player player;
        game mainGame;
        cout << "Welcome to d.tech Edventure! You are Ed...ward." << endl << "You see a small child at a school. This is what they look like:" << endl;
        pepper();
        cout << endl << Attack them" << endl ;
        Enemy ninthGrader(10,10);
        mainGame.attackLoop(player, ninthGrader);
    }

    cout << "Congratulations on winning the game!" << endl;
    pic();

}