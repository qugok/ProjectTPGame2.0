#pragma once

#include <set>
#include <memory>
#include "CArmy.h"
#include "IUnit.h"

class Army : public CArmy {
public:

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    void add(std::shared_ptr<CArmy> army) override;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    void attack(CArmy *army) override;

private:
    std::set<std::shared_ptr<CArmy>> children;
    std::shared_ptr<Cell> currentCell;

};


class Squad : public CArmy {
public:

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    void add(std::shared_ptr<CArmy> army) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    void attack(CArmy *army) override;


private:
    std::set<std::shared_ptr<CArmy>> children;
    std::shared_ptr<Cell> currentCell;
};

class Soldier : public CArmy {
public:
    Soldier(IUnit *unit, const std::shared_ptr<Cell> &currentCell);

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    void add(std::shared_ptr<CArmy> army) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    void attack(CArmy *army) override;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;


private:
    IUnit *unit;
    std::shared_ptr<Cell> currentCell;
};