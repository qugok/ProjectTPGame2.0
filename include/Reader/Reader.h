
#pragma once

class Reader {
public:
    virtual void readRussianWarrior() = 0;

    virtual void readRussianFlyer() = 0;

    virtual void readRussianArcher() = 0;

    virtual void readAmericanWarrior() = 0;

    virtual void readAmericanFlyer() = 0;

    virtual void readAmericanArcher() = 0;

    virtual void readDefauiltWarrior() = 0;

    virtual void readDefauiltFlyer() = 0;

    virtual void readDefauiltArcher() = 0;

    int getAttack() const;

    int getMoveDistance() const;

    int getAttackDistance() const;

    int getCounterattackDamage() const;

    int getDefence() const;

    int getMaxLives() const;

protected:
    int Attack = 0;
    int MoveDistance = 0;
    int AttackDistance = 0;
    int CounterattackDamage = 0;
    int Defence = 0;
    int MaxLives = 0;
};