#include "h.h"
#include <vector>
#include "Music.h"

#include "Util.h"

void mm()
{
	cout << "\t\t\t============================================================\n";
	cout << "\t\t\t======================�޴��� �����ϼ���======================\n";
	cout << "\t\t\t-------------------------------------------------------------\n";
	cout << "\t\t\t\t 1: �帣�˻� 2:�뷡�����Է� 3:�����̸��Է� \n";
	cout << "\t\t\t\t\t 4:��ü����Ʈ ��� 5:����";
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


	//����2
	//���Ϳ� ����Ʈ ������ ���� �ϴ� ���
	vector<int> myInt(6);
	//int* pInt = myInt.data();
	// // �����ͷ� �����ؼ� �ش�� �迭�� �����Ҷ�
	//*(pInt + 0) = 100; // myInt[0] ���� �ϰ� ���� �� [0]�� 100  

	

	//const_cast ��뿹
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
	//			cout << "���α׷��� �����մϴ�" << endl;
	//			return 0;
	//		}
	//		
	//	default:
	//		break;
	//	}

	//}



	return 0;
}