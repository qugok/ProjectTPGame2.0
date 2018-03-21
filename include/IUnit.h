//
// Created by iesek on 13.03.2018.
//

#pragma once

#include "Field.h"
#include "Avatar.h"
#include "Life.h"
#include <iostream>

class CPosition;

class Player;

class IUnit {
public:
    /*
     * перейти на определённую позицию
     */
    virtual void moveTo (CPosition* position) = 0;
    /*
     * находим множество позиций, куда мы можем пойти
     */
    virtual std::vector<CPosition*>  canMoveTo(Field* field) = 0;
    /*
     * атакуем unit
     * он получает соответствующий урон
     */
    virtual void attack(IUnit* unit) = 0;

    /*
     * ищем юнитов, которых можем атаковать
     */
    virtual std::vector<IUnit *> canAttack(Field *field) = 0;

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
     * узнаем чей это юнит
     */
    virtual Player *getPlayer() = 0;

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
    virtual CPosition* getPosition() = 0;
    /*
     * проверяем, умер ли юнит
     */
    virtual bool dead()= 0;
    /*
     * является ли юнит летающим
     */
    virtual bool isFlying() = 0;

    virtual bool isMoved() = 0;

    virtual bool isHited() = 0;
    /*
     * следующий ход
     */
    virtual void step() = 0;

    virtual ~IUnit() = default;

};

std::ostream &operator<<(std::ostream &out, IUnit *unit);

//#endif //PROJECTTPGAME_UNIT_H
