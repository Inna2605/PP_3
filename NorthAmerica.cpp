#include "NorthAmerica.h"
#include"Bison.h"
#include"Wolf.h"

Herbivore* NorthAmerica::NotPredator()
{
	return new Bison();
}

Carnivore* NorthAmerica::Predator()
{
	return new Wolf();
}
