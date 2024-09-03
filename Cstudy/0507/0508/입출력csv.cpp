#include "h.h"



int main()
{
	//csv ���ϰ��
	string filename = "data.csv";

	// ���� ����
	ifstream file(filename);
if (!file.is_open())
{
	cerr << "Failed to open the file: " << filename << endl;
	return 1;
}

//���Ͽ��� �� ������ ������ �б�
string line;
while (getline(file, line))
{	//���� ��ǥ�� �����ϱ� ���� stringstream ���
	stringstream ss(line);
	string field;
	vector<string> fields;

	//��ǥ�� ���ҵ� ��  �ʵ� �б�
	while (getline(ss, field, ','))
	{
		fields.push_back(field);
	}

	//�� �ʵ� ���
	for (const auto& f: fields)
	{
		cout << f << " ";
	}
	cout << endl;
}
//���� �ݱ�
file.close();
}