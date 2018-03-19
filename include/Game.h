//
// Created by iesek on 19.03.2018.
//

#pragma once


class Game {
private:
    Field* field;
    Player* _American;
    Player* _Russian;
    bool currentPlayer;
public:
    Game(int height, int width);
    
    void step();
};


//#endif //PROJECTTPGAME_GAME_H
