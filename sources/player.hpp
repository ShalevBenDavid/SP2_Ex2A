// Created by Shalev Ben David.
#include <string>
#include <iostream>
#ifndef PLAYER_H
#define PLAYER_H

const int FULL_DECK = 26;
const int EMPTY_DECK = 0;

namespace ariel {
    // Private attributes.
    class Player {
        std::string name;
        int stack_size = FULL_DECK;
        int cards_taken = EMPTY_DECK;
    public:
        // Constructor.
        Player(const std::string &player_name = "") : name(player_name) {}
        // Get method.
        const std::string& getName() { return name; }
        int& stacksize() { return stack_size; }
        int& cardesTaken() { return cards_taken; }
        // Set method.
        void setName(const std::string &new_name) { name = new_name; }
        // ToString method.
        std::string toString() { return "[Player name: " + name + "]"; }
    };
}

#endif