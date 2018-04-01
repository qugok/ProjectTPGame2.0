//
// Created by iesek on 19.03.2018.
//


#include "Player.h"

Player::Player(Fraction *fraction){
    Player::fraction = fraction;
}

void Player::addWarior() {
    Player::_units.push_back(fraction->create_warrior());
}

void Player::addArcher()
{
    Player::_units.push_back(fraction->create_archer());
}
void Player::addFlyer()
{
    Player::_units.push_back(fraction->create_flayer());
}

void Player::step() {
    for (int i = 0; i < _units.size();) {
        IUnit *unit = _units[i];
        unit->step();
        if (unit->dead()) {
            unit->getPosition()->clear();
            delete unit;
            _units.erase(_units.begin() + i);
        } else
            i++;
    }
}

bool Player::dead() const {
    return _units.empty();
}

const std::vector<IUnit *> &Player::getUnits() const {
    return _units;
}

Fraction *Player::getFraction() {
    return fraction;
}

Player::~Player() {
    for (IUnit *i : _units) {
        delete i;
    }
    delete fraction;
}

