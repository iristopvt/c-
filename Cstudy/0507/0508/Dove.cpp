#include "Dove.h"

Dove::Dove()
{
	sound = "구~구~구";
	legs = 2;
}

Dove::~Dove()
{
}

void Dove::PlaySound() 
{
	Animal::PlaySound();
	Print("Dove::PlatSound() 함수호출");
}
