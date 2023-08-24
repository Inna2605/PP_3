#include "Africa.h"
#include"Wildebeest.h"
#include"Lion.h"

Herbivore* Africa::NotPredator()
{
	return new Wildebeest();
}

Carnivore* Africa::Predator()
{
	return new Lion();
}
