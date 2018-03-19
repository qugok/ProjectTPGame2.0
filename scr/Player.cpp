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
    for (IUnit *unit : _units) {
        unit->step();
    }
}

