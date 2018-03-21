//
// Created by iesek on 13.03.2018.
//

#pragma once

#include <vector>
#include <iostream>
class CPosition;

class Field {
private:
    std::vector<CPosition*> list;
    CPosition* defaultRussian;
    CPosition* defaultAmerican;
public:

    Field(int height, int width);

    Field(const std::vector<CPosition *> &positions);

    CPosition *getDefaultRussian();

    CPosition *getDefaultAmerican();

    std::vector<CPosition*> &getList();

    friend std::ostream &operator<<(std::ostream &out, const Field &field);
};


//#endif //PROJECTTPGAME_FIELD_H
