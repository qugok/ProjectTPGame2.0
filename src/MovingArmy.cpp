#include <MovingArmy.h>

MovingArmy::MovingArmy(const std::shared_ptr<CArmy> &m_army) : m_army(m_army) {}

void MovingArmy::add(std::shared_ptr<CArmy> army) {
    // locked, because we are moving
}

void MovingArmy::unionWith(CArmy *army) {
    // locked, because we are moving
}

bool MovingArmy::canMove(Cell cell) const {
    return this->m_army.get()->canMove(cell);
}

void MovingArmy::move(const std::shared_ptr<Cell> &cell) {
    this->m_army.get()->move(cell);
}

std::shared_ptr<Cell> MovingArmy::getCurrentCell() {
    return this->m_army.get()->getCurrentCell();
}

int MovingArmy::getStepDistance() const {
    return this->m_army.get()->getStepDistance();
}

std::set<std::shared_ptr<CArmy>> MovingArmy::getChildren() const {
    return this->m_army.get()->getChildren();
}

void MovingArmy::attack(CArmy *army) {
    this->m_army.get()->attack(army);
}
