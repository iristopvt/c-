#include "Dog.h"


Dog::Dog()
{
	sound = "¸Û¸Û~¸Û";
	legs = 4;
}

Dog::~Dog()
{
}

void Dog::PlaySound()
{
	Animal::Print(sound);
}