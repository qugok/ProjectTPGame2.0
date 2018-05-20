#pragma once

#include <memory>
#include "IUnit.h"
#include "Cell.h"
#include "IObserver.h"

class CArmy {
public:

    virtual void move(const Cell &cell) = 0;

    virtual const Cell &getCurrentCell() const = 0;

    virtual void add(IUnit *unit) = 0;

    virtual void fight(const std::shared_ptr<CArmy> &army) = 0;

    virtual void addObserver(IObserver *observer) = 0;

    virtual ~CArmy() = 0;

    virtual int getId() const = 0;

    virtual void isEmpty() = 0;

    virtual std::vector<std::shared_ptr<IUnit>> &get_unit() = 0;
};

inline CArmy::~CArmy() = default;