#include "Wolf.h"

Wolf::Wolf()
{
    cout << "������� ���� �����: ";
    cin >> Power;
}

float Wolf::Eat(Herbivore* animal)
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
