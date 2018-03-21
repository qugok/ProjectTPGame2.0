//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "GenericUnit.h"
#include "CPosition.h"

class Warrior : public GenericUnit {

public:
    Warrior(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
            int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

//    explicit Warrior(CPosition *_position);
};

class Flyer : public GenericUnit {

public:
    Flyer(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
          int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

//    explicit Flyer(CPosition *_position);


};

class Archer : public GenericUnit {

public:
    Archer(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
           int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

//    explicit Archer(CPosition *_position);
};