#pragma once
#include "Herbivore.h"

class Wildebeest :
    public Herbivore
{
public:
    Wildebeest();
    float EatGrass()override;
    float getWeight()override;
    bool getLife()override;
};

