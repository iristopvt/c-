#include "hh.h"

////부모 클래스
//class Base 
//{
//public:
//	
//	virtual void display() //가상함수 선언
//	{
//		cout << "부모 클래스의 display 함수" << endl;
//	}
//};
//
//
////자식 클래스
//class Derived : public Base 
//{
//public:
//	void display() override //부모 클래스의 가상함수를 재 정의 
//	{
//		cout << "자식 클래스의 display 함수" << endl;
//	}
//};
//
//int main()
//{
//	Base* basePtr;
//	Derived dervied0bj;
//
//	basePtr = &dervied0bj; //Derived 객체를 Base 포인터에 할당
//
//	basePtr->display(); 
//
//	return 0;
//
//}