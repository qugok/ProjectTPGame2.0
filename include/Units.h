//
// Created by iesek on 19.03.2018.
//

#pragma once

class Warrior : public GenericUnit {

public:
    Warrior(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
            int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

    explicit Warrior(Position *_position);
};

class Flyer : public GenericUnit {

public:
    Flyer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
          int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

    explicit Flyer(Position *_position);


};

class Archer : public GenericUnit {

public:
    Archer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
           int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);
    explicit Archer(Position *_position);
};