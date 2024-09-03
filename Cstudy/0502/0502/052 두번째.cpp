#include "hh.h"

class Animal
{
public:
	string name;

	Animal() {};

	virtual ~Animal() {};
	virtual void makesound() const // 자식 class에 넘겨줄수있는 함수 생성 
	{
		cout <<  "동물 소리\n" << endl;
	}
	
	/*void Name()
	{
		cout << "이름은? \n" << name << "\n"  << endl;
	}
	*/
};

class dog : public Animal
{
public:

	
	void makesound() const override // 부모class에서 받은 함수
	{
		cout << "멍" << endl; // 받은 함수 재 정의
	}


};

class cat : public Animal
{
public:

	void makesound() const override // 부모 class에서 받은 함수
	{
		cout << "냥" << endl; //받은 함수 재 정의
	}
};


enum AniType  //
{
	ANIMAL =0,
	DOG,
	CAT
};

int main() 
{

	Animal* animal1 = new Animal(); //Animal 선언하고 메모리 할당
	Animal* animal2 = new dog(); //dog 선언 및 메모리 할당
	Animal* animal3 = new cat(); //cat 선언 및 메모리 할당



	//배열과 enum 응용
	AniType anintype;
	Animal* animal[3]; //Animal 배열 3개 만듬

	for (int i = 0; i < 3; i++)  // 배열 값 1씩증가
	{
		if (i == (int)ANIMAL) // i값이 enum의 ANIMAL 값과 같을때 / ANIMAL 의 값은 enum으로 인해 0  
		{
			animal[i] = new Animal(); // i값이 0일때 new Animal 
		}
		else if (i ==(int)DOG) //i값이 enum의 DOG 값과 같을때 / DOG 의 값은 enum으로 인해 1
		{
			animal[i] = new dog(); // i값이 1 일때 new dog
		}
		else
		{
			animal[i] = new cat(); // i값이 2일때 new cat 
		}
	}
	/* 위에 랑 같은 말 
	for (int i = 0; i < 3; i++)  // 배열 값 1씩증가
	{
		if (i == (int)ANIMAL) // i값이 enum의 ANIMAL 값과 같을때 / ANIMAL 의 값은 enum으로 인해 0  
			animal[0] = new Animal(); 
		else if (i == (int)DOG) //i값이 enum의 DOG 값과 같을때 / DOG 의 값은 enum으로 인해 1	
			animal[1] = new dog(); 
		else	
			animal[2] = new cat();  
	}
	*/




	animal[0]->makesound(); // new Animal 의 maskesound 출력  " 동물 소리"
	animal[2]->makesound(); // new cat 의 maskesound 출력 "냥"
	animal[1]->makesound(); // new dog 의 maskesound 출력 "멍"


	

	for (int i = 0; i < 3; i++)
	{
		delete animal[i];
	}
	delete animal[1];


	/*
	맨처음 동물소리 출력한것
	Animal* animal1 = new Animal(); //Animal 선언하고 메모리 할당
	animal1->makesound(); // 동물 소리 출력
	delete animal1;

	Animal* animal2 = new dog(); //dog 선언 및 메모리 할당
	animal2->makesound(); // 동물 소리 출력
	delete animal2;
	
	Animal* animal3 = new cat(); //cat 선언 및 메모리 할당
	animal3->makesound(); // 동물 소리 출력
	delete animal3;
	*/




	/*
	Animal malmal;
	dog Dog;
	cat Cat;

	
	//malmal.makesound();
	malmal.name = "개새끼";
	malmal.Name();
	malmal.makesound();
	Dog.makesound();

	malmal.name = "냥새끼";
	malmal.Name();
	Cat.makesound();

*/


}