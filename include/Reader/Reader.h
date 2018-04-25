#pragma once

class Reader {
public:
    Reader();

    virtual void readRussianWarrior() = 0;

    virtual void readRussianFlyer() = 0;

    virtual void readRussianArcher() = 0;

    virtual void readAmericanWarrior() = 0;

    virtual void readAmericanFlyer() = 0;

    virtual void readAmericanArcher() = 0;

    virtual void readDefaultWarrior() = 0;

    virtual void readDefaultFlyer() = 0;

    virtual void readDefaultArcher() = 0;

    virtual int getAttack() const;

    virtual int getMoveDistance() const;

    virtual int getAttackDistance() const;

    virtual int getCounterattackDamage() const;

    virtual int getDefence() const;

    virtual int getMaxLives() const;

protected:
    int Attack;
    int MoveDistance;
    int AttackDistance;
    int CounterattackDamage;
    int Defence;
    int MaxLives;
};