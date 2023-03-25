// Created by Shalev Ben David.
#include "player.hpp"
using namespace ariel;
#ifndef GAME_H
#define GAME_H

class Game {
    // Private attributes.
    Player A;
    Player B;
public:
    // Constructor.
    Game(Player player1, Player player2) {
        A.setName(player1.getName());
        B.setName(player2.getName());
    }
    // Destructor.
    ~Game() {}
    // Methods.
    void playTurn() {}
    void printLastTurn() {}
    void playAll(){}
    void printWiner(){}
    void printLog() {}
    void printStats() {}
    // Get method.
    Player getPlayerA() { return A; }
    Player getPlayerB() { return B; }
};

#endif