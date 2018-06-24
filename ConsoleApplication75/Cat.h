#pragma once
#include "Pet.h"

/* ����������� ����� ������ */
class Cat : public Pet
{
private:
	const string animalType = "Cat";
	const string sound = "Meow-meow";
public:
	Cat();
	Cat(string petName);
	virtual void toString();
	virtual ~Cat();
};
