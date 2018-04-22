//
// Created by iesek on 22.04.2018.
//

#pragma once

/**
 * @brief позиция армии на карте
 */
class Cell {
public:
    int getDistanceTo(Cell cell);

private:
    int x;
    int y;
};