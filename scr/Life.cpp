//
// Created by iesek on 19.03.2018.
//
#include "Life.h"
#include <iostream>


Life::Life (int maxLife) : maxLife(maxLife), currentLife(maxLife){}

bool Life::isAlife() {
    return currentLife > 0;
}
void Life::getDamage (int damage)
{
    currentLife -= abs(damage);
}
