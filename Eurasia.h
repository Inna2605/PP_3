#pragma once
#include"Continent.h"
class Eurasia :
    public Continent
{
public:
    Herbivore* NotPredator()override;//���������� (���������� �������)
    Carnivore* Predator()override;//���������� (���������� �������)
};

