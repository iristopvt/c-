#include "Cat.h"

Cat::Cat()
{
	sound = "�߿� �߿�";
	legs = 4;
}

Cat::~Cat()
{
}

void Cat::PlaySound()
{
	Print(sound);
}
