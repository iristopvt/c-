#include "hh.h"



�̰Ŵ� �ٽ��ѹ� ���������


//�޸� ����, ���� 
class Object
{
public:
	int value;

	//������
	Object(int val) : value(val){} //�����ڸ� ���� �ʱ�ȭ

	void printValue()
	{
		cout << "Value" << value << endl;
	}
};


int main()
{
	const int OBJECT_MAX = 6; //��ü�� ����
	Object** objects = new Object * [OBJECT_MAX]; // ���� ������ �迭 ���� �Ҵ�
	//2���� �迭�� ���� �����ͷ� ����� 


	//��ü �迭�� ��ü �Ҵ� �� �ʱ�ȭ
	for (int i = 0; i < OBJECT_MAX; ++i)
	{
		objects[i] = new Object(i); //�����ڸ� ���� �ʱ�ȭ
	}

	//�Ҵ�� ��ü �迭 ��� ��
	for (int i = 0; i < OBJECT_MAX; ++i)
	{
		objects[i]->printValue(); // ��ü�� ���
	}

	for (int i = 0; i < OBJECT_MAX; i++)
	{
		delete[] objects[i]; //��ü �迭 ����
	}
	
	delete[] objects;

}