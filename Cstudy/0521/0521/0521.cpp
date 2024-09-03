#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
c++ 네이밍 규칙 과 제한사항
1. 식별자란
	변수, 식별자, 클래스, 네이스페이스, 모듈 등의 요소를 구별하는 데 사용되는 이름 

2. 네이밍 규칙
   1) 사용할수 있는 문자
   - 알파벳 : 소문자, 대문자
   - 숫자 
   - 밑줄 : _

   2) 첫글자 규칙
    -알파벳, 밑줄 로 시작해야 한다.
	- 숫자를 사용할수 없음.

	3) 대소문자 구분
	- Value, value 서로 다르게 인식됨.

	4) 길이 제한
	- 길이 제한은 없음.

	5) 예약어 금지
	- c++ 예약어(키워드)
		ex) int, void, class, return

3. 네임 - 코드의 가독성, 유지보수?
	1) 변수 와 함수
	-myvalueadd, calcluateSum
	-my_value_add, calcluate_Sum
	-Cmyclass, m_ , p_
	
	2) 클래스 
	-단어마다 대문자로 사용하는 경우가 많음
	ex) Myclass, emptyData

	3) 네임스페이스
	- 소문자로 작성을 많이 한다.
	-using namespace std;
	-namespace std {
	}
	
	4) 상수
	- 대문자로 작성
	- #define PI 3.14, MAX_SIZe, DEFAULT_CALUSE
	
4. 네이밍 주의 사항
    - 의미 있는 이름 사용 : 이름만 보고도 역활을 알 수있도록 이름을 짓는다.
	- 혼동 피하기 : 변수 O(영어 대문자) , 0, o, l, | , I 
	- 축양어 자제 : 너무 짧은 축약어 사용은 의미 전달이 어렵기 때문에 자제해야 한다.

5. 네임스페이스 사용
	- 이름 충돌을 피하고 코드를 조직화 할 수 있다.
*/

/*

함수란 무엇인가 ?
	- 특정 작업을 수행하는 코드 블럭이다.

1. 함수의 구조
	- return [값]; 반환형 , void : 반환값이 없을때 정의  리턴값을 남길때 -> return;
	- 함수 이름
	- 매개 변수 parameter, 0 ~ 제한없음.
	- 함수 몸체 : {   } 함수 구현 해주면됨.


- 함수 선언
	ex)
	int add(int a, int b);


- 함수 구현
	int add(int a, int b)
	{
		int c = a+ b;

		return c; 
	}

- 함수 사용
	int result = add(10,10);


*/

// 함수 오버로드 
//int add(int a, int b);
//int add(int a, int b, int c);
//int add(float a, float b);

//재귀함수?
//n! = n* ((((n-1)-1)-1)-1)
int factorial(int n)
{
	if (n <= 1) return 1;
	else

	return n * factorial(n-1);
}


//포인트 함수 예시

void printMessage()
{
	cout << "Hello : , 포인트함수 입니다." << endl;
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