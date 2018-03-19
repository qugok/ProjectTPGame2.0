//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "IUnit.h"

class CPosition { // позиция на поле
    int x, y;
    IUnit* unit;
public:
    CPosition(int x, int y);

    void setUnit(IUnit *unit);

    void clear();

    int distanceTo(CPosition *position);
};


//#endif //PROJECTTPGAME_POSITION_H
