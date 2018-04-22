//
// Created by iesek on 19.03.2018.
//

// TODO переписать плеера с учетом армий (не к 2 дедлайну)


#pragma once

#include "IUnit.h"
#include "Fraction.h"
#include <vector>

class Player {
private:
    std::vector<IUnit*> _units;
    Fraction* fraction;
public:
    Fraction *getFraction();

    explicit Player(Fraction *fraction);
    void addWarior();
    void addArcher();
    void addFlyer();
    void step();

    const std::vector<IUnit *> &getUnits() const;

    bool dead() const;

    virtual ~Player();
};
