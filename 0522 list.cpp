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
		List.sort(); // List 안에 숫자들을 정렬

	}
	//어떤수가 출력이 되었는지
	cout << "랜덤으로 출력된 숫자 리스트\n";
	for (auto i = List.begin(); i != List.end(); ++i)
	{

		cout << * i << " ";
	} 
	

	list<int> copi(List); // 랜덤으로 출력된 숫자 리스트를 카피 
	copi.sort(); //카피한 숫자들 정렬

	cout <<  "\n=================" << endl;

	

	List.unique(); // 정렬된 숫자에서 연속적으로 중복되는 요소를 제거 
					// 요소가 중복으로 나오지 않으면 제거하지 않음 ex) 10,10,50,50 이런식은 제거 



	for (auto i = List.begin(); i != List.end(); ++i) // 정렬후 삭제한 숫자 리스트 출력
	{
		cout << *i << " ";
	}
	cout << "\nList size : " << List.size() << endl; //랜덤숫자  사이즈


	

	
	// 삭제된 숫자 찾기
	list<int> removedNumbers; //삭제된 숫자들을 저장할 리스트를 생성
	auto itList = List.begin(); // 중복 제거된 리스트의 시작

	for (auto itCopi = copi.begin(); itCopi != copi.end(); ++itCopi)  //원본 리스트
	{
		if (itList == List.end() || *itCopi != *itList)  //제거된 리스트 끝 원본 리스트, 중복 제거된 리스트의 현재 요소와 다를떄
		{
			removedNumbers.push_back(*itCopi); // 새로운 리스트에 추가
		}
		else {
			++itList;
		}
	}


	// 삭제된 숫자 리스트 출력
	cout << "\n삭제된 숫자 리스트\n";
	for (auto i = removedNumbers.begin(); i != removedNumbers.end(); ++i) {
		cout << *i << " ";
	}
	cout << "\n";

	return 0;
}


