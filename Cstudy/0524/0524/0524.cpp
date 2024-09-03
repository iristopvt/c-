// 0524.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "singleton.h"

using namespace std;

class Dog;


//추상클래스
class Animal {
public:
	virtual void sound() = 0; // 가상함수는 버츄얼을 붙여야함 ?



};

class AnimalManger : public Singleton
{
public:
	Dog dog;

};

class Dog : public Animal
{	
public:
	Dog() 
	{
		nType = 0;
	}
	Dog(int _type) 
	{
		nType = _type;
	}
	~Dog(){}


	//static 는 [전역변수]를 함수 안이나 클래스에서 만든고 보면된다?
	//

	static int nType; // 강아지 품종
	string name;   

	virtual void sound() override 
	{ 
		if (nType == 1)
		{
			cout << " 왈 왈\n";
		}
		else if (nType == 2)
		{
			cout << " dd \n";
		}
		else
		{
			cout << " 멍 멍\n";
		}
	} // 


	//스테틱 함수

	static void Disdplay()  // 강사님이 오류난 부분 
	{
		AnimalManger* pMng = (AnimalManger*)AnimalManger::getInstance();
		
		if (pMng )
		{
			pMng->dog.name;
			cout << "static 함수가 호출되었습니다\n";
		}
		
	}
};




class BlackDog : public Dog 
{

public:
	void sound() override 
	{ 
		cout << " 왈 왈\n"; 
	}

	
};
void Disdplay()
{
	cout << "일반 함수가 호출되었습니다\n";

}
//스태틱 변수 호출방법
int Dog::nType = 0; // 품종

static int Num = 0;

int main()
{
	
	Dog::nType = 1;

	Dog::Disdplay();

	Disdplay();

	Dog dog, blackdog(Dog::nType);
	//BlackDog blackdog;


	dog.sound();
	blackdog.sound();

	blackdog.Disdplay();
	
	AnimalManger* pMng = (AnimalManger*)AnimalManger::getInstance();
	if (pMng)
	{
		cout << "static 함수 Dog::Disdplay()가 호출되었습니다\n";
	}
	//Dog* dog = &anMng.dog;

	pMng->dog.sound();

	return 0;
}

