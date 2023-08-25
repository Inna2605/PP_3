#include "Tiger.h"

Tiger::Tiger()
{
    cout << "������� ���� �����: ";
    cin >> Power;
}

float Tiger::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
            cout << "\n\n���� ���� ���� � ���� �������!\n"
                << "��� ���� ����� " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\n���� �� ���� ������ ����, �� ������!\n"
                << "�������� ���� ���� ������!\n"
                << "��� ���� ����� " << Power << endl;
        }
    }
    return Power;
}
