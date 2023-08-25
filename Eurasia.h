#pragma once
#include"Continent.h"
class Eurasia :
    public Continent
{
public:
    Herbivore* NotPredator()override;//травоядное (конкретный продукт)
    Carnivore* Predator()override;//плотоядное (конкретный продукт)
};

