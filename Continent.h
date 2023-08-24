#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

//����������� ������� - ���������
class Continent abstract
{
	virtual Herbivore* NotPredator()abstract;//���������� (����������� �������)
	virtual Carnivore* Predator()abstract;//���������� (����������� �������)
};

