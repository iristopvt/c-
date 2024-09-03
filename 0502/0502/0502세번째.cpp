#include "hh.h"

class Parent
{
protected: // protected 멤버 // protected 는 부모와 자식 클래스에서만 접근 가능하고 외부에서는 접근 불가 
	int protectedVar; //protectedVar 변수 선언

public:
	Parent() :protectedVar(0) {}

	void setProtectedVar(int value)
	{
		protectedVar = value;
	}

	int getProtectedVar() const
	{
		return protectedVar;
	}
};

class Child :public Parent
{
public:
	void accessProtected() 
	{
		//protected 멤버에 접근 가능
		protectedVar = 42; // protected의 변수 초기화 
	}
	void displayProtected()
	{
		cout << "Protected variable: " << protectedVar << endl; //protectedVar 의 값을 출력 
	}
};



int main()
{

	Child chird;
	Parent par;
	
	chird.setProtectedVar(15);
	chird.displayProtected();

	chird.accessProtected();
	chird.displayProtected();


}