#include "h.h"
#include <vector>
#include "Music.h"

#include "Util.h"



//void maxInt<T>(T x) {} //���ø�?

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

	//maxInt(< int>10); //���ø�?
	// 
	//���� �����? 
	
	//vector<int> myVector; //������ ���� ����
	//vector<int> myVector = {1,2,3,4,5}; 
	vector<int> myVector(5); //int������ ���͸� ���� ( ������ ������ (5��) ����)

	//������ ���� �� �迭�� �ش� �� ����
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


	//������ ����� ���� �����Ҷ�

	for (int i = 0; i < myVector.size(); i++)
		//for(int i : myvector)
	{
		myVector[i] += 5;
		//int value = myVector[i];
		int value = myVector.at(i); //�迭���� �ε����� ���������� �Ͱ� ������ �Լ�
		cout << "myVector[" << i << "]=" << value << endl;
	}

	cout << "====================================\n";

	//��� �߰�

	myVector.push_back(50);

	for (int i = 0; i < myVector.size(); i++)
	{
		
		cout << "myVector[" << i << "]=" << myVector[i] << endl;
	}
	
	
	cout << "====================================\n";
	//��� ����
	myVector.pop_back();
	myVector.pop_back();
	myVector.pop_back();

	for (int i = 0; i < myVector.size(); i++)
	{
		cout << "myVector[" << i << "]=" << myVector[i] << endl;
	}


	return 0;
}