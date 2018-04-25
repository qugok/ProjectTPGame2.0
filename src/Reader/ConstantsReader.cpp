#include "Reader/ConstantsReader.h"
#include <CConstants.h>


void ConstantsReader::readRussianWarrior() {
    using namespace Constants::Russian::Warrior;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readRussianFlyer() {
    using namespace Constants::Russian::Flyer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readRussianArcher() {
    using namespace Constants::Russian::Archer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readAmericanWarrior() {
    using namespace Constants::American::Warrior;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readAmericanFlyer() {
    using namespace Constants::American::Flyer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readAmericanArcher() {
    using namespace Constants::American::Archer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readDefaultWarrior() {
    using namespace Constants::Default::Warrior;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readDefaultFlyer() {
    using namespace Constants::Default::Flyer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

void ConstantsReader::readDefaultArcher() {
    using namespace Constants::Default::Archer;
    Reader::Attack = cAttack;
    Reader::AttackDistance = cAttackDistance;
    Reader::MoveDistance = cMoveDistance;
    Reader::CounterattackDamage = cCounterattackDamage;
    Reader::Defence = cDefence;
    Reader::MaxLives = cMaxLives;
}

ConstantsReader::ConstantsReader() : Reader() {}

