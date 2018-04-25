#include <Reader.h>
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
