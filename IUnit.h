//
// Created by iesek on 13.03.2018.
//
#pragma once

#include <vector>
#include <set>
#include <cmath>
#include <memory>
#include "Field.h"

using std::vector;
using std::set;

class Avatar; // изображение на экране
class Life; // жизни

class IUnit {
public:
    /*
     * перейти на определённую позицию
     */
    virtual void moveTo (Position* position) = 0;
    /*
     * находим множество позиций, куда мы можем пойти
     */
    virtual vector<Position*>  canMoveTo(Field* field) = 0;
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


class Life {
private:
    int currentLife;
    int maxLife;
public:
    Life (int maxLife) : maxLife(maxLife), currentLife(maxLife){}

    bool isAlife() {
        return currentLife > 0;
    }
    void getDamage (int damage)
    {
        currentLife -= abs(damage);
    }
};

class Avatar {
    //TODO реализация Avatar
public:

    static Avatar* Warior = 0;
    static Avatar* Archer = 0;
    static Avatar* Flyer = 0;
};

template<class T>
class CSingleton {
private:
    static std::shared_ptr<T> m_instance;
public:
    CSingleton() = delete;
    ~CSingleton() = delete;
    CSingleton(const CSingleton&) = delete;
    CSingleton& operator=(const CSingleton&) = delete;
    static std::shared_ptr<T> instance() {
        if (!m_instance)
            m_instance = std::shared_ptr<T>(new T);
        return m_instance;
    }
};
#endif //PROJECTTPGAME_UNIT_H
