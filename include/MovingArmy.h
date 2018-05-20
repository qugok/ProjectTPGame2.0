#pragma once

#include "Army.h"

class MovingArmy : public CArmy {
public:
    explicit MovingArmy(const std::shared_ptr<CArmy> &m_army);

    void move(const Cell &cell) override;

    const Cell &getCurrentCell() const override;

    void fight(const std::shared_ptr<CArmy> &army) override;

    ~MovingArmy() override;

    void isEmpty() override;

    int getId() const override;

    std::vector<std::shared_ptr<IUnit>> &get_unit() override;

    void add(IUnit *unit) override;

    void addObserver(IObserver *observer) override;

private:
    std::shared_ptr<CArmy> m_army;
};