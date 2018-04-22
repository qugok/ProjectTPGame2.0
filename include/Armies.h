#pragma once

#include <set>
#include <memory>
#include "CArmy.h"
#include "IUnit.h"
#include <CArmyUnion.h>

class Army : public CArmyUnion {
public:

    bool canMove(Cell cell) const override;

    void attack(CArmy *army) override;

    ~Army() override;
};


class Squad : public CArmyUnion {
public:
    bool canMove(Cell cell) const override;

    void attack(CArmy *army) override;

    ~Squad() override;
};

class Soldier : public CArmy {
public:
    Soldier(IUnit *unit, const std::shared_ptr<Cell> &currentCell);

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    void add(std::shared_ptr<CArmy> army) override;

    void attack(CArmy *army) override;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    ~Soldier() override;

private:
    IUnit *unit;
    std::shared_ptr<Cell> currentCell;
};