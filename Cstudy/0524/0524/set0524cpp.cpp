#include <iostream>
//중복허용하지않음.자동정렬
#include <set>
//중복허용하지않음.자동정렬이 안되는것
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
	}//정렬은 안됨

	cout << endl;

	if (myuo_Set.find(100) != myuo_Set.end())
	{
		cout << "찾으려는 숫자가 있습니다" << endl;
	}
	else
	{
		cout << "찾으려는 숫자가 없습니다" << endl;
	}

	myuo_Set.erase(100);

	for (int num : myuo_Set)
	{
		cout << num << " ";
	}//정렬은 안됨


	int cc = getchar();
	

	return 0;
}