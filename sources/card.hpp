// Created by Shalev Ben David.
#include <string>
#ifndef CARD_H
#define CARD_H

class Card {
    // Private attributes.
    int type;
public:
    // Constructor.
    Card(int new_type = 1) : type(new_type) {}
    // Get method.
    int& getType() { return type; }
};

#endif