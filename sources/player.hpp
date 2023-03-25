// Created by Shalev Ben David.
#include <string>
#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

const int NUM_OF_CARDS = 26;

namespace ariel {
    // Private attributes.
    class Player {
        std::string name;
    public:
        // Constructors.
        Player() { name = ""; }
        Player(std::string player_name) { name = player_name; }
        // Destructor.
        ~Player() {}
        // Get method.
        std::string getName() { return name; }
        // Set method.
        void setName(std::string new_name) { name = new_name; }
        // Methods.
        int static stacksize() { return NUM_OF_CARDS; }
        int static cardesTaken() { return NUM_OF_CARDS; }
    };
}

#endif