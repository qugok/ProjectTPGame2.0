#include <Army.h>

void Army::add(IUnit *unit) {
    this->unit.push_back(std::shared_ptr<IUnit>(unit));
}

void Army::move(const Cell &cell) {
    currentCell = cell;
}

Army::Army(IUnit *unit, const Cell &currentCell, int id) : currentCell(currentCell), id(id) { add(unit); }

void Army::fight(const std::shared_ptr<CArmy> &army) {
//    IUnit* temp = army->get_unit();
//    IUnit* new_unit = unit->fight(army->get_unit());
//    delete temp;
//    unit = std::shared_ptr<IUnit> (new_unit);
//    if (army->get_unit() == nullptr)
//        army->isEmpty();
//    if (this->unit == nullptr)
//        this->isEmpty();
    int i = 0, j = 0;
    for (; i < unit.size() && j < army->get_unit().size();) {
        unit[i]->attack(army->get_unit()[j].get());
        army->get_unit()[j]->attack(unit[i].get());
        if (unit[i]->dead())
            i++;
        if (army->get_unit()[j]->dead())
            j++;
    }
    unit.erase(unit.begin(), unit.begin() + i);
    army->get_unit().erase(army->get_unit().begin(), army->get_unit().begin() + j);
    if (army->get_unit().empty())
        army->isEmpty();
    if (unit.empty())
        this->isEmpty();
}

Army::~Army() {}

std::vector<std::shared_ptr<IUnit>> &Army::get_unit() {
    return unit;
}

int Army::getId() const {
    return id;
}

void Army::addObserver(IObserver *observer) {
    observers.push_back(observer);
}

void Army::isEmpty() {
    for (IObserver *observer : observers)
        observer->isEmpty(id);
}

const Cell &Army::getCurrentCell() const {
    return currentCell;
}
