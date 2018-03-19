//
// Created by iesek on 13.03.2018.
//

#pragma once



class Field {
private:
    std::vector<Position*> list;
    Position* defaultRussian;
    Position* defaultAmerican;
public:

    Field(int height, int width);

    Position *getDefaultRussian();

    Position *getDefaultAmerican();

    std::vector<Position*> &getList();
};


//#endif //PROJECTTPGAME_FIELD_H
