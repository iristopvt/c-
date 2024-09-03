#include "cat.h"
#include "Animal.h"


Cat::Cat()
{
	sound = "³Ä¿Ë³Ä¿Ë";
	legs = 4;

}

Cat::~Cat()
{
}

void Cat::catplaysound()
{
	print(sound);
}

