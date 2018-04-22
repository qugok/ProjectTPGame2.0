//
// Created by iesek on 19.03.2018.
//

//
// Created by iesek on 19.03.2018.
//

#include "Units.h"

Warrior::Warrior(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited,
                 int _attackPoints,
                 int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
        _position, player, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
        _attackDiatance, _counterattackDamage) {}

//Warrior::Warrior(CPosition *_position) : GenericUnit(
//        _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
//        cAttackDistance, cCounterattackDamage) {}



Flyer::Flyer(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
             int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
        _position, player, _life, _isMoved, _isHited, true, _attackPoints, _defencePoints, _moveDistance,
        _attackDiatance, _counterattackDamage) {}

//Flyer::Flyer(CPosition *_position) : GenericUnit(
//        _position, Life(cMaxLives), true, true, true, cAttack, cDefence, cMoveDistance,
//        cAttackDistance, cCounterattackDamage) {}



Archer::Archer(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
               int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
        _position, player, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
        _attackDiatance, _counterattackDamage) {}

//Archer::Archer(CPosition *_position) : GenericUnit(
//            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
//            cAttackDistance, cCounterattackDamage) {}
