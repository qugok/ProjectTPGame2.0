//
// Created by iesek on 19.03.2018.
//


#include "IUnit.h"
#include "Factories.h"

#pragma once

class Player {
private:
    vector<IUnit*> _units;
    Fraction* fraction;
    //TODO реализация Player
public:
    explicit Player(Fraction *fraction) : fraction(fraction) {}

    void addWarior()
    {
        _units.push_back(fraction->create_warior());
    }
    void addArcher()
    {
        _units.push_back(fraction->create_archer());
    }
    void addFlyer()
    {
        _units.push_back(fraction->create_flayer());
    }

    void step() {
        for (IUnit *unit : _units) {
            unit->step();
        }
    }
};


//#endif //PROJECTTPGAME_PLAYER_H
