#pragma once
#include"Herbivore.h"

//����������� ������� - ����������
class Carnivore abstract
{
protected:
	float Power;
public:
	Carnivore();
	Carnivore(float g);
	virtual float Eat(Herbivore* animal) abstract;
};
