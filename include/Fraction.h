//
// Created by iesek on 19.03.2018.
//

#pragma once

class Fraction {
public:
    virtual Archer* create_archer() = 0;
    virtual Flyer* create_flayer() = 0;
    virtual Warrior* create_warior() = 0;
    virtual ~Fraction(){}
};