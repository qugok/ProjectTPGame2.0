//
// Created by iesek on 20.03.2018.
//

#pragma once

#include <iostream>
#include "IUnit.h"

std::ostream &operator<<(std::ostream &out, const std::vector<IUnit *, std::allocator<IUnit *> > &list);

