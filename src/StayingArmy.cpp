#include <StayingArmy.h>

bool StayingArmy::canMove(Cell cell) const {
    return this->m_army.get()->canMove(cell);
}

void StayingArmy::move(const std::shared_ptr<Cell> &cell) {
    this->m_army.get()->move(cell);
}

std::shared_ptr<Cell> StayingArmy::getCurrentCell() {
    return this->m_army.get()->getCurrentCell();
}

void StayingArmy::add(std::shared_ptr<CArmy> army) {
    this->m_army.get()->add(army);
}

void StayingArmy::unionWith(CArmy *army) {
    this->m_army.get()->unionWith(army);
}

int StayingArmy::getStepDistance() const {
    return this->m_army.get()->getStepDistance();
}

std::set<std::shared_ptr<CArmy>> StayingArmy::getChildren() const {
    return this->m_army.get()->getChildren();
}

void StayingArmy::attack(CArmy *army) {
    this->m_army.get()->attack(army);
}

StayingArmy::StayingArmy(const std::shared_ptr<CArmy> &m_army) : m_army(m_army) {}
