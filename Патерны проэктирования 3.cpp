﻿/* Спроектируйте приложение, используя паттерн «абстрактная фабрика», который будет симулировать животную жизнь на разных континентах земного шара.
В программе весь животный мир будет разделен на части : травоядные и хищники(абстрактные продукты).
Добавьте к абстрактному продукту «хищник» метод «кушать», который будет принимать в себя объект «травоядного»(абстрактный продукт).
    Наследники класса «Континент»(абстрактная фабрика) будут порождать конкретные объекты с именами и функциями, присущими их флоре и фауне.
    Всеми процессами в программе будет управлять класс «мир животных»(клиент).

    Конкретные объекты :
 Континент(Continent) - абстрактная фабрика;
o Африка(Africa) - конкретная фабрика;
o Северная Америка(North America) - конкретная фабрика;

 Травоядное животное(Herbivore) - абстрактный продукт;
o Антилопа Гну(Wildebeest) - конкретный продукт;
 Вес(Weight) - свойство травоядного животного;
 Кушать траву(Eat grass) - метод конкретного продукта (добавляют к весу + 10);
 Жизнь(Life) - свойство животного(характеризует живое ли существо);

o Бизон(Bison) - конкретный продукт;
 Вес(Weight) - свойство травоядного животного;
 Кушать траву(Eat grass) - метод конкретного продукта (добавляют к весу + 10);
 Жизнь(Life) свойство животного(характеризует живое ли существо);

 Плотоядное животное(Carnivore) - абстрактный продукт;
o Лев(Lion) - конкретный продукт;
 Сила(Power) - свойство плотоядного животного;
 Кушать травоядное животное(Eat) - метод конкретного продукта, при выполнении которого проверяется, является ли сила плотоядного животного больше, 
чем вес травоядного, которого он съедает.Если является, то хищник получает + 10 к силе, иначе, если сила меньше, чем вес травоядного животного,
то сила плотоядного уменьшаются на - 10.

o Волк(Wolf) - конкретный продукт;
 Сила(Power) свойство плотоядного животного;
 Кушать травоядное животное(Eat) - метод конкретного продукта, при выполнении которого проверяется, является ли сила плотоядного животного больше, 
чем вес травоядного, которого он съедает.Если является, то хищник получает + 10 к силе, иначе, если сила меньше, чем вес травоядного животного, 
то сила плотоядного уменьшаются на - 10.

 Мир животных(Animal World) – клиент;
o Питание травоядных(Meals herbivores) - метод клиента, который инициирует всех травоядных приступить к кормежке;
o Питание плотоядных(Nutrition carnivores) - метод клиента, который заставит всех плотоядных охотится на травоядных.

Постройте данную программу на паттерне «абстрактная фабрика». Дополните данное приложение, добавив новый континент «Евразия»,
в котором травоядным будет «Лось»(Elk), а плотоядным - «Тигр»(Tiger).*/

#include <iostream>
#include"Continent.h"
#include"Africa.h"
#include"NorthAmerica.h"
#include"AnimalWorld.h"
#include"Herbivore.h"
#include"Carnivore.h"
#include"Bison.h"
#include"Lion.h"
#include"Wildebeest.h"
#include"Wolf.h"
#include"Eurasia.h"
#include"Elk.h"
#include"Tiger.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Continent* Earth = new Africa();
    Herbivore* H_animal = new Wildebeest();
    Carnivore* C_animal = new Lion();
    AnimalWorld* World = new AnimalWorld();
    World->MealsHerbivores(H_animal);
    World->NutritionCarnivores(C_animal, H_animal);
    delete Earth;
    delete H_animal;
    delete C_animal;
    delete World;

    cout << endl << endl;

    Earth = new NorthAmerica();
    H_animal = new Bison();
    C_animal = new Wolf();
    World = new AnimalWorld();
    World->MealsHerbivores(H_animal);
    World->NutritionCarnivores(C_animal, H_animal);
    delete Earth;
    delete C_animal;
    delete World;

    cout << endl << endl;

    Earth = new Eurasia();
    H_animal = new Elk();
    C_animal = new Tiger();
    World = new AnimalWorld();
    World->MealsHerbivores(H_animal);
    World->NutritionCarnivores(C_animal, H_animal);
    delete Earth;
    delete C_animal;
    delete World;
}
