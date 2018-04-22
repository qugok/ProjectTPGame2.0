//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Units.h"

class Fraction {
public:
    virtual IUnit *create_archer() = 0;

    virtual IUnit *create_flayer() = 0;

    virtual IUnit *create_warrior() = 0;

    virtual CPosition *getDefaultPosition() = 0;
    virtual ~Fraction(){}
};