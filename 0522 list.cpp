#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;

list<int> List;


int main()
{
	srand(time(NULL));

	for (int i = 0; i <= 20; i++)
	{
		int random = rand() % 20;
		List.push_back(random);
		List.sort(); // List �ȿ� ���ڵ��� ����

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

	

	List.unique(); // ���ĵ� ���ڿ��� ���������� �ߺ��Ǵ� ��Ҹ� ���� 
					// ��Ұ� �ߺ����� ������ ������ �������� ���� ex) 10,10,50,50 �̷����� ���� 



	for (auto i = List.begin(); i != List.end(); ++i) // ������ ������ ���� ����Ʈ ���
	{
		cout << *i << " ";
	}
	cout << "\nList size : " << List.size() << endl; //��������  ������


	

	
	// ������ ���� ã��
	list<int> removedNumbers; //������ ���ڵ��� ������ ����Ʈ�� ����
	auto itList = List.begin(); // �ߺ� ���ŵ� ����Ʈ�� ����

	for (auto itCopi = copi.begin(); itCopi != copi.end(); ++itCopi)  //���� ����Ʈ
	{
		if (itList == List.end() || *itCopi != *itList)  //���ŵ� ����Ʈ �� ���� ����Ʈ, �ߺ� ���ŵ� ����Ʈ�� ���� ��ҿ� �ٸ���
		{
			removedNumbers.push_back(*itCopi); // ���ο� ����Ʈ�� �߰�
		}
		else {
			++itList;
		}
	}


	// ������ ���� ����Ʈ ���
	cout << "\n������ ���� ����Ʈ\n";
	for (auto i = removedNumbers.begin(); i != removedNumbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << "\n";

	return 0;
}


