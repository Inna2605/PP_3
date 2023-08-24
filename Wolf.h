#pragma once
#include "Carnivore.h"
#include"Herbivore.h"
class Wolf :
    public Carnivore
{
public:
    Wolf();
    float Eat(Herbivore* animal)override;
};

