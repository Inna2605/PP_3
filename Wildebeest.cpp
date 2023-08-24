#include"Herbivore.h"
#include "Wildebeest.h"

Wildebeest::Wildebeest()
{
    cout << "Является ли Антилопа Гну живым жевотным?\n"
        << "0 - мертвое;\n"
        << "1 - живое.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "Какой вес имеет Антилопа Гну?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\nАнтилопа Гну мертва...\n\n";
    }
}

float Wildebeest::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\nАнтилопа Гну кушает траву.\n"
            << "Вес Антилопы Гну увеличился!\n"
            << "Вес равен " << Weight << endl;
        
    }
    else {
        return 0;
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
