#include "Mu.h"
#include <fstream>
#include "h.h"


// ���� ����� �����Ͽ� csv�� �̿��Ͽ� �����Ϸ� ���� ����ϴ°�?  

int jpop1()
{
	string readText; // ���Ͽ��� ���ڿ� �б�
	ifstream inpuFile("exeample.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "���ι�ȣ : " << i << "\t" << readText << endl;
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
	string readText; // ���Ͽ��� ���ڿ� �б�
	ifstream inpuFile("exeamplekpop.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "���ι�ȣ : " << i << "\t" << readText << endl;
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
	string readText; // ���Ͽ��� ���ڿ� �б�
	ifstream inpuFile("exeamplerock.txt");

	if (inpuFile.is_open())
	{
		int i = 1;
		while (getline(inpuFile, readText));
		{
			cout << "���ι�ȣ : " << i << "\t" << readText << endl;
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
		cout << "Invalid genre\n"; // �߸��� �帣�� ��� �޽��� ���
}



