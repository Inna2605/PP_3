#pragma once
#include "Continent.h"

//���������� ������� - �������� �������
class NorthAmerica :
    public Continent
{
public:
    Herbivore* NotPredator()override;//���������� (���������� �������)
    Carnivore* Predator()override;//���������� (���������� �������)
};

