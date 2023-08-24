#pragma once
#include "Continent.h"

//Конкретная фабрика - Северная Америка
class NorthAmerica :
    public Continent
{
public:
    Herbivore* NotPredator()override;//травоядное (конкретный продукт)
    Carnivore* Predator()override;//плотоядное (конкретный продукт)
};

