#include "Eurasia.h"
#include "Elk.h"
#include "Tiger.h"

Herbivore* Eurasia::NotPredator()
{
    return new Elk();
}

Carnivore* Eurasia::Predator()
{
    return new Tiger();
}
