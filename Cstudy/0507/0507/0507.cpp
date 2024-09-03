#include "h.h"
#include "Dog.h"
#include "cat.h"
#include "Dove.h"

int main() 
{
	Animal animal;
	Animal dog0("港港捞?");
	Animal dog1("港港捞?",1);
	Animal dog2(1);

	Dog dog3;
	
	dog3.Sound("货肺款?");
	dog3.print("货肺款 港港捞");
	dog3.print(dog3.legs);
	//dog3.playsound;
	
	
	Animal* panimal;
	
	Cat cat;

	cat.Sound("衬克");
	cat.print(cat.legs);
	
	
	Dove dove;
	dove.print("厚笛扁");

	panimal = &cat;
	panimal->Sound("成");
	cat.Sound();

	return 0;
}