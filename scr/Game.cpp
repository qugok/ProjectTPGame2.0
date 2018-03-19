//
// Created by iesek on 19.03.2018.
//

#include "Game.h"
#include "Fractions.h"

Game::Game(int height, int width) {
    field = new Field(height, width);
    currentPlayer = false;
    _American = new Player(new American(field->getDefaultAmerican()));
    _Russian = new Player(new Russian(field->getDefaultRussian()));
}

void Game::step() {
    currentPlayer^=1;
    switch (currentPlayer)
    {
        case 0:
            _Russian->step();
            break;
        case 1:
            _American->step();
            break;
        default:break;
    }
}

Player* Game::getCurrentPlayer() {
    switch (currentPlayer)
    {
        case 0:
            return _Russian;
        case 1:
            return _American;
        default:break;
    }
}




//#endif //PROJECTTPGAME_GAME_H
