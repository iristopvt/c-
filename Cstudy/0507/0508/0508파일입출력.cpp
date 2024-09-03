#include "h.h"
#include <fstream>


int main()
{

    //파일 입출력관련하여 집에서 하드코딩 말고 함수로 만들어서  해보기 
    // 
    // 파일에 쓸 문자열들
    string textToWrite = "hello, world!";
    string textToWrite1 = "수구";
    string textToWrite2[2] = { "수고하세요", "수고요" };

    // 파일에 문자열 쓰기


    ofstream outputFile("example.txt");
    if (outputFile.is_open())
    {
        outputFile << textToWrite << endl;
        outputFile << textToWrite1 << endl;
        for (int i = 0; i < 2; i++)
        {
            outputFile << textToWrite2[i] << endl;
        }
        outputFile.close();
        cout << "example.txt에 정상적으로 저장되었습니다.\n";
    }
    else
    {
        cout << "파일을 정상적으로 저장하지 못했습니다. example.txt 파일이 있는지 확인해주세요.\n";
        return 1;
    }
}