#include"Herbivore.h"
#include "Wildebeest.h"

Wildebeest::Wildebeest()
{
    cout << "�������� �� �������� ��� ����� ��������?\n"
        << "0 - �������;\n"
        << "1 - �����.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "����� ��� ����� �������� ���?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\n�������� ��� ������...\n\n";
    }
}

float Wildebeest::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\n�������� ��� ������ �����.\n"
            << "��� �������� ��� ����������!\n"
            << "��� ����� " << Weight << endl;
        
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
