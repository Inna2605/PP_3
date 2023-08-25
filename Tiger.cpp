#include "Tiger.h"

Tiger::Tiger()
{
    cout << "Введите силу тигра: ";
    cin >> Power;
}

float Tiger::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
            cout << "\n\nТигр съел Лося и стал сильнее!\n"
                << "Его сила стала " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\nТигр не смог съесть Лося, он убежал!\n"
                << "Голодный Тигр стал слабее!\n"
                << "Его сила стала " << Power << endl;
        }
    }
    return Power;
}
