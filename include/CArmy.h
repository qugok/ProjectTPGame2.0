#pragma once

#include <Cell.h>
#include <memory>
#include <set>

class CArmy {
public:

    virtual bool canMove(Cell cell) const = 0;

    virtual void move(const std::shared_ptr<Cell> &cell) = 0;

    virtual void add(std::shared_ptr<CArmy> army) = 0;

    virtual void attack(CArmy *army) = 0;

    virtual void unionWith(CArmy *army) = 0;

    virtual int getStepDistance() const = 0;

    virtual std::set<std::shared_ptr<CArmy>> getChildren() const = 0;

    virtual ~CArmy() = 0;
};