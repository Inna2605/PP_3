#include"Herbivore.h"
#include "Bison.h"

Bison::Bison()
{
    cout << "�������� �� ����� ����� ��������?\n"
        << "0 - �������;\n"
        << "1 (��� ����� �����) - �����.";
    cin >> Life;
    cout << "����� ��� ����� �����?";
    cin >> Weight;
}

float Bison::EatGrass()
{
    if (Life != 0) {
        cout << "����� ������ �����.";
        Weight += 10;

    }
    else {
        cout << "����� �����..."; 
    }
    return Weight;
}

float Bison::getWeight()
{
    return Weight;
}

bool Bison::getLife()
{
    return Life;
}

