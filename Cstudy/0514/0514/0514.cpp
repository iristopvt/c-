#include "h.h"
#include <vector>
#include "Music.h"

#include "Util.h"



//void maxInt<T>(T x) {} //템플릿?

void maxInt(int x){}
void maxInt(float x) {}



int main()
{

	vector<MusicInfo> myMusicInfo;

	Util myutil;

	//vector<MusicInfo>& musicinfos = myMusicInfo;
	myutil.LoadMusicData("MusicBaseData.csv", myMusicInfo);



	//MusicInfo* pmusicInfo = myMusicInfo.data();
	//(pmusicInfo)->Display();


	//test
	//for (int i = 0; i < 100; i++)
	//{
	//	 (pmusicInfo+i)->Display();
	//}
	//(pmusicInfo)->Display();


	//예시2
	//벡터에 포인트 변수로 접근 하는 방식
	vector<int> myInt(6);
	//int* pInt = myInt.data();
	// // 포인터로 접근해서 해당된 배열값 수정할때
	//*(pInt + 0) = 100; // myInt[0] 넣음 하고 같은 식 [0]에 100  



	//const_cast 사용예
	const int* pInt = myInt.data();

	int* ptr = const_cast<int*>(pInt);

	*(ptr + 4) = 30;

	//maxInt(< int>10); //템플릿?
	// 
	//벡터 사용방법? 
	
	//vector<int> myVector; //사이즈 없이 선언
	//vector<int> myVector = {1,2,3,4,5}; 
	vector<int> myVector(5); //int형태의 벡터를 만듬 ( 생성할 사이즈 (5개) 선언)

	//사이즈 선언 후 배열에 해당 값 변경
	myVector[0] = 1;
	myVector[1] = 10;
	myVector[2] = 20;
	myVector[3] = 30;
	myVector[4] = 40;

	int vectorSize = myVector.size();

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "]=" << myVector[i] << endl;
	}
	cout << "====================================\n";


	//벡터의 요소의 값을 변경할때

	for (int i = 0; i < myVector.size(); i++)
		//for(int i : myvector)
	{
		myVector[i] += 5;
		//int value = myVector[i];
		int value = myVector.at(i); //배열에서 인덱스로 값을얻어오는 것과 동일한 함수
		cout << "myVector[" << i << "]=" << value << endl;
	}

	cout << "====================================\n";

	//요소 추가

	myVector.push_back(50);

	for (int i = 0; i < myVector.size(); i++)
	{
		
		cout << "myVector[" << i << "]=" << myVector[i] << endl;
	}
	
	
	cout << "====================================\n";
	//요소 삭제
	myVector.pop_back();
	myVector.pop_back();
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "]=" << myVector[i] << endl;
	}


	return 0;
}