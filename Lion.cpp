#include<iostream>
#include "Lion.h"
#include"Herbivore.h"
using namespace std;

Lion::Lion()
{
    cout << "Введите силу льва: ";
    cin >> Power;
}

float Lion::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
            cout << "\n\nЛев съел Антилопу Гну и стал сильнее!\n"
                << "Его сила стала " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\nЛев не смог съесть Антилопу Гну, она убежала!\n"
                << "Голодный Лев стал слабее!\n"
                << "Его сила стала " << Power << endl;
        }
    }
    return Power;
}
