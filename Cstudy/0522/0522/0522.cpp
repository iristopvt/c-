#include <iostream>

//��ü������ (OOP) ����
//
//Ŭ���� : 
//1.�ϳ��� Ŭ���� �ϳ��� å�Ӹ� ������ �ȴ�? 
//2. ��ӿ� ���ؼ� �θ�Ŭ������ �ڽİ��� ���踦 ���� �����ؾ��Ѵ�.
//animal ,Dog, Cat , ��, ��
//	����� ����ϸ� �ش� ���� ī�װ��� �ִ� �������� �ڵ� �ߺ��� �ٿ��ָ�, Ȯ�强�� ������
//
//
//Ŭ�������� ����ȯ
//��ĳ���� : �ڽ� -> �θ�Ŭ������ ��ȯ ( �Ϲ���)
//�ٿ�ĳ���� - > �θ�Ŭ���� -> �ڽ�Ŭ���� (��üȭ)

//�������̽� 
class IAnimal
{
public:
	//�����Լ�
	virtual void Speak()
	{
		std::cout << "���� �Ҹ�\n";
	}

	//���� �����Լ�
	virtual void Speak1() = 0; //�ڽ����� ������ ���Լ��� �����ض�

};

class Dog : public Animal
{
public:
	void Speak()
	{
		std::cout << "�۸�\n";
	}

	 void Speak1(){}


};



int main()
{
	Animal* animal = new Dog; //��ĳ���� (�ڽ� -> �θ� ĳ����)
	Dog* dog = dynamic_cast<Dog*>(animal); //�ٿ�ĳ����( �θ� -> �ڽ�)

	animal->Speak();
	dog->Speak();



}


