//
// Created by iesek on 13.03.2018.
//

#pragma once

#include <vector>
#include "Position.h"
#include "Field.h"
#include "Avatar.h"
#include "Life.h"

class IUnit {
public:
    /*
     * перейти на определённую позицию
     */
    virtual void moveTo (Position* position) = 0;
    /*
     * находим множество позиций, куда мы можем пойти
     */
    virtual std::vector<Position*>  canMoveTo(Field* field) = 0;
    /*
     * атакуем unit
     * он получает соответствующий урон
     */
    virtual void attack(IUnit* unit) = 0;
    /*
     * проверяем, можем ли мы атаковать unit
     */
    virtual bool canAttack(IUnit* unit) = 0;
    /*
     * защищаемся от unit
     * опционально:
     * - отступаем
     * - наносим ответный урон
     */
    virtual void defenceFrom(IUnit *unit) = 0;
    /*
     * устанавливаем изображение юнита
     */
    virtual void setAvatar(Avatar* avatar) = 0;
    /*
     * получаем изображение юнита
     */
    virtual Avatar* getAvatar() = 0;
    /*
     * получаем значение атаки
     */
    virtual int getAttack() = 0;
    /*
     * получаем значение защиты
     */
    virtual int getDefence() = 0;
    /*
     * получаем значение дистанции движения
     */
    virtual int getMoveDistance() = 0;
    /*
     * получаем значение дистанции атаки
     */
    virtual int getAttackDistance() = 0;
    /*
     * получаем значение контратаки
     */
    virtual int getCounterattackDamage() = 0;
    /*
     * получаем текущие жизни
     */
    virtual Life& getLife() = 0;
    /*
     * получаем текущую позицию
     */
    virtual Position* getPosition() = 0;
    /*
     * проверяем, умер ли юнит
     */
    virtual bool dead()= 0;
    /*
     * является ли юнит летающим
     */
    virtual bool isFlying() = 0;
    /*
     * следующий ход
     */
    virtual void step() = 0;

    ~IUnit() = default;
};


//#endif //PROJECTTPGAME_UNIT_H
