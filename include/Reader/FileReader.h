#pragma once

#include <fstream>
#include "Reader.h"

class FileReader : public Reader {
private:
    void readFile(std::string fileName);

public:
    void readRussianWarrior() override;

    void readRussianFlyer() override;

    void readRussianArcher() override;

    void readAmericanWarrior() override;

    void readAmericanFlyer() override;

    void readAmericanArcher() override;

    void readDefauiltWarrior() override;

    void readDefauiltFlyer() override;

    void readDefauiltArcher() override;
};