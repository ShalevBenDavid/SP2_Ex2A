// Created by Shalev Ben David.
#include <string>
#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

namespace ariel {
    // Private attributes.
    class Player {
        std::string name;
    public:
        // Constructors.
        Player() {}
        Player(std::string name) {}
        // Methods.
        int stacksize() { return 27; }
        int cardesTaken() { return 27; }
    };
};

#endif