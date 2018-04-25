//
// Created by iesek on 19.03.2018.
//

#pragma once

#include <Reader/Reader.h>
#include <memory>
#include <Reader/ConstantsReader.h>
#include "Fraction.h"
#include "Units.h"

class CPosition;

class Russian : public Fraction {
private:
    CPosition* defaultPosition;
    Player *_player;
    std::shared_ptr<Reader> reader;
public:
    Russian(CPosition *position, Player *player, std::shared_ptr<Reader> reader = std::make_shared<ConstantsReader>());

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
    std::shared_ptr<Reader> reader;
public:
    American(CPosition *position, Player *player, std::shared_ptr<Reader> reader = std::make_shared<ConstantsReader>());

    Warrior *create_warrior() override;

    Archer *create_archer() override;

    Flyer *create_flayer() override;

    CPosition *getDefaultPosition() override;

    ~American() override;
};

