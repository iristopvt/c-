#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <time.h>

using namespace std;

//std::list	
//����: ���߿��Ḯ��Ʈ ���� C++ ǥ�ض��̺귯�� �����̳�
//����� ���԰� ������ ��������, ���� ������ ���� Ư¡�̴�.

//���� , �ʱ�ȭ 
list<string> mystringList;

list<int> myList; // �ʱ�ȭ ������ 5;
//list<int> mulist(10); // �ʱ�ȭ ������ 5
//list<int> myIntList = { 1,2,3,4,5,6 };

//����Ʈ ��������

//����Ʈ�� �����Լ��̿� 30�� ������ �������� ���� 
// ¦���� �����ϰ� Ȧ���� �����ϴ� ���α׷� �ۼ�
// Ȧ������ �������� �������ϰ� Ȧ�� ���ڸ� ��� 


int main()
{

	srand(time(NULL));

	for (int i = 0; i < 30; i++)
	{
		int random = rand() % 100; // 0���� 100���� ������ ��
		 myList.push_back(random);

		/* if (random % 3 ==0)
		 {

		 }*/
	}


	for (auto it = myList.begin(); it != myList.end(); ++it) //mylist ó��(begin)���� ��(end)���� ������ϰٴ�
	{
		int a = *it;

		//myList.remove_if(a % 2 != 0);

		if (a % 2 != 0)
		{
			std::cout << a << "\n";
			//remove_if �� ����Ͽ� ���� ��Ҹ� �����Ҽ� ���� 
		}

	}
	std::cout << "Mylist size : " << myList.size() << endl;


	



	//// ����Ʈ�� ��� ��� ���
	//std::cout << "������ ����: ";
	//for (const auto& num : myList) {
	//	std::cout << num << " ";
	//}
	//std::cout << std::endl;
	//��� �߰� 

	/*
	myList.push_back(6);
	myList.push_back(16);
	myList.push_front(10);
	myList.push_front(100);
	*/

	// 100,10,6,16

	//cout << "Mylist size : " << myList.size() << endl; // mylist ������ ����� ���

	//cout << myList.front() << endl; // �Ǿ� ��� 100
	//cout << myList.back() << endl; // �ǵ� ��� 16


	//��� ����
	//myList.pop_back(); // 16 ����	
	//myList.pop_front(); // 100 ����

	
	//cout << myList.front() << endl; // �Ǿ� ��� 10
	//cout << myList.back() << endl; // �ǵ� ��� 6
	//cout << "Mylist size : " << myList.size() << endl; // mylist ������ ����� ��� 
	// ��Ҹ� �����ؼ� ������ 2�� ���


	/*
	auto it = myList.begin();

	advance(it, 2);
	cout << *it << endl;

	// (it+2) - > 6�� ������
	// ����ȭ it�� null �� (�����Ⱚ�� �����Ǽ� �ʱ�ȭ�� ������� )
	myList.erase(it);  //100, 10, 16

	//��� �߰�
	it = myList.begin();
	advance(it, 2);
	myList.insert(it, 1000); // 100,10,10000,16

	//myList.remove(1);

	//myList.clear();

	cout << "Mylist size : " << myList.size() << endl; // mylist ������ ����� ��� 


	for (auto it = myList.begin(); it !=myList.end(); ++it) //mylist ó��(begin)���� ��(end)���� ������ϰٴ�
	{
		cout << *it << endl;

	}
	*/


	//mystringList.push_back("test");

	//for (auto it = mystringList.begin(); it != mystringList.end(); ++it)
	//{
	//	cout << *it << endl;

	//}

	return 0;
}