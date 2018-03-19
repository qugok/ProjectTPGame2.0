//
// Created by iesek on 13.03.2018.
//

#pragma once

#include <vector>

class CPosition;

class Field {
private:
    std::vector<CPosition*> list;
    CPosition* defaultRussian;
    CPosition* defaultAmerican;
public:

    Field(int height, int width);

    CPosition *getDefaultRussian();

    CPosition *getDefaultAmerican();

    std::vector<CPosition*> &getList();
};


//#endif //PROJECTTPGAME_FIELD_H
