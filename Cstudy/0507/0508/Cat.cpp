#include "Cat.h"

Cat::Cat()
{
	sound = "具克 具克";
	legs = 4;
}

Cat::~Cat()
{
}

void Cat::PlaySound()
{
	Print(sound);
}
