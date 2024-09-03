// 0523.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//클래스 선언
/*
class 클래스이름 
{
public: // 어디서든 접근가능, 변수, 함수
pruvate: // 클래스 내에서만 접근가능, defuault
protected: // 자식 사용가능, 클래스 내부에서도 사용가능 


};


*/

class Car
{
private: //default 선언
	int value;
	int proteVar;
	int x, y;

public:
	int num;
	void ptivateFunc1(int x, int y) {
		
		this->x = x;  //this 객체 자신을 가르키는 용도 
		this->y = y;
	}
	Car();
	Car(const Car& other);
	~Car();

	void Display() {
		 
	}


private:
	int privateValue;
	int privateValue2;
	void privateFunc();


protected:
	int protecVar;




};

Car::Car() {

}
Car::~Car() {

}
Car::Car(const Car& other) {
	this->x = other.x;
	this->y = other.y;
	privateValue = other.privateValue;


}


void Car::privateFunc() {
	int i = 100;

}



int main()
{
	
	Car car, car1; //인스턴스 생성
	car.ptivateFunc1(5,4);

	Car* pCar = new Car(); //인스턴스 생성방법2, 동적할당
	pCar->ptivateFunc1(10,100);

	delete pCar;
	
	Car car1(car); //복사생성자
	//pCar = &car; //얕은 복사
	car1.Display();



}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
