#include <Armies.h>

bool Army::canMove(Cell cell) const {
    return this->currentCell.get()->getDistanceTo(cell) < this->getStepDistance();
}

void Army::attack(CArmy *army) {
    // TODO запуск боя с двумя армиями
}

void Army::move(const std::shared_ptr<Cell> &cell) {
    this->currentCell = cell;
    for (const auto &squad : this->children) {
        squad.get()->move(cell);
    }
}

void Army::unionWith(CArmy *army) {
    for (const auto &child : army->getChildren())
        this->children.insert(child);
}

void Army::add(std::shared_ptr<CArmy> army) {
    if (!this->currentCell)
        this->currentCell = army.get()->getCurrentCell();
    this->children.insert(army);
}

std::set<std::shared_ptr<CArmy>> Army::getChildren() const {
    return this->children;
}

int Army::getStepDistance() const {
    if (this->children.empty())
        return 0;
    int stepDistance = this->children.begin()->get()->getStepDistance();
    for (const auto &child : children) {
        stepDistance = std::min(stepDistance, child.get()->getStepDistance());
    }
    return stepDistance;
}

std::shared_ptr<Cell> Army::getCurrentCell() {
    return this->currentCell;
}


bool Squad::canMove(Cell cell) const {
    return false;
}

void Squad::attack(CArmy *army) {}

void Squad::move(const std::shared_ptr<Cell> &cell) {
    this->currentCell = cell;
    for (const auto &squad : this->children) {
        squad.get()->move(cell);
    }
}

void Squad::unionWith(CArmy *army) {
    for (const auto &child : army->getChildren())
        this->children.insert(child);

}

void Squad::add(std::shared_ptr<CArmy> army) {
    if (!this->currentCell)
        this->currentCell = army.get()->getCurrentCell();
    this->children.insert(army);
}

std::set<std::shared_ptr<CArmy>> Squad::getChildren() const {
    return this->children;
}

int Squad::getStepDistance() const {
    if (this->children.empty())
        return 0;
    int stepDistance = (*(this->children.begin())).get()->getStepDistance();
    for (const auto &child : children) {
        stepDistance = std::min(stepDistance, child.get()->getStepDistance());
    }
    return stepDistance;
}

std::shared_ptr<Cell> Squad::getCurrentCell() {
    return this->currentCell;
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

std::shared_ptr<Cell> Soldier::getCurrentCell() {
    return this->currentCell;
}



