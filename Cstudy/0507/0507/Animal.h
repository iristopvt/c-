#pragma once
#include "h.h"


//�����ε� overloading =>
class Animal
{
private:
	string aniname;
	int number;

public:

	string sound;
	//string sound;

	//��

	int type;
	

	//�����

	//��ѱ�
	bool bfly;
	


public:
	Animal(); //�⺻ ������
	Animal(string name); //�߰� ������? 
	Animal(int num);
	int legs;

	Animal(string name, int num);
	
private:
	
public:
	void print(string name);
	void print(int number);
	void print();
	void Sound();
public:
	~Animal();
	void Sound (string sound);

	


};

