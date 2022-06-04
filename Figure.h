#pragma once
#include "BaseObject.h"

class Figure {
public:
    // Площадь.
    virtual double square() = 0;
    // Периметр.
    virtual double perimeter() = 0;
};
