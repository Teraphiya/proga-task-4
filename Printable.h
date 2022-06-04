#pragma once
#include "BaseObject.h"

class Printable {
public:
    // Отобразить на экране
    // (выводить в текстовом виде параметры фигуры).
    virtual void draw() = 0;
};
