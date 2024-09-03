#include <iostream>
#include <set>

using namespace std;

//set �v¡
// 1.�ߺ� ������
// 2. �ڵ� ����, ��������
// 3. �˻�, ����, ���� ������.

//�ֿ� �Լ�
// insert(��) //���� �߰� ,�ߺ��Ȱ��� �߰���������.
// erase(��)  //���� ã�Ƽ� ����
// find(��)	  // ��Ī�� ���� ã����. ��ã���� end()
//  begin(),  end() //����, ���� ����Ű�� ���ͷ����͸� ��ȯ�Ѵ�.


int main()
{
	set<int> mySet; //size 0

	if (mySet.empty())
	{
		mySet.insert(5);
		mySet.insert(15);
		mySet.insert(30);
		mySet.insert(2); //�ڵ� ����
	}

	mySet.insert(30); //�ߺ� ó�� 

	for (int value : mySet)
	{
		cout << value <<" ";
	}
	
	cout << endl;



	cout << "erase(30)_test" << endl;
	mySet.erase(10);

	

	for (int value : mySet)
	{
		cout << value << " ";
	}

	cout << endl;	

	cout << mySet.size() << endl;

	//find
	
	auto it = mySet.find(25);

	//cout << *it << endl;

	if (it != mySet.end()) 
	{
		// ���� ã�Ҵ�.
		cout << " 25 ���� ã�ҽ��ϴ�." << endl;

	}
	else
	{ //���� ��ã��
		cout << "25���� �����ϴ�." << endl;
		mySet.insert(25);
	}



	//for (int value : mySet)

	for (auto it = mySet.begin(); it != mySet.end(); ++it)
	{
		cout << *it << " ";
	}

	cout << endl;
	cout << mySet.size() << endl;


	return 0;
}