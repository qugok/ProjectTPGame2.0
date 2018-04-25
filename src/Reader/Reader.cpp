#include <Reader/Reader.h>

int Reader::getAttack() const {
    return Attack;
}

int Reader::getMoveDistance() const {
    return MoveDistance;
}

int Reader::getAttackDistance() const {
    return AttackDistance;
}

int Reader::getCounterattackDamage() const {
    return CounterattackDamage;
}

int Reader::getDefence() const {
    return Defence;
}

int Reader::getMaxLives() const {
    return MaxLives;
}

Reader::Reader() : MoveDistance(0), Attack(0), AttackDistance(0), CounterattackDamage(0), Defence(0), MaxLives(0) {}
