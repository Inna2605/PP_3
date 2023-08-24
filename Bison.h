#pragma once
#include "Herbivore.h"
class Bison :
    public Herbivore
{
public:
    Bison();
    float EatGrass()override;
    float getWeight()override;
    bool getLife()override;
};

