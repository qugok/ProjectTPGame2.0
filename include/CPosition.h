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

    IUnit *getUnit() const;

    void clear();

    bool operator==(const CPosition &position) const;

    bool empty() const;

    int distanceTo(CPosition *position);

    friend std::ostream &operator<<(std::ostream &out, CPosition &position);

};


//#endif //PROJECTTPGAME_POSITION_H
