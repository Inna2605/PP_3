#pragma once
#include "Carnivore.h"
#include "Herbivore.h"
class Lion :
    public Carnivore
{
public:
    Lion();
    float Eat(Herbivore* animal)override;
};

