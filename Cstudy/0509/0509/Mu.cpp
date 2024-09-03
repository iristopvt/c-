#include "Mu.h"
#include <fstream>
#include "h.h"


// 파일 입출력 관련하여 csv를 이용하여 한파일로 만들어서 출력하는건?  

int jpop1()
{
	string readText; // 파일에서 문자열 읽기
	ifstream inpuFile("exeample.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "라인번호 : " << i << "\t" << readText << endl;
			i++;
		}
		inpuFile.close();
	}
	else
	{
		cout << "unble to open the file for reading \n";
		return 1;
	}


}
int kpop1()
{
	string readText; // 파일에서 문자열 읽기
	ifstream inpuFile("exeamplekpop.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "라인번호 : " << i << "\t" << readText << endl;
			i++;
		}
		inpuFile.close();
	}
	else
	{
		cout << "unble to open the file for reading \n";
		return 1;
	}


}int rock1()
{
	string readText; // 파일에서 문자열 읽기
	ifstream inpuFile("exeamplerock.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "라인번호 : " << i << "\t" << readText << endl;
			i++;
		}
		inpuFile.close();
	}
	else
	{
		cout << "unble to open the file for reading \n";
		return 1;
	}


}


Music::Music(string Genre, string Title, string name)
{
}

void Music::genre()
{
	if (Genre == "jpop")
		jpop1();
	else if (Genre == "kpop")
		kpop1();
	else if (Genre == "rock")
		rock1();
	else
		cout << "Invalid genre\n"; // 잘못된 장르일 경우 메시지 출력
}



