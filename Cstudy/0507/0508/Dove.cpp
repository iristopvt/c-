#include "Dove.h"

Dove::Dove()
{
	sound = "��~��~��";
	legs = 2;
}

Dove::~Dove()
{
}

void Dove::PlaySound() 
{
	Animal::PlaySound();
	Print("Dove::PlatSound() �Լ�ȣ��");
}
