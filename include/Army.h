#pragma once

#include <set>
#include <memory>
#include <vector>
#include "IUnit.h"
#include "Cell.h"
#include "CArmy.h"

class Army : public CArmy {
public:
    Army(IUnit *unit, const Cell &currentCell, int id = -1);

    void move(const Cell &cell) override;

    const Cell &getCurrentCell() const;

    void isEmpty() override;

    void addObserver(IObserver *observer) override;

    int getId() const override;

    void fight(const std::shared_ptr<CArmy> &army) override;

    ~Army() override;

    std::vector<std::shared_ptr<IUnit>> &get_unit() override;

    void add(IUnit *unit) override;

private:
    std::vector<std::shared_ptr<IUnit> > unit;
    int id;
    Cell currentCell;
    std::vector<IObserver *> observers;
};
