//
// Created by iesek on 13.03.2018.
//

#include <vector>
#include "CPosition.h"

using std::vector;

Field::Field(int height, int width) {
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= width; ++j) {
            list.push_back(new CPosition(i,j));
        }
    }
    defaultAmerican = new CPosition(0, 0);
    defaultRussian = new CPosition(height + 1, width + 1);
    list.push_back(defaultAmerican);
    list.push_back(defaultRussian);
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

Field::Field(const std::vector<CPosition *> &positions) {
    list = positions;
    defaultRussian = nullptr;
    defaultAmerican = nullptr;
}

std::ostream &operator<<(std::ostream &out, const Field &field) {
    out << field.list.size() << "\n";
    for (CPosition *position : field.list) {
        out << *position << "\t";
    }
    return out;
}



