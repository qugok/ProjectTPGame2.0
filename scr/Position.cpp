//
// Created by iesek on 19.03.2018.
//


#include "Position.h"
#include "IUnit.h"
#include <iostream>
Position::Position(int x, int y) : x(x), y(y) , unit(nullptr) {}

void Position::setUnit(IUnit *unit) {
    Position::unit = unit;
}

void Position::clear() {
    unit = nullptr;
}

int Position::distanceTo(Position *position) {
    return abs(position->x - this->x) + abs(position->y - this->y);
}


//#endif //PROJECTTPGAME_POSITION_H
