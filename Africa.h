#pragma once
#include "Continent.h"

//Конкретная фабрика - Африка
class Africa :
    public Continent
{
public:
    Herbivore* NotPredator()override;//травоядное (конкретный продукт)
    Carnivore* Predator()override;//плотоядное (конкретный продукт)
};

