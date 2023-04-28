//  Created by Rat Man and YIM on Earth Day 2023.
using namespace std;

#include <iostream>
#include "./Player.hpp"
#include "./enemy.hpp"
#include "./game.hpp"
#include "./edward.hpp"


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
        return_value = mainGame.attackLoop(player, ninthGrader);
        if(return_value == 0){
            playing = false;
        }
        player.setDamage(5);
        player.setHealing(7);
        player.setBlock(7);
        Enemy tenthGrader(15,12);
        cout << "you slap the 9th grader in the face and he walks away slowly" << endl << "after you hit the 9th grader in the face, a tenth grader aproches you. this is what he looks like:" << endl ;
        tenthGrader.cole();
        return_value = mainGame.attackLoop(player, tenthGrader);
        if(return_value == 0){
            playing = false;
        }
        player.setDamage(5);
        player.setHealing(7);
        player.setBlock(7);
        Enemy eleventhGrader(20,15);
        cout << "you push over the 10th grader and he expodes when he hits the floor" << endl << "after you knock the 10th grader to the floor, a 11th grader aproches you. this is what he looks like:" << endl ;
        eleventhGrader.cole();
        return_value = mainGame.attackLoop(player, eleventhGrader);
        if(return_value == 0){
            playing = false;
        }
        player.setDamage(5);
        player.setHealing(7);
        player.setBlock(7);
        Enemy twelthGrader(25,18);
        cout << "you strangle the 11th grader until he goes unconshus" << endl << "after you knock out the 11th grader, a twelth grader aproches you. this is what he looks like:" << endl ;
        twelthGrader.cole();
        return_value = mainGame.attackLoop(player, twelthGrader);
        if(return_value == 0){
            playing = false;
        }
        player.setDamage(5);
        player.setHealing(7);
        player.setBlock(7);
        Enemy malisaMizel(25,25);
        cout << "you put the twelth grader in a head lock" << endl << "after you let the twelth grader go, malisa mizel aproches you. this is what she looks like:" << endl ;
        malisaMizel.cole();
        return_value = mainGame.attackLoop(player, malisaMizel);
        if(return_value == 0){
            playing = false;
        }
        cout << "Congratulations on winning the game!" << endl;
        pic();
        playing = false;
    }
    while(true){}

}