#pragma once
#include "h.h"

//오버로딩 overloading => 템플릿
class Animal
{
private:
	string aniname;
	int    number;

	//개
	int type;

	//고양이

	//비둘기
	bool bfly;
public:
	string sound;
	int  legs;

public:
	Animal(); //기본 생성자
	Animal(string name); //추가 생성자

	Animal(int num);
	//Animal(float num);
	//Animal(double num);

	Animal(string name, int num);

private:
	void Print();

public:
	void Print(string name);
	void Print(int number);


protected:// 자식 클래스 만 사용가능, 외부에서는 사용불가 
	virtual void PlaySound() = 0; //순수가상함수 ?


public:
	~Animal(); //소멸자
};

// vitual 자식이 여러개일떄 부모가 함수 만들고 (내용 x)
//  자식에서 그 함수를 불러와 내용 채울수 있게 하는것  
// 버츄얼 오버라이딩 