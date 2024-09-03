#include "hh.h"

class Parent
{
protected: // protected ��� // protected �� �θ�� �ڽ� Ŭ���������� ���� �����ϰ� �ܺο����� ���� �Ұ� 
	int protectedVar; //protectedVar ���� ����

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
		//protected ����� ���� ����
		protectedVar = 42; // protected�� ���� �ʱ�ȭ 
	}
	void displayProtected()
	{
		cout << "Protected variable: " << protectedVar << endl; //protectedVar �� ���� ��� 
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