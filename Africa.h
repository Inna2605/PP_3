#pragma once
#include "Continent.h"

//���������� ������� - ������
class Africa :
    public Continent
{
public:
    Herbivore* NotPredator()override;//���������� (���������� �������)
    Carnivore* Predator()override;//���������� (���������� �������)
};

