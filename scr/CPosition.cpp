//
// Created by iesek on 19.03.2018.
//


#include "CPosition.h"
#include "IUnit.h"
#include <iostream>
CPosition::CPosition(int x, int y) : x(x), y(y) , unit(nullptr) {}

void CPosition::setUnit(IUnit *unit) {
    CPosition::unit = unit;
}

void CPosition::clear() {
    unit = nullptr;
}

int CPosition::distanceTo(CPosition *position) {
    return abs(position->x - this->x) + abs(position->y - this->y);
}


//#endif //PROJECTTPGAME_POSITION_H
