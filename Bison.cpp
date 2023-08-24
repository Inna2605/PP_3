#include"Herbivore.h"
#include "Bison.h"

Bison::Bison()
{
    cout << "Является ли Бизон живым жевотным?\n"
        << "0 - мертвое;\n"
        << "1 (или любое число) - живое.";
    cin >> Life;
    cout << "Какой вес имеет Бизон?";
    cin >> Weight;
}

float Bison::EatGrass()
{
    if (Life != 0) {
        cout << "Бизон кушает траву.";
        Weight += 10;

    }
    else {
        cout << "Бизон мертв..."; 
    }
    return Weight;
}

float Bison::getWeight()
{
    return Weight;
}

bool Bison::getLife()
{
    return Life;
}

