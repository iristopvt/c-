#include <iostream>
#include <string>
#include <vector>
// �Լ�,���ø�,����
using namespace std;

//�Լ� ���� 
// �����Լ�
//int add(int a, int b);
////float�� ���ϴ� �Լ�����
//float add(float a, float b);
////double �Լ�����
//double add(double a, double b);
//
//string add(string a, string b);

//���� ���� ������ Ÿ�Կ� �������� �Լ��� �ۼ��ϴ� ��� C++���ø�

//���ø� �Լ��� �� int double float ��� ���� �Լ��� ���� �����ʿ���� ���ø� �Լ� �ϳ��� ���� �Ǵ°ǰ�
template<typename T>//, typename T1>
T add(T a, T b)
{
	T c = a + b;
	return c;
}

template<typename T>
class MyClass
{
private:
	T data;
public:
	MyClass(T d) : data(d){}
	T getData() { return data; }

};

/*
�Լ�
	=����=
  - template<typename T> 
	//���ø� �Լ��� �� int double float ��� ���� �Լ��� ���� �����ʿ���� ���ø� �Լ� �ϳ��� ���� �Ǵ°ǰ�
	template<typename T>//, typename T1>
	T add(T a, T b)
	{
		T c = a + b;
		return c;
	}
  =���=
	�Լ�ȣ��� �����Ϸ��� Ÿ���� �߷��Ͽ� �ν��Ͻ�ȭ
	����� �Ϲ��Լ�ó�� ȣ��

 Ŭ����
	 =����=
	template<typename T>
	class MyClass
	{
	private:
	T data;
	public:
	MyClass(T d) : data(d){}
	T getData() { return data; }
	}

	=���=
	�ν��Ͻ�ȭ�� ��ü�� ���� �������
*/



int main() 
{
	int c =add(10, 8);
	float d = add(10.0f,8.0f);
	double e = add(10.333, 8.000);
	//string f = add("dktlqkf", "tltlqkf");


	MyClass<string> intobj("telqkf");

	cout << intobj.getData() << endl;

	MyClass<double> doubleob(1000.353);

	cout << doubleob.getData() << endl;

	//	���� = > �͸��Լ��� �����ϰ� �����ϴµ� ���Ǵ� �Լ��� ���α׷��� ����
	// �����ϰ� ǥ���ϰ� �ڵ带 ����ȭ �ϴµ� Ȱ���.

	//������ ������ ���ϴ� ���� �Լ�
	//�����Լ� �����
	//[&],[=] ĸ�� ���� 
	// [&] �ܺκ����� �����Լ� ������ ������ ĸó�Ѵ�. 
	//�� �����Լ������� �ܺκ����� ������ �� �ִ�.
	int f = 5;
	auto add = [&f](int x, int y)-> int
		{
			f++;
			x += f;
			return x + y;
		};

	int result = add(3, 10);

	cout << "�������ǰ���� : " << result << endl;
	
	//2. [=] : �ܺκ����� �Լ������� ������ ����ϴ°�, �б� ����
	auto x = 5;
	auto lamda = [=]() 
		{
			int y = x * 2;
			cout << y << endl;

		};

	lamda();

	return 0;
}

//�Լ������

int add(int a, int b)
{
	int c = a + b;

	return c;
}
float add(float a, float b)
{
	float c = a + b;

	return c;
}
double add(double a, double b)
{
	double c = a + b;

	return c;
}

string add(string a, string b)
{
	string c = a + b;

	return c;
}



