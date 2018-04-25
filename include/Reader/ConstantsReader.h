#pragma once

#include "Reader.h"

class ConstantsReader : public Reader {
public:
    void readRussianWarrior() override;

    void readRussianFlyer() override;

    void readRussianArcher() override;

    void readAmericanWarrior() override;

    void readAmericanFlyer() override;

    void readAmericanArcher() override;

    void readDefauiltWarrior() override;

    void readDefauiltFlyer() override;

    void readDefauiltArcher() override;
};