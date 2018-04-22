#include <Cell.h>
#include <bits/shared_ptr.h>
#include <memory>
#include <CArmy.h>
#include <set>
#include <CArmyUnion.h>

void CArmyUnion::move(const std::shared_ptr<Cell> &cell) {
    this->currentCell = cell;
    for (const auto &squad : this->children) {
        squad.get()->move(cell);
    }
}

void CArmyUnion::unionWith(CArmy *army) {
    this->children.insert(army->getChildren());
}

void CArmyUnion::add(std::shared_ptr<CArmy> army) {
    this->children.insert(army);
}

std::set<std::shared_ptr<CArmy>> CArmyUnion::getChildren() const {
    return this->children;
}

int CArmyUnion::getStepDistance() const {
    int stepDistance = (*(this->children.begin())).get()->getStepDistance();
    for (const auto &child : children) {
        stepDistance = std::min(stepDistance, child.get()->getStepDistance());
    }
}

CArmyUnion::~CArmyUnion() {
    CArmy::~CArmy();
};
