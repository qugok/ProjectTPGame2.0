//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Units.h"

class Fraction {
public:
    virtual Archer* create_archer() = 0;
    virtual Flyer* create_flayer() = 0;
    virtual Warrior* create_warrior() = 0;

    virtual CPosition *getDefaultPosition() = 0;
    virtual ~Fraction(){}
};