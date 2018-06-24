#pragma once
#include "Pet.h"

/* ����������� ����� ������ */
class Hamster : public Pet
{
private:
	const string animalType = "Cricetidae";
	const string sound = "Hi there!";
public:
	Hamster();
	Hamster(string petName);
	virtual void toString();
	virtual ~Hamster();
};

