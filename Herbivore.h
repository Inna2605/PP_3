#pragma once
#include<iostream>
#include <string>
using namespace std;

//����������� ������� - ����������
class Herbivore abstract
{
protected:
	float Weight;
	bool Life;
public:
	Herbivore();
	Herbivore(bool s, float f);
	virtual float getWeight() abstract;
	virtual bool getLife() abstract;
	virtual float EatGrass() abstract;
};

