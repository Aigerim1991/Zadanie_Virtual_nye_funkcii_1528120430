#pragma once
#include <iostream>
#include <string>

using namespace std;

/* ������� ����� ��������� �������� */
class Pet
{
private:
	string petName; // ������ ���������

public:
	Pet();
	Pet(string petName);
	string getName();
	virtual void toString();
	virtual void Line();
	virtual ~Pet();
};

