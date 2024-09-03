// 0502.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "hh.h"

class Base
{
public:

	int* num;
	string name;

	virtual void display() //가상함수 선언 및 정의
	{
		cout << name << " : 부모 클래스의 display 함수" << endl;
		
	}
	/*
	Base() 
	{
		num = new int;
		num = 5;
	};
	*/

	~Base() 
	{
		delete num;
		cout << name << " : 메모리 해제" << endl;
	};
};

//void Base::display()  함수 선언할때 정의
//{
//	cout << "부모 클래스의 display 함수" << endl;
//}


//자식 클래스
class Derived : public Base
{
public:
	void display() override //부모 클래스의 가상함수를 재 정의 
	{
		cout << "자식 클래스의 display 함수" << endl;
	}
};

int main()
{
	/*
	int* p;
	int num = 0;
	p = &num;
	*/


	//Base* basePtr = nullptr; //선언
	//Base* basePrt = new Base; //선언하고 메모리 할당

	Base* pbase = new Base; //pdase 에 new Base 주소 및 값 을 저장
	pbase->name = "아무개"; // Base 의 string name 에 이름을 할당 (포인터러 "->"로 할당)
	//basePtr = pbase; //baseptr값에 pbase를 대입 
	pbase->display(); // 부모클래스의 display 함수를 호출

	Base base; 
	base.name = "홍길동"; //Base 의 string name 에 이름을 할당 (포인터러 "->"로 할당)
	//basePtr = (Base*)&base;
	base.display(); // 부모클래스의 display 함수를 호출


	/*
	Derived dervied0bj;

	basePtr = &dervied0bj; //Derived 객체를 Base 포인터에 할당

	basePtr->display();
	*/

	delete pbase;



	return 0;
}

