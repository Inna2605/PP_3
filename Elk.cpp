#include "Elk.h"

Elk::Elk()
{
    cout << "�������� �� ���� ����� ��������?\n"
        << "0 - �������;\n"
        << "1 - �����.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "����� ��� ����� ����?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\n���� �����...\n\n";
    }
}

float Elk::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\n���� ������ �����.\n"
            << "��� ���� ����������!\n"
            << "��� ����� " << Weight << endl;
    }
    else {
        return 0;
    }
    return Weight;
}

float Elk::getWeight()
{
    return Weight;
}

bool Elk::getLife()
{
    return Life;
}
