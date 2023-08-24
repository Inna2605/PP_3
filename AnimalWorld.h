#pragma once
#include"Herbivore.h"
#include"Carnivore.h"

class AnimalWorld:public Herbivore, Carnivore
{
public:
	void MealsHerbivores(Herbivore* H_animal);
	void NutritionCarnivores(Carnivore* C_animal, Herbivore* H_animal);
};

