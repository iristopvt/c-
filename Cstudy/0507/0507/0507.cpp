#include "h.h"
#include "Dog.h"
#include "cat.h"
#include "Dove.h"

int main() 
{
	Animal animal;
	Animal dog0("�۸���?");
	Animal dog1("�۸���?",1);
	Animal dog2(1);

	Dog dog3;
	
	dog3.Sound("���ο�?");
	dog3.print("���ο� �۸���");
	dog3.print(dog3.legs);
	//dog3.playsound;
	
	
	Animal* panimal;
	
	Cat cat;

	cat.Sound("�Ŀ�");
	cat.print(cat.legs);
	
	
	Dove dove;
	dove.print("��ѱ�");

	panimal = &cat;
	panimal->Sound("��");
	cat.Sound();

	return 0;
}