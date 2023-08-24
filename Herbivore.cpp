#include "Herbivore.h"

Herbivore::Herbivore()
{
	Weight = 0;
	Life = 1;
}

Herbivore::Herbivore(bool s, float f)
{
	Life = s;
	Weight = f;
}
