//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Fraction.h"
#include "Units.h"

class CPosition;

class Russian : public Fraction {
private:
    CPosition* defaultPosition;
    Player *_player;
public:
    Russian(CPosition *position, Player *player);

    Warrior *create_warrior() override;

    Archer *create_archer() override;

    Flyer *create_flayer() override;

    CPosition *getDefaultPosition() override;

    ~Russian() override;
};

class American : public Fraction {
private:
    CPosition* defaultPosition;
    Player *_player;
public:
    American(CPosition *position, Player *player);

    Warrior *create_warrior() override;

    Archer *create_archer() override;

    Flyer *create_flayer() override;

    CPosition *getDefaultPosition() override;

    ~American() override;
};

