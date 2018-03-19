//
// Created by iesek on 19.03.2018.
//

//
// Created by iesek on 19.03.2018.
//

#include "Units.h"
#include "Position.h"
#include "CConstants.h"
#include "Life.h"
#include "GenericUnit.h"

namespace Constants::Default::Warrior
{

     Warrior::Warrior(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
            int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}
     explicit Warrior::Warrior(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}


}
namespace Constants::Default::Flyer
{

    Flyer::Flyer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
          int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, true, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}

    explicit Flyer::Flyer(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, true, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}


}


namespace Constants::Default::Archer
{
    Archer::Archer(Position *_position, const Life &_life, bool _isMoved, bool _isHited, int _attackPoints,
           int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage) : GenericUnit(
            _position, _life, _isMoved, _isHited, false, _attackPoints, _defencePoints, _moveDistance,
            _attackDiatance, _counterattackDamage) {}

    explicit Archer::Archer(Position *_position) : GenericUnit(
            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
            cAttackDistance, cCounterattackDamage) {}
}