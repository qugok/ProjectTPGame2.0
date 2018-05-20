//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "IUnit.h"
#include "Fraction.h"
#include "CArmy.h"
#include "IObserver.h"
#include <vector>
#include <map>

class Player : public IObserver {
public:

    ~Player() override;

    void addArmy(IUnit *unit, const Cell &cell);

    void isEmpty(int id) override;

    void addUnit(IUnit *unit, int armyId);

    void moveArmy(int armyId, const Cell &cell);

    void attackArmy(int armyId, const Player &opponent, int targetId);

    std::vector<int> getArmyNumbers() const;

    Fraction *getFraction() const;

    Player(Fraction *fraction);

private:
    std::map<int, std::shared_ptr<CArmy>> armies;
    Fraction* fraction;
};
