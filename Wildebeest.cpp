#include"Herbivore.h"
#include "Wildebeest.h"

Wildebeest::Wildebeest()
{
    cout << "�������� �� �������� ��� ����� ��������?\n"
        << "0 - �������;\n"
        << "1 (��� ����� �����) - �����.";
    cin >> Life;
    cout << "����� ��� ����� �������� ���?";
    cin >> Weight;
}

float Wildebeest::EatGrass()
{
    if (Life != 0) {
        cout << "�������� ��� ������ �����.";
        Weight += 10;
        
    }
    else {
        cout << "�������� ��� ������...";
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
