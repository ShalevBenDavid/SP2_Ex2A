// Created by Shalev Ben David.
#include "player.hpp"
#include <string>
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
    // ToString method.
    std::string toString() { return A.toString() + "\n" + B.toString(); }
};

#endif