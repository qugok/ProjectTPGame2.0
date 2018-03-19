//
// Created by iesek on 19.03.2018.
//

#pragma once

class Life {
private:
    int currentLife;
    int maxLife;
public:
    Life (int maxLife);
    bool isAlife();
    void getDamage (int damage);
};

//#endif //PROJECTTPGAME_LIFE_H
