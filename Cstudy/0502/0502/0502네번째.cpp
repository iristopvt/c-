#include "hh.h"



이거는 다시한번 살펴봐야함


//메모리 생성, 삭제 
class Object
{
public:
	int value;

	//생성자
	Object(int val) : value(val){} //생성자를 통한 초기화

	void printValue()
	{
		cout << "Value" << value << endl;
	}
};


int main()
{
	const int OBJECT_MAX = 6; //객체의 개수
	Object** objects = new Object * [OBJECT_MAX]; // 이중 포인터 배열 동적 할당
	//2차원 배열을 이중 포인터로 만든거 


	//객체 배열에 객체 할당 및 초기화
	for (int i = 0; i < OBJECT_MAX; ++i)
	{
		objects[i] = new Object(i); //생성자를 통해 초기화
	}

	//할당된 객체 배열 사용 ㄴ
	for (int i = 0; i < OBJECT_MAX; ++i)
	{
		objects[i]->printValue(); // 객체값 출력
	}

	for (int i = 0; i < OBJECT_MAX; i++)
	{
		delete[] objects[i]; //객체 배열 해제
	}
	
	delete[] objects;

}