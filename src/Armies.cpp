#include <Armies.h>

bool Army::canMove(Cell cell) const {
    return this->currentCell.get()->getDistanceTo(cell) < this->getStepDistance();
}

void Army::attack(CArmy *army) {
    // TODO запуск боя с двумя армиями
}

Army::~Army() {
    CArmyUnion::~CArmyUnion();
}

bool Squad::canMove(Cell cell) const {
    return false;
}

void Squad::attack(CArmy *army) {}

Squad::~Squad() {

}


bool Soldier::canMove(Cell cell) const {
    return false;
}

void Soldier::move(const std::shared_ptr<Cell> &cell) {
    this->currentCell = cell;
}

void Soldier::add(std::shared_ptr<CArmy> army) {}

void Soldier::attack(CArmy *army) {}

void Soldier::unionWith(CArmy *army) {}

int Soldier::getStepDistance() const {
    return unit->getMoveDistance();
}

std::set<std::shared_ptr<CArmy>> Soldier::getChildren() const {
    return {};
}

Soldier::Soldier(IUnit *unit, const std::shared_ptr<Cell> &currentCell) : unit(unit), currentCell(currentCell) {}

Soldier::~Soldier() {

}


