//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Field.h"
#include "Player.h"

class Game {
private:
    Field* field;
    Player* _American;
    Player* _Russian;
    bool currentPlayer;
public:
    Game(int height, int width);

    void step();
    Player* getCurrentPlayer();
};


//#endif //PROJECTTPGAME_GAME_H
