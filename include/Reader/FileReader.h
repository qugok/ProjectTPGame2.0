#pragma once

#include <fstream>
#include <Reader/Reader.h>

class FileReader : public Reader {
private:
    void readFile(std::string fileName);

public:
    FileReader();

    void readRussianWarrior() override;

    void readRussianFlyer() override;

    void readRussianArcher() override;

    void readAmericanWarrior() override;

    void readAmericanFlyer() override;

    void readAmericanArcher() override;

    void readDefaultWarrior() override;

    void readDefaultFlyer() override;

    void readDefaultArcher() override;
};