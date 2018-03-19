//
// Created by iesek on 19.03.2018.
//

#include "Game.h"
#include "Field.h"
#include "Player.h"
#include "Fractions.h"

Game::Game(int height, int width) {
    field = new Field(height, width);
    currentPlayer = false;
    _American = new Player(new American(field->getDefaultAmerican()));
    _Russian = new Player(new Russian(field->getDefaultRussian()));
}

void Game::step() {
    currentPlayer++;
    
}


//#endif //PROJECTTPGAME_GAME_H
