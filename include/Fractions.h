//
// Created by iesek on 19.03.2018.
//

#pragma once


class Russian : public Fraction {
private:
    Position* defaultPosition;
public:
    explicit Russian(Position *position);
    Warrior *create_warior();

    Archer *create_archer();

    Flyer *create_flayer();
};

class American : public Fraction {
private:
    Position* defaultPosition;
public:
    explicit American(Position* position);
    Warrior *create_warior();

    Archer *create_archer();

    Flyer *create_flayer();
};

