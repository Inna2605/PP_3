#pragma once
#include "Herbivore.h"
#include "Carnivore.h"

//јбстрактна€ фабрика -  онтинент
class Continent abstract
{
	virtual Herbivore* NotPredator()abstract;//траво€дное (абстрактный продукт)
	virtual Carnivore* Predator()abstract;//плото€дное (абстрактный продукт)
};

