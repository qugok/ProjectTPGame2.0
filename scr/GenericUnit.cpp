//
// Created by iesek on 13.03.2018.
//

#include "GenericUnit.h"
#include "CPosition.h"
#include "Life.h"
#include "IUnit.h"
#include "Field.h"
#include "Avatar.h"

#include <vector>
using std::vector;

GenericUnit::GenericUnit(CPosition *_position, const Life &_life, bool _isMoved, bool _isHited, bool _isFlying, int _attackPoints,
            int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage)
        : _position(_position), _life(_life), _isMoved(_isMoved), _isHited(_isHited), _isFlying(_isFlying),
          _attackPoints(_attackPoints), _defencePoints(_defencePoints), _moveDistance(_moveDistance),
          _attackDiatance(_attackDiatance), _counterattackDamage(_counterattackDamage) {}

bool GenericUnit::canAttack(IUnit *unit)  {
    return unit->getPosition()->distanceTo(this->getPosition()) && !_isHited;
}

bool GenericUnit::isFlying() {
    return _isFlying;
}

void GenericUnit::moveTo(CPosition *position) {
    this->getPosition()->clear();
    position->setUnit(this);
    this->_position = position;
    _isMoved = true;
}

vector<CPosition *> GenericUnit::canMoveTo(Field *field) {
    vector<CPosition* > answer;
    if (_isMoved)
        return answer;
    for (CPosition* position : field->getList())
    {
        if(position->distanceTo(this->getPosition()) <= this->getMoveDistance())
            answer.push_back(position);
    }
    return answer;
}

void GenericUnit::attack(IUnit *unit) {
    unit->getLife().getDamage(this->getAttack() - unit->getDefence());
    _isHited = true;
}

void GenericUnit::defenceFrom(IUnit *unit) {
    unit->getLife().getDamage(this->getCounterattackDamage());
}

int GenericUnit::getAttack() {
    return _attackPoints;
}

int GenericUnit::getDefence() {
    return _defencePoints;
}

int GenericUnit::getMoveDistance() {
    return _moveDistance;
}

int GenericUnit::getAttackDistance() {
    return _attackDiatance;
}

int GenericUnit::getCounterattackDamage() {
    return _counterattackDamage;
}

Life& GenericUnit::getLife() {
    return _life;
}

CPosition *GenericUnit::getPosition() {
    return _position;
}

void GenericUnit::step() {
    _isHited = false;
    _isMoved = false;
}

bool GenericUnit::dead() {
    return !this->getLife().isAlife();
}

Avatar *GenericUnit::getAvatar() {
    return _avatar;
}

void GenericUnit::setAvatar(Avatar *avatar) {
    _avatar = avatar;
}


//#endif //PROJECTTPGAME_UNIT_H
