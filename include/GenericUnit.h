//
// Created by iesek on 13.03.2018.
//

#pragma once

#include <vector>
#include "IUnit.h"

class GenericUnit : public IUnit {
private:
    CPosition* _position;
    Player *_player;
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

    GenericUnit(CPosition *_position, Player *player, const Life &_life, bool _isMoved, bool _isHited, bool _isFlying,
                int _attackPoints,
                int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

    bool canAttack(IUnit *unit) const override;

    bool isFlying() const override;

    void moveTo(CPosition *position) override;

    std::vector<CPosition *> canMoveTo(Field *field) const override;

    void attack(IUnit *unit) override;

    void defenceFrom(IUnit *unit) override;

    int getAttack() const override;

    int getDefence() const override;

    int getMoveDistance() const override;

    int getAttackDistance() const override;

    int getCounterattackDamage() const override;

    Player *getPlayer() override;

    Life &getLife() override;

    CPosition *getPosition() override;

    void step() override;

    bool dead() const override;

    bool isMoved() const override;

    bool isHited() const override;

    std::vector<IUnit *> canAttack(Field *field) const override;

    ~GenericUnit() override;

    Avatar *getAvatar() override;

    void setAvatar(Avatar *avatar) override;


};

//#endif //PROJECTTPGAME_UNIT_H
