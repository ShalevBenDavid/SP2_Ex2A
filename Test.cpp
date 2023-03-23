// Created by Shalev Ben David.
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

TEST_CASE("Case 1: Beginning and end of the game.") {
    // Creating 2 players and the game.
    Player A("Alice");
    Player B("Bob");
    Game game(A, B);
    // ---- Testing: Checking the last turn stats before starting the game.
    // ---- Expecting: Should throw exception.
    CHECK_THROWS(game.printLastTurn());
    CHECK_THROWS(game.printLog());
    // ---- Testing: Checking who won before starting the game.
    // ---- Expecting: Should throw exception.
    CHECK_THROWS(game.printWiner());
    // ---- Testing: Check the # of cards of each player before starting.
    // ---- Expecting: 26 cards each.
    CHECK(A.stacksize() == 26);
    CHECK(B.stacksize() == 26);
    // ---- Testing: Check the # of cards that each player won before starting.
    // ---- Expecting: 0 cards each.
    CHECK(A.cardesTaken() == 0);
    CHECK(B.cardesTaken() == 0);
    // Play till someone wins (end of game).
    game.playAll();
    // ---- Testing: Playing another round even when the game is over.
    // ---- Expecting: Should throw exception.
    CHECK_THROWS(game.playTurn());
    // ---- Testing: Playing till the end even when the game is over.
    // ---- Expecting: Should throw exception.
    CHECK_THROWS(game.playAll());
}

TEST_CASE("Case 2: During and after 5 games.") {
    // Creating 2 players and the game.
    Player A("Alice");
    Player B("Bob");
    Game game(A, B);
    // Play 5 rounds.
    for (int i = 1; i <= 5; i++) {
        game.playTurn();
        // ---- Testing: Checking who won during the first 5 turns.
        // ---- Expecting: Should throw exception.
        CHECK_THROWS(game.printWiner());
        // ---- Testing: Checking who won during the first 5 turns.
        // ---- Expecting: Should throw exception.
        CHECK_THROWS(game.printWiner());
        // ---- Testing: Checking each player has the right number of cards in this turn.
        // ---- Expecting: In the i turn, each player should have 26-i cards at most.
        CHECK(A.stacksize() <= 26 - i);
        CHECK(B.stacksize() <= 26 - i);
    }
    // ---- Testing: Checking that at least one of the players has less than 26 cards.
    // ---- Expecting: True.
    CHECK((A.stacksize() < 26 || B.stacksize() < 26));
}

TEST_CASE("Case 3: Winning.") {
    // Creating 2 players and the game.
    Player A("Alice");
    Player B("Bob");
    Game game(A, B);
    // Play till someone wins (end of game).
    game.playAll();
    // ---- Testing: Checking that at least one of the players has won.
    // ---- Expecting: One has more cards that he won then the other.
    CHECK((A.cardesTaken() > B.cardesTaken() || A.cardesTaken() < B.cardesTaken()));
}

TEST_CASE("Case 4: A draw.") {
    // Creating 2 players and the game.
    Player A("Alice");
    Player B("Bob");
    Game game(A, B);
}