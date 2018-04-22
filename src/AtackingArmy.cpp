

#include <Armies.h>
#include <AtackingArmy.h>

AtackingArmy::AtackingArmy(const std::shared_ptr<Army> &m_army) : m_army(m_army) {}

bool AtackingArmy::canMove(Cell cell) const {
    // locked
    return false;
}

void AtackingArmy::attack(CArmy *army) {
    // locked
}

void AtackingArmy::move(const std::shared_ptr<Cell> &cell) {
    // locked
}

void AtackingArmy::add(std::shared_ptr<CArmy> army) {
    // locked
}

void AtackingArmy::unionWith(CArmy *army) {
    // locked
}
