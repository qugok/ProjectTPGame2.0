//
// Created by iesek on 13.03.2018.
//

#include "IUnit.h"
#include "CConstants.h"

#pragma once

class GenericUnit : public IUnit {
private:
    Position* _position;
    Life _life;
    bool _isMoved;
    bool _isHited;
    bool _isFlying;
    int _attackPoints;
    int _defencePoints;
    int _moveDistance;
    int _attackDiatance;
    int _counterattackDamage;
    Avatar * _avatar;
public:

    GenericUnit(Position *_position, const Life &_life, bool _isMoved, bool _isHited, bool _isFlying, int _attackPoints,
                int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage)
            : _position(_position), _life(_life), _isMoved(_isMoved), _isHited(_isHited), _isFlying(_isFlying),
              _attackPoints(_attackPoints), _defencePoints(_defencePoints), _moveDistance(_moveDistance),
              _attackDiatance(_attackDiatance), _counterattackDamage(_counterattackDamage) {}

    bool canAttack(IUnit *unit) override {
        return unit->getPosition()->distanceTo(this->getPosition()) && !_isHited;
    }

    bool isFlying() override {
        return _isFlying;
    }

    void moveTo(Position *position) override {
        this->getPosition()->clear();
        position->setUnit(this);
        this->_position = position;
        _isMoved = true;
    }

    vector<Position *> canMoveTo(Field *field) override {
        vector<Position* > answer;
        if (_isMoved)
            return answer;
        for (Position* position : field->getList())
        {
            if(position->distanceTo(this->getPosition()) <= this->getMoveDistance())
                answer.push_back(position);
        }
        return answer;
    }

    void attack(IUnit *unit) override {
        unit->getLife().getDamage(this->getAttack() - unit->getDefence());
        _isHited = true;
    }

    void defenceFrom(IUnit *unit) override {
        unit->getLife().getDamage(this->getCounterattackDamage());
    }

    int getAttack() override {
        return _attackPoints;
    }

    int getDefence() override {
        return _defencePoints;
    }

    int getMoveDistance() override {
        return _moveDistance;
    }

    int getAttackDistance() override {
        return _attackDiatance;
    }

    int getCounterattackDamage() override {
        return _counterattackDamage;
    }

    Life& getLife() override {
        return _life;
    }

    Position *getPosition() override {
        return _position;
    }

    void step() override {
        _isHited = false;
        _isMoved = false;
    }

    bool dead() override {
        return !this->getLife().isAlife();
    }

    Avatar *getAvatar() override {
        return _avatar;
    }

    void setAvatar(Avatar *avatar) override {
        _avatar = avatar;
    }
};

//#endif //PROJECTTPGAME_UNIT_H
