//
// Created by iesek on 19.03.2018.
//

#include <Player.h>
#include "Fractions.h"

Russian::Russian(std::shared_ptr<Reader> reader) : reader(
        std::move(reader)) {}

Warrior *Russian::create_warrior() const {
    reader->readRussianWarrior();
    return new Warrior(Life(reader->getMaxLives()), reader->getAttack());
}

Archer *Russian::create_archer() const {
    reader->readRussianArcher();
    return new Archer(Life(reader->getMaxLives()), reader->getAttack());
}

Flyer *Russian::create_flayer() const {
    reader->readRussianFlyer();
    return new Flyer(Life(reader->getMaxLives()), reader->getAttack());
}

Russian::Russian()
        : Russian(std::make_shared<ConstantsReader>()) {}

Russian::~Russian() = default;


American::American(std::shared_ptr<Reader> reader) : reader(
        std::move(reader)) {}

Warrior *American::create_warrior() const {
    reader->readAmericanWarrior();
    return new Warrior(Life(reader->getMaxLives()), reader->getAttack());
}

Archer *American::create_archer() const {
    reader->readAmericanArcher();
    return new Archer(Life(reader->getMaxLives()), reader->getAttack());
}

Flyer *American::create_flayer() const {
    reader->readAmericanFlyer();
    return new Flyer(Life(reader->getMaxLives()), reader->getAttack());
}

American::American()
        : American(std::make_shared<ConstantsReader>()) {}

American::~American() = default;


