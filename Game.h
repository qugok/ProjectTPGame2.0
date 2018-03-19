//
// Created by iesek on 19.03.2018.
//


#include "Field.h"
#include "Player.h"

#pragma once


class Game {
private:
    Field* field;
    Player* _American;
    Player* _Russian;
    bool currentPlayer = 0;
public:
    Game(int height, int width) {
        field = new Field(height, width);
        _American = new Player(new American(field->getDefaultAmerican()));
        _Russian = new Player(new Russian(field->getDefaultRussian()));
    }

    void step() {
        currentPlayer++;

    }
};


//#endif //PROJECTTPGAME_GAME_H
