 #include <iostream>
#include "../Dll1/math.h"
#include <Windows.h> //������ API�Լ� ����� ���ؼ� �߰���

typedef int (*math_func)(int, int);

int main()
{

	//1. ���̺귯�� ���� (dll������ �о����)
	HINSTANCE hinstLib = LoadLibrary(L"48.dll");
		if (!hinstLib)
		{
			std::cout << L"48.dll ���ϸ� �� ã���� �����ϴ�" << std::endl;
				return 1;
		}

		math_func plus = (math_func)GetProcAddress(hinstLib, "Add");

		if (!plus)
		{
			std::cout << L"Add�Լ��� ã�� ���߽��ϴ�." << std::endl;
			return 1;
		}

		math_func sub = (math_func)GetProcAddress(hinstLib, "Sub");

		if (!sub)
		{
			std::cout << L"Sud�Լ��� ã�� ���߽��ϴ�." << std::endl;
			return 1;
		}

	int c = plus(10, 30);

	std::cout << c << std::endl;

	int d = sub(10, 50);

	std::cout << d << std::endl;


	FreeLibrary(hinstLib);

	return 0;
}




