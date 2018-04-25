//
// Created by iesek on 22.04.2018.
//

#include <Cell.h>
#include <cmath>

int Cell::getDistanceTo(Cell cell) {
    return abs(this->x - cell.x) + abs(this->y - cell.y);
}

Cell::Cell(int x, int y) : x(x), y(y) {}
