#include "h.h"
#include <fstream>


int main()
{

    //���� ����°����Ͽ� ������ �ϵ��ڵ� ���� �Լ��� ����  �غ��� 
    // 
    // ���Ͽ� �� ���ڿ���
    string textToWrite = "hello, world!";
    string textToWrite1 = "rock";
    string textToWrite2[2] = { "�����ϼ���", "rock" };

    // ���Ͽ� ���ڿ� ����


    ofstream outputFile("examplerock.txt");
    if (outputFile.is_open())
    {
        outputFile << textToWrite << endl;
        outputFile << textToWrite1 << endl;
        for (int i = 0; i < 2; i++)
        {
            outputFile << textToWrite2[i] << endl;
        }
        outputFile.close();
        cout << "example.txt�� ���������� ����Ǿ����ϴ�.\n";
    }
    else
    {
        cout << "������ ���������� �������� ���߽��ϴ�. example.txt ������ �ִ��� Ȯ�����ּ���.\n";
        return 1;
    }
}