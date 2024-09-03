#include "Animal.h"

#include "h.h"

Animal::Animal()
{
	cout << "Animal::Animal() 호출 \n";
	aniname = "";
	number = 0;
}

Animal::Animal(string name)
{
	aniname = name;
	number = 0;
	Print();
}

Animal::Animal(int num)
{
	aniname = "";
	number = num;

	Print(aniname);
	Print(number);
}

Animal::Animal(string name, int num)
{
	aniname = name;
	number = num;
	Print(aniname);
	Print(number);
}


void Animal::Print()
{
	//cout << "Aniname: " << aniname << "\n" << "number: " << number << "\n";
	Print(aniname);
	Print(number);
}

void Animal::Print(string name)
{
	cout << "Animal: " << name << "\n";
}

void Animal::Print(int number)
{
	cout << "number: " << number << "\n";
}

void Animal::PlaySound()
{
	Print(sound);
	Print("Animal::PlatSound() 호출");
}

Animal::~Animal()
{
	cout << "Animal::~Animal() 호출 \n";
}

