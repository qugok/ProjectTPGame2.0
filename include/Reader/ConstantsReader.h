#pragma once

#include "Reader/Reader.h"

class ConstantsReader : public Reader {
public:

    ConstantsReader();

    virtual void readRussianWarrior() override;

    virtual void readRussianFlyer() override;

    virtual void readRussianArcher() override;

    virtual void readAmericanWarrior() override;

    virtual void readAmericanFlyer() override;

    virtual void readAmericanArcher() override;

    virtual void readDefaultWarrior() override;

    virtual void readDefaultFlyer() override;

    virtual void readDefaultArcher() override;
};