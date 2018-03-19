//
// Created by iesek on 19.03.2018.
//

#ifndef PROJECTTPGAME_PLAYER_H
#define PROJECTTPGAME_PLAYER_H

#include "IUnit.h"
#include "Factories.h"

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
};


//TODO class Fraction

#endif //PROJECTTPGAME_PLAYER_H
