#include <iostream>
#include <set>
#include <random>
#include <vector>
#include <string>
#include <ctime>
#include <unordered_set>
using namespace std;

int main()
{
	//1 a-z, A-Z �迭����� // 
	// 2 �����ϰ� �����ؼ� �ִ� 15�ڷ� �� ���ڿ� //random = rand()
	// 3 ���ڿ��� 2�� ���� A,B 
	// 4 ���ڿ� �� ����  A-B �ߺ��� ���ڿ��� ������ A�� ��� 


	vector<char> Eng; // A-Z ������ �迭


	for (char c = 'A'; c <= 'Z'; c++)
	{
		Eng.push_back(c);
	}
	for (char c = 'a'; c < 'z'; c++)
	{
		Eng.push_back(c);
	}

	int str = 15;
	srand(time(NULL));
	int random = rand() % 15;

	string engrandom1;
	string endrandom2;

	for (int i = 0; i < str; i++)       // ���� ���ڿ� A
	{
		int rand2 = rand() % Eng.size();
		engrandom1 += Eng[rand2];      

	}

	

	for (int i = 0; i < str; i++)       // ���� ���ڿ� B
	{
		int rand2 = rand() % Eng.size();
		endrandom2 += Eng[rand2];

	}
	cout << "������ ���ڿ� A : " << engrandom1 << endl;
	cout << "������ ���ڿ� B : " << endrandom2 << endl;

	unordered_set<char> charC(endrandom2.begin(), endrandom2.end());
	string engrandom3; //�ߺ� ���ŵ� ���ڿ� ����
	vector<char> Eng2; // ���ŵ� ���ڵ��� �����Һ���

	for (char c : engrandom1) { //���ڿ� A�� ��ȸ
		if (charC.find(c) == charC.end()) { //���ڿ� B�� ���� ���� ����3�� �߰�
			engrandom3 += c;
		}
		else { 
			Eng2.push_back(c);
		}
	}

	cout << "�ߺ��� ���ڰ� ������ ���ڿ� A: " << engrandom3 << endl;

	cout << "������ ���ڵ�: ";
	for (char c : Eng2) {
		cout << c;
	}
	cout << endl;

	return 0;


	// ��� ���
	//cout << "�ߺ��� ���ڰ� ������ ���ڿ� A: " << result_A << endl;

	/*for()*/
	// ���ڿ� A ���� B�� ���ڵ��� �����ϰ� ������ؾ���
	// 1 . ���ڿ� �״�� ���� ���Ͽ� �ߺ��Ȱ��� ����
	// 2 . ���ڿ��� ���ڷ� ��ȯ�Ͽ��� ���Ͽ� ���� 
	// 3 . 


	//for (auto it = Eng.begin(); it != Eng.end(); ++it) ó�� ���Ǻ��� �߸� ����
	//{
	//	if(*it == A || *it != B)


	//}


	/*
	for (auto it = Eng.begin(); it != Eng.end(); ++it)
	{
		int random = rand();
		Eng.push_back(random);
		for (int i = 0; i < str; i++)
		{
			engrandom += *it;

		}

		cout << *it << " ";

	}
	*/
}