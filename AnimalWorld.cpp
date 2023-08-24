#include "AnimalWorld.h"

void AnimalWorld::MealsHerbivores(Herbivore* H_animal)
{
	H_animal->EatGrass();
}

void AnimalWorld::NutritionCarnivores(Carnivore* C_animal, Herbivore* H_animal)
{
	C_animal->Eat(H_animal);
}
