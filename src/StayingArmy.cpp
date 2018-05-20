#include <StayingArmy.h>

StayingArmy::StayingArmy(const std::shared_ptr<CArmy> &m_army) : m_army(m_army) {}

void StayingArmy::move(const Cell &cell) {}

void StayingArmy::add(IUnit *unit) {
    m_army->add(unit);
}

const Cell &StayingArmy::getCurrentCell() const {
    return this->m_army->getCurrentCell();
}

void StayingArmy::fight(const std::shared_ptr<CArmy> &army) {
    this->m_army->fight(army);
}

StayingArmy::~StayingArmy() = default;

int StayingArmy::getId() const {
    return m_army->getId();
}

std::vector<std::shared_ptr<IUnit>> &StayingArmy::get_unit() {
    return m_army->get_unit();
}

void StayingArmy::addObserver(IObserver *observer) {
    m_army->addObserver(observer);
}

void StayingArmy::isEmpty() {
    m_army->isEmpty();
}

