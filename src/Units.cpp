//
// Created by iesek on 19.03.2018.
//

//
// Created by iesek on 19.03.2018.
//

#include "Units.h"

Warrior::Warrior(const Life &_life, int _attackPoints) : GenericUnit(_life, false, _attackPoints) {}

bool Warrior::canAttack(IUnit *unit) const {
    return !unit->isFlying();
}

//Warrior::Warrior(CPosition *_position) : GenericUnit(
//        _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
//        cAttackDistance, cCounterattackDamage) {}



Flyer::Flyer(const Life &_life, int _attackPoints) : GenericUnit(_life, true, _attackPoints) {}

bool Flyer::canAttack(IUnit *unit) const {
    return true;
}

//Flyer::Flyer(CPosition *_position) : GenericUnit(
//        _position, Life(cMaxLives), true, true, true, cAttack, cDefence, cMoveDistance,
//        cAttackDistance, cCounterattackDamage) {}



Archer::Archer(const Life &_life, int _attackPoints) : GenericUnit(_life, false, _attackPoints) {}

bool Archer::canAttack(IUnit *unit) const {
    return true;
}

//Archer::Archer(CPosition *_position) : GenericUnit(
//            _position, Life(cMaxLives), true, true, false, cAttack, cDefence, cMoveDistance,
//            cAttackDistance, cCounterattackDamage) {}
