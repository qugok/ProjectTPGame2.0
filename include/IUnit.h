//
// Created by iesek on 13.03.2018.
//

#pragma once

#include "Life.h"
#include <iostream>

class IUnit {
public:
    /*
     * атакуем unit
     * он получает соответствующий урон
     */
    virtual void attack(IUnit *unit) = 0;

    /*
     * проверяем, можем ли мы атаковать unit
     */
    virtual bool canAttack(IUnit *unit) const = 0;

    /*
     * получаем текущие жизни
     */
    virtual Life &getLife() = 0;

    /*
     * проверяем, умер ли юнит
     */
    virtual bool dead() const = 0;

    /*
     * является ли юнит летающим
     */
    virtual bool isFlying() const = 0;

//    /**
//     * @brief setting net of chain of responsibility
//     * @param next
//     * @return current
//     */
//    virtual IUnit *set_next(IUnit *next) = 0;

//    virtual IUnit* fight(IUnit*& enemy) = 0;

    virtual ~IUnit() = default;

//    virtual IUnit* get_next() const = 0;
};

std::ostream &operator<<(std::ostream &out, IUnit *unit);

//#endif //PROJECTTPGAME_UNIT_H
