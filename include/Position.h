//
// Created by iesek on 19.03.2018.
//

#pragma once


class Position { // позиция на поле
    int x, y;
    GenericUnit* unit;
public:
    Position(int x, int y);

    void setUnit(IUnit *unit);

    void clear();

    int distanceTo(Position *position);
};


//#endif //PROJECTTPGAME_POSITION_H
