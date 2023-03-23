// Created by Shalev Ben David.
#ifndef GAME_H
#define GAME_H
using namespace ariel;

class Game {
    // Private attributes.
    Player A;
    Player B;
public:
    // Constructor.
    Game(Player p1, Player p2) {}
    // Methods.
    void playTurn() {}
    void printLastTurn() {}
    void playAll(){}
    void printWiner(){}
    void printLog() {}
    void printStats() {}
};

#endif