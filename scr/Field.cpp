//
// Created by iesek on 13.03.2018.
//

#include <vector>
#include "Position.h"
#include "Field.h"

using std::vector;

Field::Field(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            list.push_back(new Position(i,j));
        }
    }
    defaultAmerican = *list.begin();
    defaultRussian = *list.rend();
}

Position *Field::getDefaultRussian() {
    return defaultRussian;
}

Position *Field::getDefaultAmerican() {
    return defaultAmerican;
}

vector<Position*> &Field::getList() {
    return list;
}


