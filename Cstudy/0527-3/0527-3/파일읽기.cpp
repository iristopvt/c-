#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{


    string line;
    ifstream inputFile("file.txt");
    if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            cout << line << endl;
        }
        inputFile.close();
    }
    else {
        cout << "������ �� �� �����ϴ�." << endl;
        return 1;
    }


}




