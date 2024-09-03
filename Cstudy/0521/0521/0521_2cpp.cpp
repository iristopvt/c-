#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <time.h>

using namespace std;

//std::list	
//구현: 이중연결리스트 구현 C++ 표준라이브러리 컨테이너
//요소의 삽입과 삭제가 빠르지만, 임의 정급이 느린 특징이다.

//선언 , 초기화 
list<string> mystringList;

list<int> myList; // 초기화 사이즈 5;
//list<int> mulist(10); // 초기화 사이즈 5
//list<int> myIntList = { 1,2,3,4,5,6 };

//리스트 연습문제

//리스트에 랜던함수이용 30개 정도를 랜던값을 저장 
// 짝수만 삭제하고 홀수만 남게하는 프로그램 작성
// 홀수맘ㄴ 남은것을 사이즈하고 홀수 숫자를 출력 


int main()
{

	srand(time(NULL));

	for (int i = 0; i < 30; i++)
	{
		int random = rand() % 100; // 0부터 100까지 랜덤한 수
		 myList.push_back(random);

		/* if (random % 3 ==0)
		 {

		 }*/
	}


	for (auto it = myList.begin(); it != myList.end(); ++it) //mylist 처음(begin)부터 끝(end)까지 출력을하겟다
	{
		int a = *it;

		//myList.remove_if(a % 2 != 0);

		if (a % 2 != 0)
		{
			std::cout << a << "\n";
			//remove_if 을 사용하여 여러 요소를 제거할수 있음 
		}

	}
	std::cout << "Mylist size : " << myList.size() << endl;


	



	//// 리스트의 모든 요소 출력
	//std::cout << "랜덤한 값들: ";
	//for (const auto& num : myList) {
	//	std::cout << num << " ";
	//}
	//std::cout << std::endl;
	//요소 추가 

	/*
	myList.push_back(6);
	myList.push_back(16);
	myList.push_front(10);
	myList.push_front(100);
	*/

	// 100,10,6,16

	//cout << "Mylist size : " << myList.size() << endl; // mylist 사이즈 몇개인지 출력

	//cout << myList.front() << endl; // 맨앞 출력 100
	//cout << myList.back() << endl; // 맨뒤 출력 16


	//요소 삭제
	//myList.pop_back(); // 16 삭제	
	//myList.pop_front(); // 100 삭제

	
	//cout << myList.front() << endl; // 맨앞 출력 10
	//cout << myList.back() << endl; // 맨뒤 출력 6
	//cout << "Mylist size : " << myList.size() << endl; // mylist 사이즈 몇개인지 출력 
	// 요소를 삭제해서 사이즈 2개 출력


	/*
	auto it = myList.begin();

	advance(it, 2);
	cout << *it << endl;

	// (it+2) - > 6이 삭제됨
	// 삭제화 it가 null 값 (쓰레기값이 지정되서 초기화를 해줘야함 )
	myList.erase(it);  //100, 10, 16

	//요소 추가
	it = myList.begin();
	advance(it, 2);
	myList.insert(it, 1000); // 100,10,10000,16

	//myList.remove(1);

	//myList.clear();

	cout << "Mylist size : " << myList.size() << endl; // mylist 사이즈 몇개인지 출력 


	for (auto it = myList.begin(); it !=myList.end(); ++it) //mylist 처음(begin)부터 끝(end)까지 출력을하겟다
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