//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Units.h"

class Fraction {
public:
    virtual IUnit *create_archer() const = 0;

    virtual IUnit *create_flayer() const = 0;

    virtual IUnit *create_warrior() const = 0;

    virtual ~Fraction(){}
};