//
// Created by iesek on 13.03.2018.
//

#include "GenericUnit.h"
#include "CPosition.h"

using std::vector;

GenericUnit::GenericUnit(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited,
                         bool _isFlying, int _attackPoints,
                         int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage)
        : _position(_position), _player(player), _life(_life), _isMoved(_isMoved), _isHited(_isHited),
          _isFlying(_isFlying),
          _attackPoints(_attackPoints), _defencePoints(_defencePoints), _moveDistance(_moveDistance),
          _attackDiatance(_attackDiatance), _counterattackDamage(_counterattackDamage) { _position->setUnit(this); }

bool GenericUnit::canAttack(IUnit *unit) const {
    return unit == nullptr ||
           unit->getPosition()->distanceTo(_position) && !_isHited && unit->getPlayer() != _player;

}

bool GenericUnit::isFlying() const {
    return _isFlying;
}

void GenericUnit::moveTo(CPosition *position) {
    this->getPosition()->clear();
    position->setUnit(this);
    this->_position = position;
    _isMoved = true;
}

vector<CPosition *> GenericUnit::canMoveTo(Field *field) const {
    vector<CPosition* > answer;
    if (_isMoved)
        return answer;
    for (CPosition* position : field->getList())
    {
        if (position->distanceTo(_position) <= this->getMoveDistance() && position->empty() &&
            position != field->getDefaultRussian() && position != field->getDefaultAmerican())
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

int GenericUnit::getAttack() const {
    return _attackPoints;
}

int GenericUnit::getDefence() const {
    return _defencePoints;
}

int GenericUnit::getMoveDistance() const {
    return _moveDistance;
}

int GenericUnit::getAttackDistance() const {
    return _attackDiatance;
}

int GenericUnit::getCounterattackDamage() const {
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

bool GenericUnit::dead() const {
    return !_life.isAlife();
}

Avatar *GenericUnit::getAvatar() {
    return _avatar;
}

void GenericUnit::setAvatar(Avatar *avatar) {
    _avatar = avatar;
}

std::ostream &operator<<(std::ostream &out, IUnit *unit) {
    out << unit->getLife();
    return out;
}

vector<IUnit *> GenericUnit::canAttack(Field *field) const {
    vector<IUnit *> answer;
    for (CPosition *position : field->getList()) {
        if (!position->empty() && canAttack(position->getUnit()) && position != field->getDefaultRussian() &&
            position != field->getDefaultAmerican()) {
            answer.push_back(position->getUnit());
        }
    }
    return answer;
}

Player *GenericUnit::getPlayer() {
    return _player;
}

bool GenericUnit::isMoved() const {
    return _isMoved;
}

bool GenericUnit::isHited() const {
    return _isHited;
}

GenericUnit::~GenericUnit() = default;





//#endif //PROJECTTPGAME_UNIT_H