//
// Created by iesek on 19.03.2018.
//
#include "Life.h"


Life::Life (int maxLife) : maxLife(maxLife), currentLife(maxLife){}

bool Life::isAlife() const {
    return currentLife > 0;
}

void Life::getDamage (int damage)
{
    currentLife -= abs(damage);
}

std::ostream &operator<<(std::ostream &out, const Life &life) {
    out << life.currentLife << "/" << life.maxLife;
    return out;
}

//std::ostream &Life::operator<<(std::ostream &out) {
//    out << currentLife << "/" << maxLife;
//    return out;
//}

