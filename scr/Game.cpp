//
// Created by iesek on 19.03.2018.
//

#include "Game.h"
#include "Fractions.h"

Game::Game(int height, int width) {
    field = new Field(height, width);
    currentPlayer = false;
    _American = new Player(new American(field->getDefaultAmerican(), _American));
    _Russian = new Player(new Russian(field->getDefaultRussian(), _Russian));
}

void Game::step() {
    currentPlayer^=1;
    currentPlayer ? _Russian->step() : _American->step();
}

Player* Game::getCurrentPlayer() {
    return currentPlayer ? _Russian : _American;
}

Player *Game::getOtherPlayer() {
    return currentPlayer ? _American : _Russian;
}

bool Game::finished() {
    return _American->dead() || _Russian->dead();
}

Field *Game::getField() const {
    return this->field;
}




//#endif //PROJECTTPGAME_GAME_H
