#include"Herbivore.h"
#include "Bison.h"

Bison::Bison()
{
    cout << "�������� �� ����� ����� ��������?\n"
        << "0 - �������;\n"
        << "1 (��� ����� �����) - �����.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "����� ��� ����� �����?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\n����� �����...\n\n";
    }
}

float Bison::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\n����� ������ �����.\n"
            << "��� ������ ����������!\n"
            << "��� ����� " << Weight << endl;;
        

    }
    else {
        return 0;
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

