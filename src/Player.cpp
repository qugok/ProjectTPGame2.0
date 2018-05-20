//
// Created by ies

#include <Army.h>
#include "Player.h"
#include <MovingArmy.h>
#include <StayingArmy.h>

Player::~Player() {
    delete fraction;
}

void Player::isEmpty(int id) {
    armies[id].reset();
    this->armies.erase(id);
}

void Player::addArmy(IUnit *unit, const Cell &cell) {
    if (armies.empty()) {
        std::shared_ptr<CArmy> temp(new Army(unit, cell, 0));
        temp->addObserver(this);
        armies[temp->getId()] = temp;
    } else {
        std::shared_ptr<CArmy> temp(new Army(unit, cell, armies.rbegin()->first + 1));
        temp->addObserver(this);
        armies[temp->getId()] = temp;
    }
}

void Player::addUnit(IUnit *unit, int armyId) {
    if (armies.find(armyId) == armies.end())
        return;
    armies[armyId]->add(unit);
}

void Player::moveArmy(int armyId, const Cell &cell) {
    std::shared_ptr<CArmy> current(new MovingArmy(armies[armyId]));
    current->move(cell);
}

void Player::attackArmy(int armyId, const Player &opponent, int targetId) {
    std::shared_ptr<CArmy> current(new StayingArmy(armies[armyId]));
    if (opponent.armies.find(targetId) != opponent.armies.end())
        current->fight(opponent.armies.at(targetId));
}

std::vector<int> Player::getArmyNumbers() const {
    std::vector<int> answer;
    for (auto it : armies)
        answer.push_back(it.first);
    return answer;
}

Fraction *Player::getFraction() const {
    return this->fraction;
}

Player::Player(Fraction *fraction) : fraction(fraction) {}

