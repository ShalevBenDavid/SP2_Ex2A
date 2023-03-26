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
    Game(const Player& player1, const Player& player2) : A(player1), B(player2) {}
    // Methods.
    void playTurn() {}
    void printLastTurn() {}
    void playAll(){}
    void printWiner(){}
    void printLog() {}
    void printStats() {}
    // Get method.
    Player& getPlayerA() { return A; }
    Player& getPlayerB() { return B; }
    // ToString method.
    std::string toString() { return A.toString() + "\n" + B.toString(); }
};

#endif