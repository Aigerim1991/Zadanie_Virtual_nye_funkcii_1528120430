#include "stdafx.h"
#include "Dog.h"

Dog::Dog()
{
}

Dog::Dog(string petName) :Pet(petName)
{
}

void Dog::toString()
{
	Line();
	cout << "���: " << animalType << "\n" << "������: " << getName() << "\n" << "���������� ����: " << sound << endl;
	Line();
}


Dog::~Dog()
{
}