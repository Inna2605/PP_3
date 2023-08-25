#include "Elk.h"

Elk::Elk()
{
    cout << "Является ли Лось живым животным?\n"
        << "0 - мертвое;\n"
        << "1 - живое.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "Какой вес имеет Лось?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\nЛось мертв...\n\n";
    }
}

float Elk::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\nЛось кушает траву.\n"
            << "Вес Лося увеличился!\n"
            << "Вес равен " << Weight << endl;
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
