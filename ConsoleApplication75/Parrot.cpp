#include "stdafx.h"
#include "Parrot.h"



Parrot::Parrot()
{
}

Parrot::Parrot(string petName)
{
}

void Parrot::toString()
{
	Line();
	cout << "���: " << animalType << "\n" << "������: " << getName() << "\n" << "���������� ����: " << sound << endl;
	Line();
}


Parrot::~Parrot()
{
}
