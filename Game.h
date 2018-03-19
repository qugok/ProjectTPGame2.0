//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Field.h"
//#include "Player.h"

class Game {
private:
    Field* field;
    Player* _American;
    Player* _Russian;
public:
    Game(int height, int width) {
        field = new Field(height, width);
        field.
        _American = new Player(new American());
    }
};


#endif //PROJECTTPGAME_GAME_H
