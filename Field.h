//
// Created by iesek on 13.03.2018.
//

#include <vector>
#include "Position.h"

#pragma once
using std::vector;

class Field {
private:
    vector<Position*> list;
    Position* defaultRussian;
    Position* defaultAmerican;
public:

    Field(int height, int width) {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                list.push_back(new Position(i,j));
            }
        }
        defaultAmerican = *list.begin();
        defaultRussian = *list.rend();
    }

    Position *getDefaultRussian() {
        return defaultRussian;
    }

    Position *getDefaultAmerican() {
        return defaultAmerican;
    }

    vector<Position*> &getList() {
        return list;
    }
};


//#endif //PROJECTTPGAME_FIELD_H
