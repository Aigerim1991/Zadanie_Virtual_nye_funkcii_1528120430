#include "stdafx.h"
#include "Hamster.h"



Hamster::Hamster()
{
}

Hamster::Hamster(string petName) :Pet(petName)
{
}

void Hamster::toString()
{
	Line();
	cout << "���: " << animalType << "\n" << "������: " << getName() << "\n" << "���������� ����: " << sound << endl;
	Line();
}


Hamster::~Hamster()
{
}
