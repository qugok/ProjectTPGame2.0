//
// Created by iesek on 19.03.2018.
//

#include "Fractions.h"
#include "Position.h"
#include "Units.h"
#include "CConstants.h"
#include "Life.h"

Russian::Russian(Position *position)
{
    Russian::defaultPosition = position;
}
Warrior *Russian::create_warior() {
    using namespace Constants::Russian::Warrior;
    return new Warrior(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                       cAttackDistance, cCounterattackDamage);
}

Archer *Russian::create_archer() {
    using namespace Constants::Russian::Archer;
    return new Archer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                      cAttackDistance, cCounterattackDamage);
}

Flyer *Russian::create_flayer()  {
    using namespace Constants::Russian::Flyer;
    return new Flyer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                     cAttackDistance, cCounterattackDamage);
}


explicit American::American(Position* position)
{
    defaultPosition = position;
}
Warrior *American::create_warior()  {
    using namespace Constants::American::Warrior;
    return new Warrior(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                       cAttackDistance, cCounterattackDamage);
}

Archer *American::create_archer()  {
    using namespace Constants::American::Archer;
    return new Archer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                      cAttackDistance, cCounterattackDamage);
}

Flyer *American::create_flayer()  {
    using namespace Constants::American::Flyer;
    return new Flyer(defaultPosition, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                     cAttackDistance, cCounterattackDamage);
}


