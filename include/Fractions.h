//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Fraction.h"
#include "Units.h"

class CPosition;

class Russian : public Fraction {
private:
    CPosition* defaultPosition;
public:
    explicit Russian(CPosition *position);
    Warrior *create_warrior();

    Archer *create_archer();

    Flyer *create_flayer();
};

class American : public Fraction {
private:
    CPosition* defaultPosition;
public:
    explicit American(CPosition* position);
    Warrior *create_warrior();

    Archer *create_archer();

    Flyer *create_flayer();
};

