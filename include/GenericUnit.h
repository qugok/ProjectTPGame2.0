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

    bool canAttack(IUnit *unit) override;

    bool isFlying() override;

    void moveTo(CPosition *position) override;

    std::vector<CPosition *> canMoveTo(Field *field) override;

    void attack(IUnit *unit) override;

    void defenceFrom(IUnit *unit) override;

    int getAttack() override;

    int getDefence() override;

    int getMoveDistance() override;

    int getAttackDistance() override;

    int getCounterattackDamage() override;

    Player *getPlayer() override;

    Life &getLife() override;

    CPosition *getPosition() override;

    void step() override;

    bool dead() override;

    bool isMoved() override;

    bool isHited() override;

    std::vector<IUnit *> canAttack(Field *field) override;

    ~GenericUnit() override;

    Avatar *getAvatar() override;

    void setAvatar(Avatar *avatar) override;


};

//#endif //PROJECTTPGAME_UNIT_H
