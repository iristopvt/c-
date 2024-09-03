#include "h.h"
#include <fstream>

int main()
{

	//string readText; // 파일에서 문자열 읽기
	//ifstream inpuFile("exeample.txt",);  

	//if (inpuFile.is_open())
	//{
	//	int i = 1;
	//	while (getline(inpuFile, readText));
	//	{
	//		cout << "라인번호 : " << i << "\t" << readText << endl;
	//		i++;
	//	}
	//	inpuFile.close();



	//}
	//else
	//{
	//	cout << "unble to open the file for reading \n";
	//	return 1;
	//}


    fstream file("example.txt", ios::in | ios::out | ios::app); // 읽기, 쓰기, 파일 끝에 추가 입력하기
    if (file.is_open())
    {
        file << "hello world" << endl; // 파일 맨끝에 추가
        file.seekg(0); // 파일의 시작위치로

        string line;
        int i = 1;

        while (getline(file, line)) 
        {
            cout << "라인번호 : " << i << "\t" << line << endl;
            i++;
        }

        file.close();
    }
    else
    {
        cout << "파일을 읽을 수 없습니다.\n";
        return 1;
    }

    return 0;
}

