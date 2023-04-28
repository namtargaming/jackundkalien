//  Created by Rat Man and YIM on Earth Day 2023.

#include <iostream>
#include "./Player.hpp"
#include "./enemy.hpp"
#include "./game.hpp"
#include "./edward.hpp"
using namespace std;

int main() {
    int return_value;
    bool playing = true;
    while(playing){
        Player player;
        game mainGame;
        Enemy ninthGrader(10,10);
        ninthGrader.pepper();
        cout << "Welcome to d.tech Edventure! You are Ed...ward." << endl << "You see a small 9th grade child at a school. That ^ is what they look like." << endl;
        cout << "Fight!" << endl ;
        mainGame.attackLoop(player, ninthGrader);
        cout << "Congratulations on winning the game!" << endl;
        pic();
        playing = false;
    }
    while(true){}

}