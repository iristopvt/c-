#include "Dog.h"
#include "Animal.h"



Dog::Dog()
{
	sound = " ¸Û¸Û";
	legs = 4;
}
Dog::~Dog()
{

}

void Dog::playsound()
{
	//print(sound);
	Animal::Sound(sound);
}
