#include "h.h"
#include <vector>
#include "Music.h"

#include "Util.h"

void mm()
{
	cout << "\t\t\t============================================================\n";
	cout << "\t\t\t======================메뉴를 선택하세요======================\n";
	cout << "\t\t\t-------------------------------------------------------------\n";
	cout << "\t\t\t\t 1: 장르검색 2:노래제목입력 3:가수이름입력 \n";
	cout << "\t\t\t\t\t 4:전체리스트 출력 5:종료";
}

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
	














	//while (true)
	//{
	//	int num;
	//	mm();
	//	cin >> num;

	//	switch (num)
	//	{

	//		case 1:
	//		{
	//			

	//		}

	//		case 2:
	//		{


	//		}

	//		case 3:
	//		{


	//		}
	//		case 4:
	//		{
	//			for (int i = 0; i < myMusicInfo.size(); i++)
	//			{
	//				cout << myMusicInfo[i].getTitle() << endl;
	//			}
	//			break;
	//		}
	//		
	//		case 5:
	//		{
	//			cout << "프로그램을 종료합니다" << endl;
	//			return 0;
	//		}
	//		
	//	default:
	//		break;
	//	}

	//}



	return 0;
}