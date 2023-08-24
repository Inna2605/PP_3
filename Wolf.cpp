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
            cout << "\n\n���� ���� ������ � ���� �������!\n"
                << "��� ���� ����� " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\n���� �� ���� ������ ������, �� ������!\n"
                << "�������� ���� ���� ������!\n"
                << "��� ���� ����� " << Power << endl;
        }
    }
    return Power;
}
