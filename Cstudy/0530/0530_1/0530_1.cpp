 #include <iostream>
#include "../Dll1/math.h"
#include <Windows.h> //윈도우 API함수 사용을 위해서 추가함

typedef int (*math_func)(int, int);

int main()
{

	//1. 라이브러리 열기 (dll파일을 읽어오기)
	HINSTANCE hinstLib = LoadLibrary(L"48.dll");
		if (!hinstLib)
		{
			std::cout << L"48.dll 파일명 을 찾을수 없습니다" << std::endl;
				return 1;
		}

		math_func plus = (math_func)GetProcAddress(hinstLib, "Add");

		if (!plus)
		{
			std::cout << L"Add함수를 찾지 못했습니다." << std::endl;
			return 1;
		}

		math_func sub = (math_func)GetProcAddress(hinstLib, "Sub");

		if (!sub)
		{
			std::cout << L"Sud함수를 찾지 못했습니다." << std::endl;
			return 1;
		}

	int c = plus(10, 30);

	std::cout << c << std::endl;

	int d = sub(10, 50);

	std::cout << d << std::endl;


	FreeLibrary(hinstLib);

	return 0;
}




