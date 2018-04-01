//
// Created by iesek on 19.03.2018.
//

#pragma once

#include <iostream>

class Life {
private:
    int currentLife;
    int maxLife;
public:
    Life (int maxLife);

    bool isAlife() const;
    void getDamage (int damage);

    friend std::ostream &operator<<(std::ostream &out, const Life &life);
};

//#endif //PROJECTTPGAME_LIFE_H
