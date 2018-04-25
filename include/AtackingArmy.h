#pragma once

#include "CArmy.h"
#include "Armies.h"

class AtackingArmy : public Army {
public:
    explicit AtackingArmy(const std::shared_ptr<Army> &m_army);

    bool canMove(Cell cell) const override;

    void attack(CArmy *army) override;

    void move(const std::shared_ptr<Cell> &cell) override;

    void add(std::shared_ptr<CArmy> army) override;

    std::shared_ptr<Cell> getCurrentCell() override;

    int getStepDistance() const override;

    std::set<std::shared_ptr<CArmy>> getChildren() const override;

    void unionWith(CArmy *army) override;

private:
    std::shared_ptr<Army> m_army;
};