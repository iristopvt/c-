#include "Animal.h"

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
	print();
}

Animal::Animal(int num)
{
	aniname = "";
	number = num;
	print(aniname);
	print(number);

}

Animal::Animal(string name, int num)
{
	aniname = name;
	number = num;
	print(aniname);
	print(number);
}

void Animal::print()
{
	//cout << "Animal: " << aniname << "\t" << "number: " << number << "\n";
	print(aniname);
	print(number);

}

void Animal::print(string name)
{
	cout << "Animal: " << name << "\n";
}

void Animal::print(int number)
{
	cout << "Animal: " << number << "\n";
}

Animal::~Animal()
{
		cout << "Animal::~Animal() 호출 \n";

}

void Animal::Sound(string sound)
{
	this->sound = sound;
	print(sound);
}

void Animal::Sound()
{
	print(sound);
}

