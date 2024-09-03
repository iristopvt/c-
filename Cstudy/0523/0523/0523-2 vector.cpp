#include <iostream>
#include <set>
#include <vector>
#include <list>
using namespace std;

//iterator (반복)

//typedef vector<int>::iterator It_INT;
typedef list<int>::iterator It_INT;


int main() {


	int	array[5];

	//vector<int> vec = { 1,2,3,4,5 }; //size 5 인 벡터 생성

	list<int> vec = { 1,2,3,4,5 };

	
	cout << vec.size() << endl;
	vec.push_back(10);
	vec.push_front(100);
	
	It_INT it_strat =  vec.begin(); //벡터의 맨처음 1
	It_INT it_end = vec.end(); // 벡터의 끝 5


	
for (auto it_strat = vec.begin(); it_strat != vec.end(); ++it_strat) {

		/*int num = *it_strat;
		num *= 2;*/
		*it_strat *= 2;
		cout << *it_strat << " ";
	}
	cout << endl;
	//C+11 , C+17, C+20
	
	//범위기반 for 루프 사용방법
	for (const int value : vec)
	{
		cout << value << endl;
	}


	cout << endl;
	cout << vec.size() << endl;



	return 0;
}
