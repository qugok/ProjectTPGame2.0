//
// Created by iesek on 22.04.2018.
//

#include <Cell.h>
#include <cmath>

int Cell::getDistanceTo(Cell cell) {
    return abs(this->x - cell.x) + abs(this->y - cell.y);
}

Cell::Cell(int x, int y) : x(x), y(y) {}

bool Cell::operator<(const Cell &rhs) const {
    return x < rhs.x || rhs.x >= x && y < rhs.y;
}

bool Cell::operator>(const Cell &rhs) const {
    return rhs < *this;
}

bool Cell::operator<=(const Cell &rhs) const {
    return !(rhs < *this);
}

bool Cell::operator>=(const Cell &rhs) const {
    return !(*this < rhs);
}

bool Cell::operator==(const Cell &rhs) const {
    return x == rhs.x && y == rhs.y;
}

bool Cell::operator!=(const Cell &rhs) const {
    return !(rhs == *this);
}
