//
// Created by iesek on 19.03.2018.
//

// TODO переписать game с учетом армий (не к 2 дедлайну)


#pragma once

#include "Player.h"
#include "Map.h"

class Game {
public:

    Game(int height, int width);

    void step();

    Player &getCurrentPlayer();

    Player &getOtherPlayer();

    bool finished() const;

private:
    Player first;
    Player second;
    Map map;
    bool currentPlayer;
};


//#endif //PROJECTTPGAME_GAME_H
