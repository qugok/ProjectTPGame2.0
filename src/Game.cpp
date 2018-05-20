//
// Created by iesek on 19.03.2018.
//
#include "Game.h"
#include "Fractions.h"

Game::Game(int height, int width) : map(height, width), first(new Russian()), second(new American()) {
    currentPlayer = false;
}

void Game::step() {
    currentPlayer^=1;
}

Player &Game::getCurrentPlayer() {
    return currentPlayer ? first : second;
}

Player &Game::getOtherPlayer() {
    return currentPlayer ? second : first;
}

bool Game::finished() const {
    try {
        return first.getArmyNumbers().empty() || second.getArmyNumbers().empty();
    }
    catch (...) {
        return true;
    }
}


