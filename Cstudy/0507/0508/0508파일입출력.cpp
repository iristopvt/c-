#include "h.h"
#include <fstream>


int main()
{

    //���� ����°����Ͽ� ������ �ϵ��ڵ� ���� �Լ��� ����  �غ��� 
    // 
    // ���Ͽ� �� ���ڿ���
    string textToWrite = "hello, world!";
    string textToWrite1 = "����";
    string textToWrite2[2] = { "�����ϼ���", "�����" };

    // ���Ͽ� ���ڿ� ����


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
        cout << "example.txt�� ���������� ����Ǿ����ϴ�.\n";
    }
    else
    {
        cout << "������ ���������� �������� ���߽��ϴ�. example.txt ������ �ִ��� Ȯ�����ּ���.\n";
        return 1;
    }
}