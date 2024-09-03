#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <random>
#include <time.h>
#include <algorithm>

using namespace std;

list<int> List;

//		List.unique();  

//void removeCommonElements(list<int>& list1, list<int>& list2)
//{
//	for (auto it = list1.begin(); it != list1.end(); ) // 리스트를 처음부터 끝까지 확인 
//	{
//		if (find(list2.begin(), list2.end(), *it) != list2.end()) // 다른 리스트를 처음부터 끝까지 확인 
//		{
//			it = list1.erase(it); // 삭제 후 다음 위치로 이동
//		}
//		else {
//			++it; // 다음 요소로 이동
//		}
//	}
//}

int main()
{
	srand(time(NULL));

	for (int i = 0; i <= 20; i++)
	{
		int random = rand() % 20;
		List.push_back(random);
		List.sort();

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

	// 복사한 리스트와 중복삭제 리스트 remove로 비교하여 같은값은 삭제 

	//List.sort(); // List 안에 숫자들을 정렬
	List.unique(); // 정렬된 숫자에서 연속적으로 중복되는 요소를 제거 
					// 요소가 중복으로 나오지 않으면 제거하지 않음 ex) 10,10,50,50 이런식은 제거 



	for (auto i = List.begin(); i != List.end(); ++i) // 정렬후 삭제한 숫자 리스트 출력
	{

		cout << *i << " ";
	}


	cout << "\nList size : " << List.size() << endl; //랜덤숫자  사이즈


	

	
	for (auto a = copi.begin(); a != copi.end(); ++a)
	{
		cout << *a << " ";
	}
	
	cout << "\n";

	//for (auto i = copi.begin(); i != copi.end(); )
	//{
	//	for (auto j = List.begin(); j != List.end(); ++j)
	//	{

	//	}
	//
	//	
	//}

}


