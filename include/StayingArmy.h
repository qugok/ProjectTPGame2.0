
#pragma once

#include "CArmy.h"
#include "Armies.h"

class StayingArmy : public Army {
public:
    StayingArmy(const std::shared_ptr<CArmy> &m_army);

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    void add(std::shared_ptr<CArmy> army) override;

    void unionWith(CArmy *army) override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    void attack(CArmy *army) override;

private:
    std::shared_ptr<CArmy> m_army;
};