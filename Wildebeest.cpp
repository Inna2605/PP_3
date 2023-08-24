#include"Herbivore.h"
#include "Wildebeest.h"

Wildebeest::Wildebeest()
{
    cout << "явл€етс€ ли јнтилопа √ну живым жевотным?\n"
        << "0 - мертвое;\n"
        << "1 (или любое число) - живое.";
    cin >> Life;
    cout << " акой вес имеет јнтилопа √ну?";
    cin >> Weight;
}

float Wildebeest::EatGrass()
{
    if (Life != 0) {
        cout << "јнтилопа √ну кушает траву.";
        Weight += 10;
        
    }
    else {
        cout << "јнтилопа √ну мертва...";
    }
    return Weight;
}

float Wildebeest::getWeight()
{
    return Weight;
}

bool Wildebeest::getLife()
{
    return Life;
}
