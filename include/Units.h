//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "GenericUnit.h"

class Warrior : public GenericUnit {

public:
    Warrior(const Life &_life, int _attackPoints);

    bool canAttack(IUnit *unit) const override;
//    explicit Warrior(CPosition *_position);
};

class Flyer : public GenericUnit {

public:
    Flyer(const Life &_life, int _attackPoints);

//    explicit Flyer(CPosition *_position);
    bool canAttack(IUnit *unit) const override;

};

class Archer : public GenericUnit {

public:
    Archer(const Life &_life, int _attackPoints);

    bool canAttack(IUnit *unit) const override;
//    explicit Archer(CPosition *_position);
};