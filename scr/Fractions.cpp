//
// Created by iesek on 19.03.2018.
//

#include "Fractions.h"
#include "CConstants.h"

Russian::Russian(CPosition *position, Player *player) : _player(player)
{
    Russian::defaultPosition = position;
}
Warrior *Russian::create_warrior() {
    using namespace Constants::Russian::Warrior;
    return new Warrior(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                       cAttackDistance, cCounterattackDamage);
}

Archer *Russian::create_archer() {
    using namespace Constants::Russian::Archer;
    return new Archer(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                      cAttackDistance, cCounterattackDamage);
}

Flyer *Russian::create_flayer()  {
    using namespace Constants::Russian::Flyer;
    return new Flyer(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                     cAttackDistance, cCounterattackDamage);
}

CPosition *Russian::getDefaultPosition() {
    return defaultPosition;
}

Russian::~Russian() {

}


American::American(CPosition *position, Player *player) : _player(player)
{
    defaultPosition = position;
}
Warrior* American::create_warrior()  {
    using namespace Constants::American::Warrior;
    return new Warrior(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                       cAttackDistance, cCounterattackDamage);
}

Archer* American::create_archer()  {
    using namespace Constants::American::Archer;
    return new Archer(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                      cAttackDistance, cCounterattackDamage);
}

Flyer* American::create_flayer()  {
    using namespace Constants::American::Flyer;
    return new Flyer(defaultPosition, _player, Life(cMaxLives), true, true, cAttack, cDefence, cMoveDistance,
                     cAttackDistance, cCounterattackDamage);
}

CPosition *American::getDefaultPosition() {
    return defaultPosition;
}

American::~American() {

}


