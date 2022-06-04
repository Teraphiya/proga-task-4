#pragma once
#include "Vector2D.h"
#include "BaseObject.h"

class PhysObject {
public:
    // Масса, кг.
    virtual double mass() const = 0;
    // Координаты центра масс, м.
    virtual Vector2D* position() = 0;
    // Сравнение по массе.
    virtual bool operator== (const PhysObject& ob) const = 0;
    // Сравнение по массе.
    virtual bool operator< (const PhysObject& ob) const = 0;
};
