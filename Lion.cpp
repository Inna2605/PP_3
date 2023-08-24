#include<iostream>
#include "Lion.h"
#include"Herbivore.h"
using namespace std;

Lion::Lion()
{
    cout << "������� ���� ����: ";
    cin >> Power;
}

float Lion::Eat(Herbivore* animal)
{
    if (animal->getLife() != 0) {
        if (animal->getWeight() < Power) {
            Power += 10;
            cout << "\n\n��� ���� �������� ��� � ���� �������!\n"
                << "��� ���� ����� " << Power << endl;
        }
        else if (animal->getWeight() >= Power) {
            Power -= 10;
            cout << "\n\n��� �� ���� ������ �������� ���, ��� �������!\n"
                << "�������� ��� ���� ������!\n"
                << "��� ���� ����� " << Power << endl;
        }
    }
    return Power;
}
