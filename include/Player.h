//
// Created by iesek on 19.03.2018.
//


#pragma once


#include "IUnit.h"
#include "Fraction.h"

class Player {
private:
    std::vector<IUnit*> _units;
    Fraction* fraction;
    //TODO реализация Player
public:
    Player(Fraction *fraction);
    void addWarior();
    void addArcher();
    void addFlyer();
    void step();
};

void sert(int a);