#include "Dog.h"


Dog::Dog()
{
	sound = "�۸�~��";
	legs = 4;
}

Dog::~Dog()
{
}

void Dog::PlaySound()
{
	Animal::Print(sound);
}