#pragma once
#include "BaseObject.h"

class DialogInitiable {
public:
    // Задать параметры объекта с помощью диалога с пользователем.
    virtual void initFromDialog() = 0;
};
