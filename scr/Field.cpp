//
// Created by iesek on 13.03.2018.
//

#include <vector>
#include "CPosition.h"
#include "Field.h"

using std::vector;

Field::Field(int height, int width) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            list.push_back(new CPosition(i,j));
        }
    }
    defaultAmerican = *list.begin();
    defaultRussian = *list.rend();
}

CPosition *Field::getDefaultRussian() {
    return defaultRussian;
}

CPosition *Field::getDefaultAmerican() {
    return defaultAmerican;
}

vector<CPosition*> &Field::getList() {
    return list;
}


