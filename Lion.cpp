#include<iostream>
#include "Lion.h"
#include"Herbivore.h"
using namespace std;

Lion::Lion()
{
    cout << "¬ведите силу льва: ";
    cin >> Power;
}

float Lion::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
        }
    }
    return Power;
}
