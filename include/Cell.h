//
// Created by iesek on 22.04.2018.
//

#pragma once

/**
 * @brief позиция армии на карте
 */
class Cell {
public:
    Cell(int x, int y);

    int getDistanceTo(Cell cell);

    bool operator<(const Cell &rhs) const;

    bool operator>(const Cell &rhs) const;

    bool operator<=(const Cell &rhs) const;

    bool operator>=(const Cell &rhs) const;

    bool operator==(const Cell &rhs) const;

    bool operator!=(const Cell &rhs) const;

private:
    int x;
    int y;
};
