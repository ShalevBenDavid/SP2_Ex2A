// Created by Shalev Ben David.
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>

TEST_CASE("Main check") {
    Player A("Alice");
    Player B("Bob");
    Game game(A, B);
    // Play 5 rounds.
    for (int i = 0;i < 5;i++) {
        game.playTurn();
    }
}