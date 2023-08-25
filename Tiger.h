#pragma once
#include "Carnivore.h"
class Tiger :
    public Carnivore
{
public:
    Tiger();
    float Eat(Herbivore* animal)override;
};

