//
// Created by iesek on 23.04.2018.
//

#pragma once

#include <CArmy.h>

class CArmyUnion : public CArmy {
public:
    bool canMove(Cell cell) const override = 0;

    void move(const std::shared_ptr<Cell> &cell) override;

    void add(std::shared_ptr<CArmy> army) override;

    void attack(CArmy *army) override = 0;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    ~CArmyUnion() override;

protected:
    std::set<std::shared_ptr<CArmy>> children;
    std::shared_ptr<Cell> currentCell;
};