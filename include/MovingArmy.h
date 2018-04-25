#pragma once

#include "Armies.h"

class MovingArmy : public Army {
public:
    explicit MovingArmy(const std::shared_ptr<CArmy> &m_army);

    void add(std::shared_ptr<CArmy> army) override;

    void unionWith(CArmy *army) override;

    bool canMove(Cell cell) const override;

    void move(const std::shared_ptr<Cell> &cell) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    void attack(CArmy *army) override;

private:
    std::shared_ptr<CArmy> m_army;
};