#include <iostream>
#include <set>
#include <random>
#include <vector>

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

	for (int i = 0; i < str; i++)
	{
		int rand2 = rand() % Eng.size();
		engrandom1 += Eng[rand2];

	}

	cout << "������ ���ڿ� A : " << engrandom1 << endl;

	for (int i = 0; i < str; i++)
	{
		int rand2 = rand() % Eng.size();
		endrandom2 += Eng[rand2];

	}
	cout << "������ ���ڿ� B : " << endrandom2 << endl;

	vector<char> removedchar;
	auto A = engrandom1;
	auto B = endrandom2;

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