#include <MovingArmy.h>

void MovingArmy::move(const Cell &cell) {
    m_army->move(cell);
}

void MovingArmy::add(IUnit *unit) {}

MovingArmy::MovingArmy(const std::shared_ptr<CArmy> &m_army) {
    this->m_army = m_army;

}

const Cell &MovingArmy::getCurrentCell() const {
    return this->m_army->getCurrentCell();
}

void MovingArmy::fight(const std::shared_ptr<CArmy> &army) {
    m_army->fight(army);
}

MovingArmy::~MovingArmy() = default;

int MovingArmy::getId() const {
    return m_army->getId();
}

std::vector<std::shared_ptr<IUnit>> &MovingArmy::get_unit() {
    return m_army->get_unit();
}

void MovingArmy::addObserver(IObserver *observer) {
    m_army->addObserver(observer);
}

void MovingArmy::isEmpty() {
    m_army->isEmpty();
}
