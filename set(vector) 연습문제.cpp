#include <iostream>
#include <set>
#include <random>
#include <vector>
#include <string>
#include <ctime>
#include <unordered_set>
using namespace std;

int main()
{
	//1 a-z, A-Z 배열만들기 // 
	// 2 랜덤하게 선택해서 최대 15자로 된 문자열 //random = rand()
	// 3 문자열을 2개 만듬 A,B 
	// 4 문자열 비교 같은  A-B 중복된 문자열을 삭제한 A룰 출력 


	vector<char> Eng; // A-Z 까지의 배열


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

	for (int i = 0; i < str; i++)       // 랜덤 문자열 A
	{
		int rand2 = rand() % Eng.size();
		engrandom1 += Eng[rand2];      

	}

	

	for (int i = 0; i < str; i++)       // 랜덤 문자열 B
	{
		int rand2 = rand() % Eng.size();
		endrandom2 += Eng[rand2];

	}
	cout << "랜덤한 문자열 A : " << engrandom1 << endl;
	cout << "랜덤한 문자열 B : " << endrandom2 << endl;

	unordered_set<char> charC(endrandom2.begin(), endrandom2.end());
	string engrandom3; //중복 제거된 문자열 공간
	vector<char> Eng2; // 제거된 문자들을 저장할벡터

	for (char c : engrandom1) { //문자열 A를 순회
		if (charC.find(c) == charC.end()) { //문자열 B에 없는 문자 랜덤3에 추가
			engrandom3 += c;
		}
		else { 
			Eng2.push_back(c);
		}
	}

	cout << "중복된 문자가 삭제된 문자열 A: " << engrandom3 << endl;

	cout << "삭제된 문자들: ";
	for (char c : Eng2) {
		cout << c;
	}
	cout << endl;

	return 0;


	// 결과 출력
	//cout << "중복된 문자가 삭제된 문자열 A: " << result_A << endl;

	/*for()*/
	// 문자열 A 에서 B의 문자들을 제외하고 출력을해야함
	// 1 . 문자열 그대로 서로 비교하여 중복된값을 제거
	// 2 . 문자열을 문자로 전환하여서 비교하여 제거 
	// 3 . 


	//for (auto it = Eng.begin(); it != Eng.end(); ++it) 처음 조건부터 잘못 정함
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