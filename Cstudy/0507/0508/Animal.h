#pragma once
#include "h.h"

//�����ε� overloading => ���ø�
class Animal
{
private:
	string aniname;
	int    number;

	//��
	int type;

	//�����

	//��ѱ�
	bool bfly;
public:
	string sound;
	int  legs;

public:
	Animal(); //�⺻ ������
	Animal(string name); //�߰� ������

	Animal(int num);
	//Animal(float num);
	//Animal(double num);

	Animal(string name, int num);

private:
	void Print();

public:
	void Print(string name);
	void Print(int number);


protected:// �ڽ� Ŭ���� �� ��밡��, �ܺο����� ���Ұ� 
	virtual void PlaySound() = 0; //���������Լ� ?


public:
	~Animal(); //�Ҹ���
};

// vitual �ڽ��� �������ϋ� �θ� �Լ� ����� (���� x)
//  �ڽĿ��� �� �Լ��� �ҷ��� ���� ä��� �ְ� �ϴ°�  
// ����� �������̵� 