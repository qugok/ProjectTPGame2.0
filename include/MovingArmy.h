#pragma once

#include "Armies.h"

class MovingArmy : public Army {
public:
    explicit MovingArmy(const std::shared_ptr<Army> &m_army);

    void add(std::shared_ptr<CArmy> army) override;

    void unionWith(CArmy *army) override;

private:
    std::shared_ptr<Army> m_army;
};