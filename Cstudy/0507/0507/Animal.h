#pragma once
#include "h.h"


//오버로딩 overloading =>
class Animal
{
private:
	string aniname;
	int number;

public:

	string sound;
	//string sound;

	//개

	int type;
	

	//고양이

	//비둘기
	bool bfly;
	


public:
	Animal(); //기본 생성자
	Animal(string name); //추가 생성자? 
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

