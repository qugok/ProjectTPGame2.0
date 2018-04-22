#include <MovingArmy.h>

MovingArmy::MovingArmy(const std::shared_ptr<Army> &m_army) : m_army(m_army) {}

void MovingArmy::add(std::shared_ptr<CArmy> army) {
    // locked, because we are moving
}

void MovingArmy::unionWith(CArmy *army) {
    // locked, because we are moving
}
