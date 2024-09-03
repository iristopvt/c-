#include <iostream>
#include <string>
#include <vector>
// 함수,템플릿,람다
using namespace std;

//함수 선언 
// 덧셈함수
//int add(int a, int b);
////float를 더하는 함수선언
//float add(float a, float b);
////double 함수선언
//double add(double a, double b);
//
//string add(string a, string b);

//위와 같이 데이터 타입에 독립적인 함수를 작성하는 방식 C++템플릿

//템플릿 함수는 를 int double float 등과 같이 함수를 따로 만들필요없이 템플릿 함수 하나만 있음 되는건가
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
함수
	=생성=
  - template<typename T> 
	//템플릿 함수는 를 int double float 등과 같이 함수를 따로 만들필요없이 템플릿 함수 하나만 있음 되는건가
	template<typename T>//, typename T1>
	T add(T a, T b)
	{
		T c = a + b;
		return c;
	}
  =사용=
	함수호출시 컴파일러가 타입을 추론하여 인스턴스화
	사용은 일반함수처럼 호출

 클래스
	 =생성=
	template<typename T>
	class MyClass
	{
	private:
	T data;
	public:
	MyClass(T d) : data(d){}
	T getData() { return data; }
	}

	=사용=
	인스턴스화된 객체를 통해 멤버접근
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

	//	람다 = > 익명함수를 생성하고 전달하는데 사용되는 함수형 프로그래밍 개념
	// 간결하게 표현하고 코드를 간소화 하는데 활용됨.

	//간단한 정수를 더하는 람다 함수
	//람다함수 만들기
	//[&],[=] 캡쳐 형식 
	// [&] 외부변수를 람다함수 내에서 참조로 캡처한다. 
	//즉 람다함수내에서 외부변수를 변경할 수 있다.
	int f = 5;
	auto add = [&f](int x, int y)-> int
		{
			f++;
			x += f;
			return x + y;
		};

	int result = add(3, 10);

	cout << "람쥐썬더의결과는 : " << result << endl;
	
	//2. [=] : 외부변수를 함수내에서 가져와 사용하는것, 읽기 전용
	auto x = 5;
	auto lamda = [=]() 
		{
			int y = x * 2;
			cout << y << endl;

		};

	lamda();

	return 0;
}

//함수만들기

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



