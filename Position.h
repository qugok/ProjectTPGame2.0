//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "IUnit.h"

class Position { // позиция на поле
    int x, y;
    IUnit* unit;
public:
    Position(int x, int y) : x(x), y(y) , unit(nullptr) {}

    void setUnit(IUnit *unit) {
        Position::unit = unit;
    }

    void clear() {
        unit = nullptr;
    }

    int distanceTo(Position *position) {
        return abs(position->x - this->x) + abs(position->y - this->y);
    }
};


#endif //PROJECTTPGAME_POSITION_H
