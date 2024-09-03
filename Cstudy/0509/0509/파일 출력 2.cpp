#include "h.h"



int main()
{
    // 파일에서 문자열 읽기
   // string readText;
    
    string name1;
    cin >> name1;
   

    ifstream readFile;
    readFile.open("example.txt"); // 파일 열기
    if (readFile.is_open()) {

        
        while (!readFile.eof())
        {
            string str;
            getline(readFile, str); // 한줄씩 파일에서 문자열 읽음 
            cout << str << endl; // 읽은 문자열에서 입 출력 

        }

        readFile.close();
    }
    else
    {
        cout << "입력한 제목의 노래가 없습니다\n";
    }
    


}

void open()
{

    ifstream readFile;
    readFile.open("example.txt"); // 파일 열기
    if (readFile.is_open()) {


        while (!readFile.eof())
        {
            string str;
            getline(readFile, str);
            cout << str << endl; // 읽은 문자열 출력 

        }

        readFile.close();
    }

}