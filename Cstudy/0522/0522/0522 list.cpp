#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;

list<int> List;

//		List.unique();  

//void removeCommonElements(list<int>& list1, list<int>& list2)
//{
//	for (auto it = list1.begin(); it != list1.end(); ) // ����Ʈ�� ó������ ������ Ȯ�� 
//	{
//		if (find(list2.begin(), list2.end(), *it) != list2.end()) // �ٸ� ����Ʈ�� ó������ ������ Ȯ�� 
//		{
//			it = list1.erase(it); // ���� �� ���� ��ġ�� �̵�
//		}
//		else {
//			++it; // ���� ��ҷ� �̵�
//		}
//	}
//}

int main()
{
	srand(time(NULL));

	for (int i = 0; i <= 20; i++)
	{
		int random = rand() % 20;
		List.push_back(random);
		List.sort();

	}
	//����� ����� �Ǿ�����
	cout << "�������� ��µ� ���� ����Ʈ\n";
	for (auto i = List.begin(); i != List.end(); ++i)
	{

		cout << * i << " ";
	} 
	

	list<int> copi(List); // �������� ��µ� ���� ����Ʈ�� ī�� 
	copi.sort(); //ī���� ���ڵ� ����

	cout <<  "\n=================" << endl;

	// ������ ����Ʈ�� �ߺ����� ����Ʈ remove�� ���Ͽ� �������� ���� 

	//List.sort(); // List �ȿ� ���ڵ��� ����
	List.unique(); // ���ĵ� ���ڿ��� ���������� �ߺ��Ǵ� ��Ҹ� ���� 
					// ��Ұ� �ߺ����� ������ ������ �������� ���� ex) 10,10,50,50 �̷����� ���� 



	for (auto i = List.begin(); i != List.end(); ++i) // ������ ������ ���� ����Ʈ ���
	{

		cout << *i << " ";
	}


	cout << "\nList size : " << List.size() << endl; //��������  ������


	

	
	for (auto a = copi.begin(); a != copi.end(); ++a)
	{
		cout << *a << " ";
	}
	
	cout << "\n";

	//for (auto i = copi.begin(); i != copi.end(); )
	//{
	//	for (auto j = List.begin(); j != List.end(); ++j)
	//	{

	//	}
	//
	//	
	//}

}


