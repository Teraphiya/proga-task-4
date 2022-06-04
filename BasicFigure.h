#pragma once
#include "BaseObject.h"
#include "DialogInitiable.h"
#include "Figure.h"
#include "PhysObject.h"
#include "Printable.h"

class MyFigure : public Printable, public DialogInitiable, public Figure, public PhysObject, public BaseObject 
{};