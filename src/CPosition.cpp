//
// Created by iesek on 19.03.2018.
//


#include "CPosition.h"

CPosition::CPosition(int x, int y) : x(x), y(y) , unit(nullptr) {}

void CPosition::setUnit(IUnit *unit) {
    this->unit = unit;
}

void CPosition::clear() {
    this->unit = nullptr;
}

int CPosition::distanceTo(CPosition *position) const {
    return abs(position->x - this->x) + abs(position->y - this->y);
}

std::ostream &operator<<(std::ostream &out, CPosition &position) {
    out << "x: " << position.x << "\ty: " << position.y;
    if (position.unit != nullptr)
        out << "\tunit: " << position.unit;
    else
        out << "\t\t";
    return out;
}

bool CPosition::empty() const {
    return this->unit == nullptr;
}

IUnit *CPosition::getUnit() const {
    return this->unit;
}

bool CPosition::operator==(const CPosition &position) const {
    return position.unit == unit && position.y == y && position.x == x;
}
//#endif //PROJECTTPGAME_POSITION_H
