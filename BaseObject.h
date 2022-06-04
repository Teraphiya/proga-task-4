#pragma once
#include <iostream>

class BaseObject {
public:
    // Имя класса (типа данных).
    virtual std::string classname() = 0;
    // Размер занимаемой памяти.
    virtual unsigned int size() = 0;
};
