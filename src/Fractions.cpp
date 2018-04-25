//
// Created by iesek on 19.03.2018.
//

#include "Fractions.h"

Russian::Russian(CPosition *position, Player *player,
                 std::shared_ptr<Reader> reader = std::make_shared<ConstantsReader>()) : _player(player), reader(
        std::move(reader))
{
    Russian::defaultPosition = position;
}
Warrior *Russian::create_warrior() {
    reader->readRussianWarrior();
    return new Warrior(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                       reader->getDefence(), reader->getMoveDistance(),
                       reader->getAttackDistance(), reader->getCounterattackDamage());
}

Archer *Russian::create_archer() {
    reader->readRussianArcher();
    return new Archer(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                      reader->getDefence(), reader->getMoveDistance(),
                      reader->getAttackDistance(), reader->getCounterattackDamage());
}

Flyer *Russian::create_flayer()  {
    reader->readRussianFlyer();
    return new Flyer(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                     reader->getDefence(), reader->getMoveDistance(),
                     reader->getAttackDistance(), reader->getCounterattackDamage());
}

CPosition *Russian::getDefaultPosition() {
    return defaultPosition;
}

Russian::~Russian() = default;


American::American(CPosition *position, Player *player,
                   std::shared_ptr<Reader> reader = std::make_shared<ConstantsReader>()) : _player(player), reader(
        std::move(reader))
{
    defaultPosition = position;
}
Warrior* American::create_warrior()  {
    reader->readAmericanWarrior();
    return new Warrior(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                       reader->getDefence(), reader->getMoveDistance(),
                       reader->getAttackDistance(), reader->getCounterattackDamage());
}

Archer* American::create_archer()  {
    reader->readAmericanArcher();
    return new Archer(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                      reader->getDefence(), reader->getMoveDistance(),
                      reader->getAttackDistance(), reader->getCounterattackDamage());
}

Flyer* American::create_flayer()  {
    reader->readAmericanFlyer();
    return new Flyer(defaultPosition, _player, Life(reader->getMaxLives()), true, true, reader->getAttack(),
                     reader->getDefence(), reader->getMoveDistance(),
                     reader->getAttackDistance(), reader->getCounterattackDamage());
}

CPosition *American::getDefaultPosition() {
    return defaultPosition;
}

American::~American() = default;


