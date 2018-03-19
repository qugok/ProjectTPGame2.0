//
// Created by iesek on 13.03.2018.
//

#pragma once

class GenericUnit : public IUnit {
private:
    Position* _position;
    Life _life;
    bool _isMoved;
    bool _isHited;
    bool _isFlying;
    int _attackPoints;
    int _defencePoints;
    int _moveDistance;
    int _attackDiatance;
    int _counterattackDamage;
    Avatar * _avatar;
public:

    GenericUnit(Position *_position, const Life &_life, bool _isMoved, bool _isHited, bool _isFlying, int _attackPoints,
                int _defencePoints, int _moveDistance, int _attackDiatance, int _counterattackDamage);

    bool canAttack(IUnit *unit);

    bool isFlying();

    void moveTo(Position *position);

    std::vector<Position *> canMoveTo(Field *field);

    void attack(IUnit *unit);

    void defenceFrom(IUnit *unit);

    int getAttack();

    int getDefence();

    int getMoveDistance();

    int getAttackDistance();

    int getCounterattackDamage();

    Life& getLife();

    Position *getPosition();

    void step();

    bool dead();

    Avatar *getAvatar();

    void setAvatar(Avatar *avatar);
};

//#endif //PROJECTTPGAME_UNIT_H
