#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
c++ ���̹� ��Ģ �� ���ѻ���
1. �ĺ��ڶ�
	����, �ĺ���, Ŭ����, ���̽����̽�, ��� ���� ��Ҹ� �����ϴ� �� ���Ǵ� �̸� 

2. ���̹� ��Ģ
   1) ����Ҽ� �ִ� ����
   - ���ĺ� : �ҹ���, �빮��
   - ���� 
   - ���� : _

   2) ù���� ��Ģ
    -���ĺ�, ���� �� �����ؾ� �Ѵ�.
	- ���ڸ� ����Ҽ� ����.

	3) ��ҹ��� ����
	- Value, value ���� �ٸ��� �νĵ�.

	4) ���� ����
	- ���� ������ ����.

	5) ����� ����
	- c++ �����(Ű����)
		ex) int, void, class, return

3. ���� - �ڵ��� ������, ��������?
	1) ���� �� �Լ�
	-myvalueadd, calcluateSum
	-my_value_add, calcluate_Sum
	-Cmyclass, m_ , p_
	
	2) Ŭ���� 
	-�ܾ�� �빮�ڷ� ����ϴ� ��찡 ����
	ex) Myclass, emptyData

	3) ���ӽ����̽�
	- �ҹ��ڷ� �ۼ��� ���� �Ѵ�.
	-using namespace std;
	-namespace std {
	}
	
	4) ���
	- �빮�ڷ� �ۼ�
	- #define PI 3.14, MAX_SIZe, DEFAULT_CALUSE
	
4. ���̹� ���� ����
    - �ǹ� �ִ� �̸� ��� : �̸��� ���� ��Ȱ�� �� ���ֵ��� �̸��� ���´�.
	- ȥ�� ���ϱ� : ���� O(���� �빮��) , 0, o, l, | , I 
	- ���� ���� : �ʹ� ª�� ���� ����� �ǹ� ������ ��Ʊ� ������ �����ؾ� �Ѵ�.

5. ���ӽ����̽� ���
	- �̸� �浹�� ���ϰ� �ڵ带 ����ȭ �� �� �ִ�.
*/

/*

�Լ��� �����ΰ� ?
	- Ư�� �۾��� �����ϴ� �ڵ� ���̴�.

1. �Լ��� ����
	- return [��]; ��ȯ�� , void : ��ȯ���� ������ ����  ���ϰ��� ���涧 -> return;
	- �Լ� �̸�
	- �Ű� ���� parameter, 0 ~ ���Ѿ���.
	- �Լ� ��ü : {   } �Լ� ���� ���ָ��.


- �Լ� ����
	ex)
	int add(int a, int b);


- �Լ� ����
	int add(int a, int b)
	{
		int c = a+ b;

		return c; 
	}

- �Լ� ���
	int result = add(10,10);


*/

// �Լ� �����ε� 
//int add(int a, int b);
//int add(int a, int b, int c);
//int add(float a, float b);

//����Լ�?
//n! = n* ((((n-1)-1)-1)-1)
int factorial(int n)
{
	if (n <= 1) return 1;
	else

	return n * factorial(n-1);
}


//����Ʈ �Լ� ����

void printMessage()
{
	cout << "Hello : , ����Ʈ�Լ� �Դϴ�." << endl;
}

void printMessage1()
{
	cout << "Hello : , printMessage1" << endl;
}

void printMessage2()
{
	cout << "Hello : , printMessage2" << endl;
}

int main()
{
	int value = 5;
	void (*funcPtr)() = nullptr;

	if (value > 5)
	funcPtr = &printMessage;
	else if (value == 5)
	funcPtr = &printMessage1;
	else
	funcPtr = &printMessage2;


	funcPtr();

	return 0;
}


//int add(int a, int b)
//{
//	int sum = a + b;
//
//	return 0;
//}

//void main()
//{
//
//
//	factorial(5);
//
//	//add(4, 5);
//
//	int nValue = add(5,10);
//
//	if (nValue >= 10)
//	{
//		nValue = 0;
//	}
//	else
//	{
//		return ;
//	}
//
//
//	return ;
//}