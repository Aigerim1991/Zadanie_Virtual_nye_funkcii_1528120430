#pragma once
#include "Pet.h"

/* ����������� ����� �������� */
class Parrot : public Pet
{
private:
	const string animalType = "Psittaciformes";
	const string sound = "Piasters! Piasters!";
public:
	Parrot();
	Parrot(string petName);
	virtual void toString();
	virtual ~Parrot();
};