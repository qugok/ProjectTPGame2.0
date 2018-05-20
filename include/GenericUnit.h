//
// Created by iesek on 13.03.2018.
//

#pragma once

#include <vector>
#include "IUnit.h"

class GenericUnit : public IUnit {
public:
    GenericUnit(const Life &_life, bool _isFlying, int _attackPoints);

    bool isFlying() const override;

    void attack(IUnit *unit) override;

//    IUnit *fight(IUnit*& enemy) override;

    Life &getLife() override;

    bool canAttack(IUnit *unit) const override;

    bool dead() const override;

//    IUnit* set_next(IUnit *next) override;

//    IUnit *get_next()const  override;

    ~GenericUnit() override;

private:
    IUnit *next;
    Life _life;
    bool _isFlying;
    int _attackPoints;

};

//#endif //PROJECTTPGAME_UNIT_H
