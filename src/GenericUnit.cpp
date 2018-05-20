//
// Created by iesek on 13.03.2018.
//

#include "GenericUnit.h"

using std::vector;

GenericUnit::GenericUnit(const Life &_life, bool _isFlying, int _attackPoints)
        : _life(_life), _isFlying(_isFlying), _attackPoints(_attackPoints), next(nullptr) {}

bool GenericUnit::isFlying() const {
    return _isFlying;
}


void GenericUnit::attack(IUnit *unit) {
    if (canAttack(unit)) {
        unit->getLife().getDamage(this->_attackPoints);
    }
}

Life& GenericUnit::getLife() {
    return _life;
}

bool GenericUnit::dead() const {
    return !_life.isAlife();
}

bool GenericUnit::canAttack(IUnit *unit) const {
    return false;
}

//IUnit *GenericUnit::set_next(IUnit *next) {
//    delete this->next;
//    this->next = next;
//    return this;
//}

std::ostream &operator<<(std::ostream &out, IUnit *unit) {
    out << unit->getLife();
    return out;
}

GenericUnit::~GenericUnit() {
    if (next != nullptr && next->dead())
        delete next;
}

//IUnit *GenericUnit::fight(IUnit*& enemy) {
//    if (enemy == nullptr)
//        return this;
//    while (!enemy->dead() && !this->dead()) {
//        this->attack(enemy);
//        enemy->attack(this);
//    }
//    if (enemy->dead()) {
//        enemy = enemy->get_next();
//    }
//    if (this->dead()) {
//        if (next == nullptr)
//            return nullptr;
//        return next->fight(enemy);
//    }
//    return fight(enemy);
//}

//IUnit *GenericUnit::get_next() const {
//    return next;
//}
