#include "h.h"
#include <fstream>

int main()
{

	//string readText; // ���Ͽ��� ���ڿ� �б�
	//ifstream inpuFile("exeample.txt",);  

	//if (inpuFile.is_open())
	//{
	//	int i = 1;
	//	while (getline(inpuFile, readText));
	//	{
	//		cout << "���ι�ȣ : " << i << "\t" << readText << endl;
	//		i++;
	//	}
	//	inpuFile.close();



	//}
	//else
	//{
	//	cout << "unble to open the file for reading \n";
	//	return 1;
	//}


    fstream file("example.txt", ios::in | ios::out | ios::app); // �б�, ����, ���� ���� �߰� �Է��ϱ�
    if (file.is_open())
    {
        file << "hello world" << endl; // ���� �ǳ��� �߰�
        file.seekg(0); // ������ ������ġ��

        string line;
        int i = 1;

        while (getline(file, line)) 
        {
            cout << "���ι�ȣ : " << i << "\t" << line << endl;
            i++;
        }

        file.close();
    }
    else
    {
        cout << "������ ���� �� �����ϴ�.\n";
        return 1;
    }

    return 0;
}

