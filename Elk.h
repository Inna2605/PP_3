#pragma once
#include "Herbivore.h"
class Elk :
    public Herbivore
{
public:
    Elk();
    float EatGrass()override;
    float getWeight()override;
    bool getLife()override;
};

