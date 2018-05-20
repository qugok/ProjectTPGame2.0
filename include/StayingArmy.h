
#pragma once

#include "Army.h"

class StayingArmy : public CArmy {
public:

    explicit StayingArmy(const std::shared_ptr<CArmy> &m_army);

    void addObserver(IObserver *observer) override;

    void fight(const std::shared_ptr<CArmy> &army) override;

    ~StayingArmy() override;

    void isEmpty() override;

    int getId() const override;

    std::vector<std::shared_ptr<IUnit>> &get_unit() override;

    const Cell &getCurrentCell() const override;

    void move(const Cell &cell) override;

    void add(IUnit *unit) override;

private:
    std::shared_ptr<CArmy> m_army;
};