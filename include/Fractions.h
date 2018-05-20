//
// Created by iesek on 19.03.2018.
//

#pragma once

#include "Reader/Reader.h"
#include <memory>
#include "Reader/ConstantsReader.h"
#include "Fraction.h"
#include "Units.h"

class Russian : public Fraction {
private:
    std::shared_ptr<Reader> reader;
public:
    Russian(std::shared_ptr<Reader> reader);

    Russian();

    Warrior *create_warrior() const override;

    Archer *create_archer() const override;

    Flyer *create_flayer() const override;

    ~Russian() override;
};

class American : public Fraction {
private:
    std::shared_ptr<Reader> reader;
public:
    American(std::shared_ptr<Reader> reader);

    American();

    Warrior *create_warrior() const override;

    Archer *create_archer() const override;

    Flyer *create_flayer() const override;

    ~American() override;
};

