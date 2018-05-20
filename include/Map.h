#pragma once

#include <set>
#include "Cell.h"
/**
 * @brief карта по которой передвигаются армии
 */
class Map {
public:

    bool exists(const Cell &c) const;

    Map(int height, int width);

private:
    std::set<Cell> m;
};