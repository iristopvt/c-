#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

//iterator (�ݺ�)

//typedef vector<int>::iterator It_INT;
typedef list<int>::iterator It_INT;


int main() {


	int	array[5];

	//vector<int> vec = { 1,2,3,4,5 }; //size 5 �� ���� ����

	list<int> vec = { 1,2,3,4,5 };

	
	cout << vec.size() << endl;
	vec.push_back(10);
	vec.push_front(100);
	
	It_INT it_strat =  vec.begin(); //������ ��ó�� 1
	It_INT it_end = vec.end(); // ������ �� 5


	
for (auto it_strat = vec.begin(); it_strat != vec.end(); ++it_strat) {

		/*int num = *it_strat;
		num *= 2;*/
		*it_strat *= 2;
		cout << *it_strat << " ";
	}
	cout << endl;
	//C+11 , C+17, C+20
	
	//������� for ���� �����
	for (const int value : vec)
	{
		cout << value << endl;
	}


	cout << endl;
	cout << vec.size() << endl;



	return 0;
}
