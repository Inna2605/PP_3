#include"Herbivore.h"
#include "Bison.h"

Bison::Bison()
{
    cout << "Является ли Бизон живым жевотным?\n"
        << "0 - мертвое;\n"
        << "1 (или любое число) - живое.\n";
    cin >> Life;
    if (Life != 0) {
        cout << "Какой вес имеет Бизон?\n";
        cin >> Weight;
    }
    else {
        cout << "\n\nБизон мертв...\n\n";
    }
}

float Bison::EatGrass()
{
    if (Life != 0) {
        Weight += 10;
        cout << "\n\nБизон кушает траву.\n"
            << "Вес Бизона увеличился!\n"
            << "Вес равен " << Weight << endl;;
        

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

