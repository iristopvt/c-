#include "cat.h"
#include "Animal.h"


Cat::Cat()
{
	sound = "�Ŀ˳Ŀ�";
	legs = 4;

}

Cat::~Cat()
{
}

void Cat::catplaysound()
{
	print(sound);
}

