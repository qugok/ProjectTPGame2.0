//
// Created by iesek on 19.03.2018.
//

#ifndef PROJECTTPGAME_FACTORIES_H
#define PROJECTTPGAME_FACTORIES_H

#include "Units.h"

class Fraction {
public:
    virtual Archer* create_archer() = 0;
    virtual Flyer* create_flayer() = 0;
    virtual Warrior* create_warior() = 0;
    virtual ~Fraction(){}
};

class Russain : public Fraction {
private:
    Position* defaultPosition;
public:
    explicit Russain(Position* position)
    {
        defaultPosition = position;
    }
    Warrior *create_warior() override {
        using namespace Constants::Russian::Warrior;
        return new Warrior(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                           cAttackDistance, cCounterattackDamage);
    }

    Archer *create_archer() override {
        using namespace Constants::Russian::Archer;
        return new Archer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                           cAttackDistance, cCounterattackDamage);
    }

    Flyer *create_flayer() override {
        using namespace Constants::Russian::Flyer;
        return new Flyer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                           cAttackDistance, cCounterattackDamage);
    }
};

class American : public Fraction {
private:
    Position* defaultPosition;
public:
    explicit American(Position* position)
    {
        defaultPosition = position;
    }
    Warrior *create_warior() override {
        using namespace Constants::American::Warrior;
        return new Warrior(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                           cAttackDistance, cCounterattackDamage);
    }

    Archer *create_archer() override {
        using namespace Constants::American::Archer;
        return new Archer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                          cAttackDistance, cCounterattackDamage);
    }

    Flyer *create_flayer() override {
        using namespace Constants::American::Flyer;
        return new Flyer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                         cAttackDistance, cCounterattackDamage);
    }
};

#endif //PROJECTTPGAME_FACTORIES_H
