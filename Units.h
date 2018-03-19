//
// Created by iesek on 13.03.2018.
//


#include "GenericUnit.h"
#include "CConstants.h"

#pragma once

class Warrior : public GenericUnit {

public:
    using namespace Constants::Default::Warrior;

    Warrior(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
            int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}

    explicit Warrior(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}


};

class Flyer : public GenericUnit {

public:
    using namespace Constants::Default::Flyer;

    Flyer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
    int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, true, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}

    explicit Flyer(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, true, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}


};

class Archer : public GenericUnit {

public:
    using namespace Constants::Default::Archer;


    Archer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
    int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}

    explicit Archer(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}


};
//#endif //PROJECTTPGAME_UNITS_H
