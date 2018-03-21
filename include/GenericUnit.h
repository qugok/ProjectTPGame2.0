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

    bool canAttack(IUnit *unit);

    bool isFlying();

    void moveTo(CPosition *position);

    std::vector<CPosition *> canMoveTo(Field *field);

    void attack(IUnit *unit);

    void defenceFrom(IUnit *unit);

    int getAttack();

    int getDefence();

    int getMoveDistance();

    int getAttackDistance();

    int getCounterattackDamage();

    Player *getPlayer() override;

    Life& getLife();

    CPosition *getPosition();

    void step();

    bool dead();

    bool isMoved() override;

    bool isHited() override;

    std::vector<IUnit *> canAttack(Field *field) override;

    ~GenericUnit() override;

    Avatar *getAvatar();

    void setAvatar(Avatar *avatar);

    friend std::ostream &operator<<(std::ostream &out, IUnit *unit);

};

//#endif //PROJECTTPGAME_UNIT_H
