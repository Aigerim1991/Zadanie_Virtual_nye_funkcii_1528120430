#include "stdafx.h"
#include "Cat.h"

Cat::Cat()
{
}

Cat::Cat(string petName) :Pet(petName)
{
}

void Cat::toString()
{
	Line();
	cout << "���: " << animalType << "\n" << "������: " << getName() << "\n" << "���������� ����: " << sound << endl;
	Line();
}


Cat::~Cat()
{
}
