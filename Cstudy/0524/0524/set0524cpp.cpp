#include <iostream>
//�ߺ������������.�ڵ�����
#include <set>
//�ߺ������������.�ڵ������� �ȵǴ°�
#include <unordered_set>

using namespace std;

int main()
{
	set<int> mySet;
	unordered_set<int> myuo_Set;

	mySet.insert(100);
	mySet.insert(10);
	mySet.insert(20);
	mySet.insert(10);
	
	for (int num : mySet)
	{
		cout << num << " ";
	}
	
	cout << endl;

	myuo_Set.insert(100);
	myuo_Set.insert(10);
	myuo_Set.insert(20);
	myuo_Set.insert(10);

	for (int num : myuo_Set)
	{
		cout << num << " ";
	}//������ �ȵ�

	cout << endl;

	if (myuo_Set.find(100) != myuo_Set.end())
	{
		cout << "ã������ ���ڰ� �ֽ��ϴ�" << endl;
	}
	else
	{
		cout << "ã������ ���ڰ� �����ϴ�" << endl;
	}

	myuo_Set.erase(100);

	for (int num : myuo_Set)
	{
		cout << num << " ";
	}//������ �ȵ�


	int cc = getchar();
	

	return 0;
}