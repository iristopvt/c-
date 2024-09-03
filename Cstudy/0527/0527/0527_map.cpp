#include <iostream>
#include <map>
#include <vector>

using namespace std;

//std::map;



//맵 선언
//map <key값(중복불가), value>
map<int, int> mapInt = { {1,2}, { 2,10 },{10,1000},{3,51} };
map<int, string> mapString = { {10,"helloworld"},{20,"hello"}};





vector<int> veInt;
vector<string> vecString;
//vector[0], int출력값

int main()
{
	//요소 추가 
	//mapInt[key값] = value값;
	mapString[10] = "Hello world";  // => {{1,"helloworld"},{20,"hello"} }



	// 접근방법
	//int c = mapInt[10]; //value값 1000
	string str = mapString[10]; //valte값 "helloworld"
	
	//삭제
	//mapInt.erase(key값); //요소가 삭제



	

	mapInt.erase(1); // 
	mapInt.erase(2); 
	mapInt.erase(10);
	

	cout << mapInt.size() <<endl;
	
	//Iterator int* p
	// 첫번째 방법 
	map<int, int>::iterator it = mapInt.begin();

	for (auto it = mapInt.begin(); it != mapInt.end(); ++it)
	{
		cout << "key : " << it->first << " value : " << it->second << "\n";

	}
	// 두번째 방법         // 첫번째랑 두번째랑 출력같음 
	for (const auto& it : mapInt)
	{
		cout << it.first << " " << it.second << endl;
	}

	while (it != mapInt.end())
	{
		cout << it->first << " " << it->second << endl;
		++it;
			if (it == mapInt.end())
			{
				break;
			}
	}


	/* 위에 for문들이랑 뭐가 다른지 다시 한번 확인해 보기
	auto range = mapInt.equal_range(2);

	for (auto it = range.first; it != range.second; ++it)
	{
		cout << it->first << " :" << it->second << endl;
	}*/


	cout << mapString.size();
	



	return 0;
}
	