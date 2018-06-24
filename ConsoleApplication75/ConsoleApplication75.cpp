// ConsoleApplication75.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <list>
#include <clocale>
#include "Pet.h"
#include "Dog.h"
#include "Cat.h"
#include "Hamster.h"
#include "Parrot.h"

using namespace std;

int main()
{
	/* Задание.
	Создать базовый класс «Домашнее животное» и производные классы «Собака», «Кошка», «Попугай», «Хомяк».
	С помощью конструктора установить имя каждого животного и его характеристики. Реализуйте для каждого
	из классов функции:
	Sound – издает звук животного (пишем текстом в консоль);
	Show – отображает имя животного;
	Type – отображает название его подвида.*/

	setlocale(LC_ALL, "rus");
	list <Pet*> petList;

	petList.push_back(new Dog("Lucky"));
	petList.push_back(new Cat("Matilda"));
	petList.push_back(new Parrot("Flint"));
	petList.push_back(new Hamster("Hommy"));

	for (list<Pet*>::iterator i = petList.begin(); i != petList.end(); i++)
	{
		(*i)->toString();
	}

	return 0;
}