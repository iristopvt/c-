#include "h.h"



int main()
{
    // ���Ͽ��� ���ڿ� �б�
   // string readText;
    
    string name1;
    cin >> name1;
   

    ifstream readFile;
    readFile.open("example.txt"); // ���� ����
    if (readFile.is_open()) {

        
        while (!readFile.eof())
        {
            string str;
            getline(readFile, str); // ���پ� ���Ͽ��� ���ڿ� ���� 
            cout << str << endl; // ���� ���ڿ����� �� ��� 

        }

        readFile.close();
    }
    else
    {
        cout << "�Է��� ������ �뷡�� �����ϴ�\n";
    }
    


}

void open()
{

    ifstream readFile;
    readFile.open("example.txt"); // ���� ����
    if (readFile.is_open()) {


        while (!readFile.eof())
        {
            string str;
            getline(readFile, str);
            cout << str << endl; // ���� ���ڿ� ��� 

        }

        readFile.close();
    }

}