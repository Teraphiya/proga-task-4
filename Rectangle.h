#pragma once
#include "BasicFigure.h"
#include "Vector2D.h"
#include <iostream>

class Rectangle : public MyFigure {
private:
    double a, b, massValue;
public:
    std::string classname() override {
        return "Rectangle";
    }
    unsigned int size() override {
        return sizeof(*this);
    }
    void initFromDialog() override {
        std::cout << "Enter a value: ";
        std::cin >> a;
        std::cout << "Enter b value: ";
        std::cin >> b;
        std::cout << "Enter mass value: ";
        std::cin >> massValue;
    }
    double perimeter() override {
        return (a + a + b + b);
    }
    double square() override {
        return a * b;
    }
    double mass() const override {
        return massValue;
    }
    Vector2D* position() override {
        auto* vector = new Vector2D;
        vector->x = b;
        vector->y = a;
        return vector;
    }
    bool operator==(const PhysObject& ob) const override {
        return mass() == ob.mass();
    }
    bool operator<(const PhysObject& ob) const override {
        return mass() < ob.mass();
    }

    void draw() override {
        std::cout << "a value: " << a << std::endl << "b value: " << b << std::endl << "mass  value: " << massValue
            << std::endl;
        std::cout << "a value: " << a << "; b value: " << b << "; mass  value: " << massValue << std::endl;
    }
};