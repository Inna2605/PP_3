#include "Wolf.h"

Wolf::Wolf()
{
    cout << "Введите силу волка: ";
    cin >> Power;
}

float Wolf::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
            cout << "\n\nВолк съел Бизона и стал сильнее!\n"
                << "Его сила стала " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\nВолк не смог съесть Бизона, он убежал!\n"
                << "Голодный Волк стал слабее!\n"
                << "Его сила стала " << Power << endl;
        }
    }
    return Power;
}
