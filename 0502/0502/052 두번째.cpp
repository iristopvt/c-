#include "hh.h"

class Animal
{
public:
	string name;

	Animal() {};

	virtual ~Animal() {};
	virtual void makesound() const // �ڽ� class�� �Ѱ��ټ��ִ� �Լ� ���� 
	{
		cout <<  "���� �Ҹ�\n" << endl;
	}
	
	/*void Name()
	{
		cout << "�̸���? \n" << name << "\n"  << endl;
	}
	*/
};

class dog : public Animal
{
public:

	
	void makesound() const override // �θ�class���� ���� �Լ�
	{
		cout << "��" << endl; // ���� �Լ� �� ����
	}


};

class cat : public Animal
{
public:

	void makesound() const override // �θ� class���� ���� �Լ�
	{
		cout << "��" << endl; //���� �Լ� �� ����
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

	Animal* animal1 = new Animal(); //Animal �����ϰ� �޸� �Ҵ�
	Animal* animal2 = new dog(); //dog ���� �� �޸� �Ҵ�
	Animal* animal3 = new cat(); //cat ���� �� �޸� �Ҵ�



	//�迭�� enum ����
	AniType anintype;
	Animal* animal[3]; //Animal �迭 3�� ����

	for (int i = 0; i < 3; i++)  // �迭 �� 1������
	{
		if (i == (int)ANIMAL) // i���� enum�� ANIMAL ���� ������ / ANIMAL �� ���� enum���� ���� 0  
		{
			animal[i] = new Animal(); // i���� 0�϶� new Animal 
		}
		else if (i ==(int)DOG) //i���� enum�� DOG ���� ������ / DOG �� ���� enum���� ���� 1
		{
			animal[i] = new dog(); // i���� 1 �϶� new dog
		}
		else
		{
			animal[i] = new cat(); // i���� 2�϶� new cat 
		}
	}
	/* ���� �� ���� �� 
	for (int i = 0; i < 3; i++)  // �迭 �� 1������
	{
		if (i == (int)ANIMAL) // i���� enum�� ANIMAL ���� ������ / ANIMAL �� ���� enum���� ���� 0  
			animal[0] = new Animal(); 
		else if (i == (int)DOG) //i���� enum�� DOG ���� ������ / DOG �� ���� enum���� ���� 1	
			animal[1] = new dog(); 
		else	
			animal[2] = new cat();  
	}
	*/




	animal[0]->makesound(); // new Animal �� maskesound ���  " ���� �Ҹ�"
	animal[2]->makesound(); // new cat �� maskesound ��� "��"
	animal[1]->makesound(); // new dog �� maskesound ��� "��"


	

	for (int i = 0; i < 3; i++)
	{
		delete animal[i];
	}
	delete animal[1];


	/*
	��ó�� �����Ҹ� ����Ѱ�
	Animal* animal1 = new Animal(); //Animal �����ϰ� �޸� �Ҵ�
	animal1->makesound(); // ���� �Ҹ� ���
	delete animal1;

	Animal* animal2 = new dog(); //dog ���� �� �޸� �Ҵ�
	animal2->makesound(); // ���� �Ҹ� ���
	delete animal2;
	
	Animal* animal3 = new cat(); //cat ���� �� �޸� �Ҵ�
	animal3->makesound(); // ���� �Ҹ� ���
	delete animal3;
	*/




	/*
	Animal malmal;
	dog Dog;
	cat Cat;

	
	//malmal.makesound();
	malmal.name = "������";
	malmal.Name();
	malmal.makesound();
	Dog.makesound();

	malmal.name = "�ɻ���";
	malmal.Name();
	Cat.makesound();

*/


}